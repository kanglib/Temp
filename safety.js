// ==UserScript==
// ==/UserScript==

setInterval(function() {
    var node = document.querySelector('.btn_WF_VpPlay');
    node.focus();

    var clickEvent = document.createEvent('MouseEvents');
    clickEvent.initEvent('mousedown', true, true);
    node.dispatchEvent(clickEvent);

    var clickEvent = document.createEvent('MouseEvents');
    clickEvent.initEvent('mouseup', true, true);
    node.dispatchEvent(clickEvent);
}, 1000);
