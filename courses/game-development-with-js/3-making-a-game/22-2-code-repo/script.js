let count = 0;

const canvas = document.getElementById('canvas');
const context = canvas.getContext('2d');

let x = 300;
let y = 350;

function drawCircle() {
  context.beginPath();
  context.arc(x, y, 50, 0, 2 * Math.PI);
  context.fillStyle = 'red';
  context.fill();
}

function updateCount() {
  context.font = '25px Arial';
  context.fillStyle = 'white';
  context.fillText(`Count: ${count}`, 20, 30);
}

function clearCanvas() {
  context.clearRect(0, 0, 600, 400);
}

function jumpCircle() {
  count += 1;
  y -= 25;

  clearCanvas();
  drawCircle();
  updateCount();

  window.requestAnimationFrame(jumpCircle);
}

function initialize() {
  drawCircle();
  updateCount();

  document.addEventListener('keydown', jumpCircle);
  document.addEventListener('touchstart', jumpCircle);
}

window.addEventListener('DOMContentLoaded', initialize);
