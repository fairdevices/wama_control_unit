#include "ui.h"

const char pageTop[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>UCB</title>

<style>
body{
  font-family:Arial;
  text-align:center;
  margin:0;
  background:#f5f5f5;
  font-size:80%;
}

h1{
  font-size:26px;
  margin:12px 0 8px 0;
}

h2{
  font-size:18px;
  margin:8px 0 6px 0;
}

.topBar{
  display:flex;
  align-items:flex-start;
  justify-content:flex-start;
  gap:14px;
  padding:8px 10px 0 10px;
}

.logo{
  width:88px;
  max-width:35%;
  margin:0;
  text-align:left;
}

.controlButtons{
  display:flex;
  gap:11px;
  margin-top:6px;
}

.roundButton{
  width:59px;
  height:59px;
  border-radius:50%;
  border:2px solid #555;
  color:white;
  font-size:14px;
  font-weight:bold;
  box-shadow:0 4px 8px rgba(0,0,0,.25);
  cursor:pointer;
  user-select:none;
}

.roundButton.green{
  background:#4CAF50;
}

.roundButton.red{
  background:#D32F2F;
}

.roundButton.gray{
  background:#9E9E9E;
}

.group{
  margin:10px 12px;
  padding:4px;
  background:white;
  border-radius:11px;
}

.scrollmenu{
  display:flex;
  overflow-x:auto;
  gap:10px;
  padding:8px;
  scroll-snap-type:x mandatory;
}

.option{
  min-width:80px;
  height:44px;
  border:2px solid #888;
  border-radius:11px;
  background:#eee;
  font-size:11px;
  display:flex;
  align-items:center;
  justify-content:center;
  scroll-snap-align:center;
  user-select:none;
}

.option.selected{
  background:#0055A4;
  color:white;
  border-color:#0055A4;
}

.value{
  font-size:14px;
  margin-top:8px;
  color:#333;
}

.switchRow{
  display:flex;
  justify-content:center;
  gap:16px;
  margin:8px;
}

.switchContainer{
  text-align:center;
}

.switch{
  position:relative;
  display:inline-block;
  width:56px;
  height:29px;
}

.switch input{
  display:none;
}

.slider{
  position:absolute;
  cursor:pointer;
  top:0;
  left:0;
  right:0;
  bottom:0;
  background-color:#ccc;
  transition:.3s;
  border-radius:29px;
}

.slider:before{
  position:absolute;
  content:"";
  height:22px;
  width:22px;
  left:4px;
  bottom:3px;
  background:white;
  transition:.3s;
  border-radius:50%;
}

input:checked + .slider{
  background-color:#4CAF50;
}

input:checked + .slider:before{
  transform:translateX(26px);
}

@media (max-width:420px){
  .topBar{
    gap:10px;
  }

  .logo{
    width:82px;
  }

  .roundButton{
    width:56px;
    height:56px;
    font-size:13px;
  }

  .group{
    margin:8px 10px;
  }
}

</style>
</head>

<body>
<div class="topBar">
  <div class="logo">
)rawliteral";

