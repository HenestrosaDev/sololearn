const btn = document.getElementById('jump');
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

function handleClick() {
    count += 1;
}

function initialize() {
    drawCircle();
    btn.addEventListener('click', handleClick);
}

window.addEventListener('DOMContentLoaded', initialize);
