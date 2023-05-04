// Variables
let timePassedInSeconds = 0;
let lastUpdateTime = Date.now();
let jumpSpeed = 25;
const gravity = 50;
let score = 0;
let circleX = 300;
let circleY = 350;

// Get canvas and context once and reuse them
const canvas = document.getElementById('canvas');
const context = canvas.getContext('2d');

function drawCircle() {
  context.beginPath();
  context.arc(circleX, circleY, 50, 0, 2 * Math.PI);
  context.fillStyle = 'red';
  context.fill();
}

function updateScore() {
  context.font = '25px Arial';
  context.fillStyle = 'white';
  context.fillText(`Score: ${score}`, 20, 30);
}

function clearCanvas() {
  context.clearRect(0, 0, 600, 400);
}

function updateCirclePosition() {
  const currentTime = Date.now();
  const timePassedInMilliseconds = currentTime - lastUpdateTime;
  lastUpdateTime = currentTime;

  timePassedInSeconds = timePassedInMilliseconds / 1000;

  if (circleY < 350) {
    jumpSpeed += gravity * timePassedInSeconds;
    circleY += jumpSpeed * timePassedInSeconds;
  }

  clearCanvas();
  drawCircle();
  updateScore();

  if (circleY > 350 || circleY < 50) {
    score = 0
    circleY = 350
  }

  window.requestAnimationFrame(updateCirclePosition);
}

function jump() {
  score += 1;
  circleY -= 25;
  jumpSpeed = 25;
}

function initialize() {
  updateCirclePosition();

  // Use addEventListener to handle events
  document.addEventListener('keydown', jump);
  document.addEventListener('touchstart', jump);
}

window.addEventListener('DOMContentLoaded', initialize);