const char logoSvg[] PROGMEM = R"rawliteral(
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!-- Created with Inkscape (http://www.inkscape.org/) -->

<svg width="19.8mm" height="23.673mm" version="1.1" viewBox="0 0 19.8 23.673" xmlns="http://www.w3.org/2000/svg">
<g transform="translate(-95.319 -136.5)">
<path d="m97.607 142.25 3.75 3.75v7.5" style="fill:none;stroke-linecap:round;stroke-linejoin:round;stroke-width:.5;stroke:#000"/>
<path d="m102.61 138.5 1.25 3.75v13.75" style="fill:none;stroke-linecap:round;stroke-linejoin:round;stroke-width:.5;stroke:#000"/>
<path d="m107.61 139.75-1.25 5v11.25" style="fill:none;stroke-linecap:round;stroke-linejoin:round;stroke-width:.5;stroke:#000"/>
<path d="m112.61 144.75-3.75 3.75v5" style="fill:none;stroke-linecap:round;stroke-linejoin:round;stroke-width:.5;stroke:#000"/>
<circle cx="112.61" cy="144.75" r="1.7429" style="fill:#34fa75;stroke-linecap:round;stroke-linejoin:round;stroke-width:.51416;stroke:#000"/>
<circle cx="107.61" cy="139.75" r="1.7429" style="fill:#d4d230;stroke-linecap:round;stroke-linejoin:round;stroke-width:.51416;stroke:#000"/>
<circle cx="97.607" cy="142.25" r="1.7429" style="fill:#d444d5;stroke-linecap:round;stroke-linejoin:round;stroke-width:.51416;stroke:#000"/>
<circle cx="102.61" cy="138.5" r="1.7429" style="fill:#3ad2d5;stroke-linecap:round;stroke-linejoin:round;stroke-width:.51416;stroke:#000"/>
<g transform="matrix(.26458 0 0 .26458 75.234 105.94)" style="fill:#d4d2d5;stroke-linecap:round;stroke-linejoin:round;stroke-width:.75591;stroke:#000;white-space:pre" aria-label="fairdevices">
<path d="m79.407 204.79h-2.3783v-9.9531q0-1.0579 0.36393-1.7689 0.36393-0.71093 1.0241-1.0833 0.66862-0.37239 1.5827-0.37239 0.29622 0 0.55859 0.0508 0.27083 0.0423 0.52474 0.11849l-0.02539 1.8874q-0.11003-0.0339-0.26237-0.0508-0.15234-0.0169-0.32161-0.0169-0.33854 0-0.58398 0.14388-0.23698 0.14388-0.36393 0.41471-0.11849 0.27083-0.11849 0.67708zm1.4303-9.1575v1.7858h-4.9258v-1.7858zm5.3489 7.0501v-4.2318q0-0.41472-0.10156-0.66016-0.0931-0.24544-0.28776-0.35547-0.1862-0.11849-0.45703-0.11849-0.30469 0-0.50781 0.12696-0.20312 0.12695-0.30469 0.36393-0.0931 0.23698-0.0931 0.56706h-2.3783q0-0.59245 0.22852-1.1172 0.22852-0.5332 0.66862-0.93099 0.44857-0.40625 1.0664-0.63476 0.61784-0.22852 1.388-0.22852 0.91406 0 1.625 0.31315 0.71094 0.30469 1.1256 0.97331t0.41471 1.735v4.0794q0 0.77018 0.07617 1.2526 0.08464 0.48242 0.24544 0.82943v0.14388h-2.3867q-0.16081-0.38086-0.24544-0.94792-0.07617-0.57552-0.07617-1.1595zm0.28776-3.487 0.0085 1.4219h-0.87174q-0.33854 0-0.59245 0.11003-0.24544 0.11002-0.41471 0.31315-0.16927 0.19466-0.2539 0.45703-0.07617 0.26237-0.07617 0.55859 0 0.33008 0.0931 0.55859 0.0931 0.22852 0.2793 0.34701 0.1862 0.11849 0.4401 0.11849 0.38932 0 0.67708-0.16081t0.42318-0.38932q0.14388-0.22852 0.0931-0.42318l0.54167 0.92252q-0.10156 0.31315-0.2793 0.6517-0.16927 0.33854-0.43164 0.6263t-0.65169 0.47395q-0.38086 0.17774-0.9056 0.17774-0.73633 0-1.3457-0.33854-0.60937-0.33854-0.96484-0.94792-0.347-0.60937-0.347-1.4473 0-0.69401 0.22005-1.2526 0.22852-0.56706 0.67708-0.95638 0.44857-0.39779 1.1341-0.60937 0.68555-0.21159 1.6081-0.21159zm6.3307-3.5632v9.1575h-2.3783v-9.1575zm-2.4883-2.3782q0-0.55013 0.347-0.90559 0.35547-0.35547 0.95638-0.35547 0.59245 0 0.93945 0.35547 0.347 0.35546 0.347 0.90559t-0.347 0.91406q-0.347 0.35547-0.93945 0.35547-0.60091 0-0.95638-0.35547-0.347-0.36393-0.347-0.91406zm6.737 4.418v7.1178h-2.3698v-9.1575h2.2344zm2.1582-2.1074-0.03385 2.3613q-0.16081-0.0339-0.38932-0.0508-0.22005-0.0169-0.38932-0.0169-0.39779 0-0.67708 0.12695-0.2793 0.11849-0.46549 0.36393-0.17773 0.23698-0.27083 0.59245-0.0931 0.35547-0.11003 0.80404l-0.44857-0.16927q0-0.89714 0.13542-1.6419 0.14388-0.75325 0.42318-1.3034 0.2793-0.55859 0.66862-0.86328 0.39779-0.30469 0.89713-0.30469 0.16927 0 0.35547 0.0339 0.19466 0.0254 0.30469 0.0677z" style="fill:#000;stroke:none"/>
<path d="m105.47 203.01v-11.223h1.4896v13h-1.3626zm-5.1204-2.3613v-0.85481q0-1.1341 0.22005-1.9466 0.22005-0.82097 0.6263-1.3457 0.40625-0.53321 0.9733-0.78711 0.56706-0.25391 1.2526-0.25391 0.71094 0 1.2188 0.28776 0.51628 0.28776 0.86328 0.83789 0.34701 0.54167 0.54167 1.3203 0.20312 0.77018 0.27083 1.7435v1.1426q-0.0762 0.96485-0.2793 1.735-0.19466 0.77018-0.54166 1.3118-0.34701 0.54167-0.86328 0.82943-0.51628 0.28776-1.2272 0.28776-0.67708 0-1.2357-0.26237-0.55859-0.27083-0.9733-0.80404-0.40625-0.54166-0.6263-1.3457-0.22005-0.8125-0.22005-1.8958zm1.498-0.85481v0.85481q0 0.76172 0.11002 1.3288 0.11003 0.55859 0.34701 0.93098 0.23698 0.36394 0.60091 0.54167 0.37239 0.17773 0.88867 0.17773 0.6263 0 1.0241-0.30468 0.39778-0.30469 0.63476-0.80404 0.24544-0.50781 0.38932-1.0918v-2.4036q-0.0846-0.43164-0.24544-0.82943-0.16081-0.40625-0.40625-0.7194-0.23698-0.32161-0.58398-0.50781-0.33854-0.1862-0.79557-0.1862-0.51628 0-0.89714 0.1862-0.37239 0.1862-0.60937 0.55859-0.22852 0.3724-0.34701 0.93945-0.11002 0.56706-0.11002 1.3288zm10.698 5.1628q-0.82096 0-1.4811-0.24544-0.66015-0.24545-1.1256-0.74479-0.46549-0.50782-0.71093-1.278-0.24545-0.77018-0.24545-1.8196v-1.0326q0-1.2103 0.2793-2.0482 0.28776-0.83789 0.77018-1.3457 0.48242-0.51627 1.0918-0.74479 0.60938-0.23698 1.2526-0.23698 0.86328 0 1.4726 0.2793t0.99023 0.82942q0.38086 0.55013 0.5586 1.3542 0.18619 0.80403 0.18619 1.8535v0.87174h-5.7213v-1.278h4.2233v-0.21159q-0.0339-0.71093-0.19466-1.2526-0.15235-0.54166-0.50781-0.84635-0.35547-0.31315-1.0072-0.31315-0.41472 0-0.77018 0.14388-0.34701 0.13541-0.60091 0.48242-0.24545 0.33854-0.38933 0.93945-0.13541 0.60091-0.13541 1.5234v1.0326q0 0.73632 0.13541 1.2695 0.14388 0.52474 0.41472 0.87175 0.27929 0.33854 0.67708 0.50781 0.40625 0.16081 0.92252 0.16081 0.75326 0 1.2441-0.28776 0.49088-0.29623 0.85482-0.75326l0.7871 0.93945q-0.24544 0.34701-0.64322 0.66862-0.38933 0.31315-0.96485 0.51628-0.56705 0.19466-1.3626 0.19466zm7.1094-1.5827 1.9635-7.7441h1.5234l-2.7168 9.1575h-0.99023zm-1.5827-7.7441 2.0482 7.7864 0.16081 1.3711h-0.98177l-2.7506-9.1575zm8.235 0v9.1575h-1.4896v-9.1575zm-1.5742-2.429q0-0.38086 0.21159-0.64323t0.63476-0.26237q0.42318 0 0.63477 0.26237 0.22005 0.26237 0.22005 0.64323 0 0.36393-0.22005 0.6263-0.21159 0.25391-0.63477 0.25391-0.42317 0-0.63476-0.25391-0.21159-0.26237-0.21159-0.6263zm7.1178 10.478q0.44856 0 0.81249-0.17774 0.3724-0.1862 0.60938-0.57552 0.23698-0.39778 0.27083-1.0326h1.405q-0.0339 0.91406-0.4655 1.6081-0.42317 0.68555-1.1172 1.0749-0.68555 0.38086-1.515 0.38086-0.88868 0-1.5488-0.28776-0.65169-0.28776-1.0833-0.82943-0.42318-0.55013-0.63477-1.3288-0.21158-0.78711-0.21158-1.7858v-1.0326q0-0.9987 0.21158-1.7774 0.21159-0.7871 0.63477-1.3288 0.43164-0.55013 1.0833-0.83789 0.66015-0.28776 1.5488-0.28776 0.93098 0 1.6081 0.39779 0.68555 0.38932 1.0664 1.1341 0.38932 0.73633 0.42318 1.7858h-1.405q-0.0339-0.67708-0.24544-1.1256-0.21159-0.45703-0.57552-0.67709-0.36393-0.22851-0.87174-0.22851-0.59245 0-0.98177 0.21159-0.38086 0.20312-0.60091 0.59244-0.22006 0.38933-0.31315 0.93099-0.0846 0.54167-0.0846 1.2103v1.0326q0 0.66861 0.0846 1.2187 0.0931 0.54167 0.30468 0.93099 0.22005 0.38932 0.60938 0.60091 0.38932 0.20313 0.98177 0.20313zm8.108 1.278q-0.82096 0-1.4811-0.24544-0.66016-0.24545-1.1256-0.74479-0.4655-0.50782-0.71094-1.278t-0.24544-1.8196v-1.0326q0-1.2103 0.2793-2.0482 0.28776-0.83789 0.77018-1.3457 0.48242-0.51627 1.0918-0.74479 0.60938-0.23698 1.2526-0.23698 0.86328 0 1.4727 0.2793 0.60937 0.2793 0.99023 0.82942 0.38086 0.55013 0.55859 1.3542 0.1862 0.80403 0.1862 1.8535v0.87174h-5.7213v-1.278h4.2233v-0.21159q-0.0339-0.71093-0.19467-1.2526-0.15234-0.54166-0.50781-0.84635-0.35547-0.31315-1.0072-0.31315-0.41471 0-0.77018 0.14388-0.347 0.13541-0.60091 0.48242-0.24544 0.33854-0.38932 0.93945-0.13542 0.60091-0.13542 1.5234v1.0326q0 0.73632 0.13542 1.2695 0.14388 0.52474 0.41471 0.87175 0.2793 0.33854 0.67708 0.50781 0.40625 0.16081 0.92253 0.16081 0.75325 0 1.2441-0.28776 0.49088-0.29623 0.85481-0.75326l0.78711 0.93945q-0.24544 0.34701-0.64323 0.66862-0.38932 0.31315-0.96484 0.51628-0.56705 0.19466-1.3626 0.19466zm9.293-2.5137q0-0.347-0.16927-0.60937t-0.55859-0.50781q-0.38086-0.24545-1.0326-0.52474-0.63477-0.26237-1.1426-0.51628-0.49935-0.26237-0.84635-0.56705-0.347-0.30469-0.5332-0.70248-0.17774-0.40625-0.17774-0.95638 0-0.55012 0.20313-1.0156 0.21159-0.47396 0.59244-0.82942 0.38086-0.35547 0.91407-0.55013 0.5332-0.20313 1.1934-0.20313 0.93945 0 1.5996 0.36393 0.66015 0.36394 1.0072 0.9987 0.35547 0.6263 0.35547 1.4134h-1.4896q0-0.38086-0.16927-0.7194t-0.49935-0.55013q-0.33008-0.22005-0.80404-0.22005-0.49935 0-0.8125 0.17773-0.31315 0.17774-0.45703 0.4655-0.13541 0.27929-0.13541 0.61783 0 0.25391 0.0677 0.44011 0.0762 0.17773 0.2539 0.33854 0.17774 0.15234 0.48242 0.32161 0.31315 0.16081 0.79557 0.3724 0.93099 0.36393 1.5658 0.73632 0.63476 0.3724 0.96484 0.87175 0.33008 0.49934 0.33008 1.2357 0 0.60091-0.22006 1.0918-0.21158 0.48242-0.60937 0.82942-0.39779 0.34701-0.95638 0.5332-0.55013 0.17774-1.2357 0.17774-1.0326 0-1.752-0.40625-0.71094-0.41471-1.0833-1.0749-0.36394-0.66862-0.36394-1.4303h1.498q0.0254 0.64322 0.28776 0.99869 0.27083 0.35547 0.65169 0.49089 0.38086 0.13541 0.76172 0.13541 0.49934 0 0.83789-0.14388 0.33854-0.15234 0.50781-0.43164 0.17773-0.27929 0.17773-0.65169z" style="fill:#000;stroke:none"/>
</g>
<text transform="scale(.26458)" style="font-family:sans-serif;font-size:40px;line-height:1.25;shape-inside:url(#rect9);white-space:pre" xml:space="preserve"/>
</g>
</svg>
)rawliteral";

