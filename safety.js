// ==UserScript==
// @name        KAIST Safety
// @namespace   https://github.com/kanglib/Temp/blob/master/safety.js
// @match       https://safety.kaist.ac.kr/NEXTER/index.html
// @version     1.0
// @run-at      document-idle
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
