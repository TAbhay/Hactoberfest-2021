function jump() {
    Runner.instance_.tRex.setDuck(!1), Runner.instance_.tRex.jumping || Runner.instance_.tRex.ducking || (Runner.instance_.playSound(Runner.instance_.soundFx.BUTTON_PRESS), Runner.instance_.tRex.startJump(Runner.instance_.currentSpeed))
}
function duck() {
    Runner.instance_.tRex.jumping ? Runner.instance_.tRex.setSpeedDrop() : Runner.instance_.tRex.jumping || Runner.instance_.tRex.ducking || Runner.instance_.tRex.setDuck(!0)
}
setInterval(function () {
    Runner.instance_.horizon.obstacles.length > 0 && (Runner.instance_.horizon.obstacles[0].xPos < 25 * Runner.instance_.currentSpeed - Runner.instance_.horizon.obstacles[0].width / 2 && Runner.instance_.horizon.obstacles[0].yPos > 75 && jump(), Runner.instance_.horizon.obstacles[0].xPos < 30 * Runner.instance_.currentSpeed - Runner.instance_.horizon.obstacles[0].width / 2 && Runner.instance_.horizon.obstacles[0].yPos <= 75 && duck())
}, 5);