const char pageBottom[] PROGMEM = R"rawliteral(
  </div>

  <div class="controlButtons">
    <button id="onButton" class="roundButton green" onclick="pressOn()">ON</button>
    <button id="offButton" class="roundButton gray" onclick="pressOff()">OFF</button>
  </div>
</div>

<div class="group">
  <h2>Washing Progamm</h2>
  <div class="scrollmenu" id="menu1">
    <div class="option" onclick="selectOption('menu1', this)">Coloured Loundry</div>
    <div class="option" onclick="selectOption('menu1', this)">Wool</div>
    <div class="option" onclick="selectOption('menu1', this)">Holey Socks</div>
    <div class="option" onclick="selectOption('menu1', this)">Hand wash</div>
    <div class="option" onclick="selectOption('menu1', this)">ECO</div>
  </div>
</div>

<div class="group">
  <h2>Temperature</h2>
  <div class="scrollmenu" id="menu2">
    <div class="option" onclick="selectOption('menu2', this)">30°C</div>
    <div class="option" onclick="selectOption('menu2', this)">45°C</div>
    <div class="option" onclick="selectOption('menu2', this)">60°C</div>
    <div class="option" onclick="selectOption('menu2', this)">90°C</div>
  </div>
</div>

<div class="group">
  <h2>Spinning Speed</h2>
  <div class="scrollmenu" id="menu3">
    <div class="option" onclick="selectOption('menu3', this)">300</div>
    <div class="option" onclick="selectOption('menu3', this)">600</div>
    <div class="option" onclick="selectOption('menu3', this)">900</div>
    <div class="option" onclick="selectOption('menu3', this)">1200</div>
  </div>
</div>

<script>
function selectOption(menuId, element){
  var menu = document.getElementById(menuId);
  var options = menu.getElementsByClassName("option");

  for(var i = 0; i < options.length; i++){
    options[i].classList.remove("selected");
  }

  element.classList.add("selected");
}

function updatePowerButtons(powerOn){
  document.getElementById("onButton").className = powerOn ? "roundButton gray" : "roundButton green";
  document.getElementById("offButton").className = powerOn ? "roundButton red" : "roundButton gray";
}

function pressOn(){
  updatePowerButtons(true);
  fetch("/api/power/on", {method:"POST"}).then(function(response){ return response.json(); }).then(function(state){
    updatePowerButtons(state.powerOn);
  });
}

function pressOff(){
  updatePowerButtons(false);
  fetch("/api/power/off", {method:"POST"}).then(function(response){ return response.json(); }).then(function(state){
    updatePowerButtons(state.powerOn);
  });
}

fetch("/api/state").then(function(response){ return response.json(); }).then(function(state){
  updatePowerButtons(state.powerOn);
});
</script>

<div class="group">
  <h2>Extra Functions</h2>

  <div class="switchRow">

    <div class="switchContainer">
      <div>Prewash</div>
      <label class="switch">
        <input type="checkbox" id="prewash">
        <span class="slider"></span>
      </label>
    </div>

    <div class="switchContainer">
      <div>Extra Rinsing</div>
      <label class="switch">
        <input type="checkbox" id="rinse">
        <span class="slider"></span>
      </label>
    </div>

  </div>
</div>

</body>
</html>
)rawliteral";
