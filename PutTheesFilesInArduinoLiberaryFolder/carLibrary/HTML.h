const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title> Kontrollpanel </title>
        <script>  
        /**
         * Swiper 8.2.4
         * Most modern mobile touch slider and framework with hardware accelerated transitions
         * https://swiperjs.com
         *
         * Copyright 2014-2022 Vladimir Kharlampidi
         *
         * Released under the MIT License
         *
         * Released on: June 13, 2022
         */
        !function(e,t){"object"==typeof exports&&"undefined"!=typeof module?module.exports=t():"function"==typeof define&&define.amd?define(t):(e="undefined"!=typeof globalThis?globalThis:e||self).Swiper=t()}(this,(function(){"use strict";function e(e){return null!==e&&"object"==typeof e&&"constructor"in e&&e.constructor===Object}function t(s,a){void 0===s&&(s={}),void 0===a&&(a={}),Object.keys(a).forEach((i=>{void 0===s[i]?s[i]=a[i]:e(a[i])&&e(s[i])&&Object.keys(a[i]).length>0&&t(s[i],a[i])}))}const s={body:{},addEventListener(){},removeEventListener(){},activeElement:{blur(){},nodeName:""},querySelector:()=>null,querySelectorAll:()=>[],getElementById:()=>null,createEvent:()=>({initEvent(){}}),createElement:()=>({children:[],childNodes:[],style:{},setAttribute(){},getElementsByTagName:()=>[]}),createElementNS:()=>({}),importNode:()=>null,location:{hash:"",host:"",hostname:"",href:"",origin:"",pathname:"",protocol:"",search:""}};function a(){const e="undefined"!=typeof document?document:{};return t(e,s),e}const i={document:s,navigator:{userAgent:""},location:{hash:"",host:"",hostname:"",href:"",origin:"",pathname:"",protocol:"",search:""},history:{replaceState(){},pushState(){},go(){},back(){}},CustomEvent:function(){return this},addEventListener(){},removeEventListener(){},getComputedStyle:()=>({getPropertyValue:()=>""}),Image(){},Date(){},screen:{},setTimeout(){},clearTimeout(){},matchMedia:()=>({}),requestAnimationFrame:e=>"undefined"==typeof setTimeout?(e(),null):setTimeout(e,0),cancelAnimationFrame(e){"undefined"!=typeof setTimeout&&clearTimeout(e)}};function r(){const e="undefined"!=typeof window?window:{};return t(e,i),e}class n extends Array{constructor(e){"number"==typeof e?super(e):(super(...e||[]),function(e){const t=e.__proto__;Object.defineProperty(e,"__proto__",{get:()=>t,set(e){t.__proto__=e}})}(this))}}function l(e){void 0===e&&(e=[]);const t=[];return e.forEach((e=>{Array.isArray(e)?t.push(...l(e)):t.push(e)})),t}function o(e,t){return Array.prototype.filter.call(e,t)}function d(e,t){const s=r(),i=a();let l=[];if(!t&&e instanceof n)return e;if(!e)return new n(l);if("string"==typeof e){const s=e.trim();if(s.indexOf("<")>=0&&s.indexOf(">")>=0){let e="div";0===s.indexOf("<li")&&(e="ul"),0===s.indexOf("<tr")&&(e="tbody"),0!==s.indexOf("<td")&&0!==s.indexOf("<th")||(e="tr"),0===s.indexOf("<tbody")&&(e="table"),0===s.indexOf("<option")&&(e="select");const t=i.createElement(e);t.innerHTML=s;for(let e=0;e<t.childNodes.length;e+=1)l.push(t.childNodes[e])}else l=function(e,t){if("string"!=typeof e)return[e];const s=[],a=t.querySelectorAll(e);for(let e=0;e<a.length;e+=1)s.push(a[e]);return s}(e.trim(),t||i)}else if(e.nodeType||e===s||e===i)l.push(e);else if(Array.isArray(e)){if(e instanceof n)return e;l=e}return new n(function(e){const t=[];for(let s=0;s<e.length;s+=1)-1===t.indexOf(e[s])&&t.push(e[s]);return t}(l))}d.fn=n.prototype;const c={addClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));return this.forEach((e=>{e.classList.add(...a)})),this},removeClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));return this.forEach((e=>{e.classList.remove(...a)})),this},hasClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));return o(this,(e=>a.filter((t=>e.classList.contains(t))).length>0)).length>0},toggleClass:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];const a=l(t.map((e=>e.split(" "))));this.forEach((e=>{a.forEach((t=>{e.classList.toggle(t)}))}))},attr:function(e,t){if(1===arguments.length&&"string"==typeof e)return this[0]?this[0].getAttribute(e):void 0;for(let s=0;s<this.length;s+=1)if(2===arguments.length)this[s].setAttribute(e,t);else for(const t in e)this[s][t]=e[t],this[s].setAttribute(t,e[t]);return this},removeAttr:function(e){for(let t=0;t<this.length;t+=1)this[t].removeAttribute(e);return this},transform:function(e){for(let t=0;t<this.length;t+=1)this[t].style.transform=e;return this},transition:function(e){for(let t=0;t<this.length;t+=1)this[t].style.transitionDuration="string"!=typeof e?`${e}ms`:e;return this},on:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];let[a,i,r,n]=t;function l(e){const t=e.target;if(!t)return;const s=e.target.dom7EventData||[];if(s.indexOf(e)<0&&s.unshift(e),d(t).is(i))r.apply(t,s);else{const e=d(t).parents();for(let t=0;t<e.length;t+=1)d(e[t]).is(i)&&r.apply(e[t],s)}}function o(e){const t=e&&e.target&&e.target.dom7EventData||[];t.indexOf(e)<0&&t.unshift(e),r.apply(this,t)}"function"==typeof t[1]&&([a,r,n]=t,i=void 0),n||(n=!1);const c=a.split(" ");let p;for(let e=0;e<this.length;e+=1){const t=this[e];if(i)for(p=0;p<c.length;p+=1){const e=c[p];t.dom7LiveListeners||(t.dom7LiveListeners={}),t.dom7LiveListeners[e]||(t.dom7LiveListeners[e]=[]),t.dom7LiveListeners[e].push({listener:r,proxyListener:l}),t.addEventListener(e,l,n)}else for(p=0;p<c.length;p+=1){const e=c[p];t.dom7Listeners||(t.dom7Listeners={}),t.dom7Listeners[e]||(t.dom7Listeners[e]=[]),t.dom7Listeners[e].push({listener:r,proxyListener:o}),t.addEventListener(e,o,n)}}return this},off:function(){for(var e=arguments.length,t=new Array(e),s=0;s<e;s++)t[s]=arguments[s];let[a,i,r,n]=t;"function"==typeof t[1]&&([a,r,n]=t,i=void 0),n||(n=!1);const l=a.split(" ");for(let e=0;e<l.length;e+=1){const t=l[e];for(let e=0;e<this.length;e+=1){const s=this[e];let a;if(!i&&s.dom7Listeners?a=s.dom7Listeners[t]:i&&s.dom7LiveListeners&&(a=s.dom7LiveListeners[t]),a&&a.length)for(let e=a.length-1;e>=0;e-=1){const i=a[e];r&&i.listener===r||r&&i.listener&&i.listener.dom7proxy&&i.listener.dom7proxy===r?(s.removeEventListener(t,i.proxyListener,n),a.splice(e,1)):r||(s.removeEventListener(t,i.proxyListener,n),a.splice(e,1))}}}return this},trigger:function(){const e=r();for(var t=arguments.length,s=new Array(t),a=0;a<t;a++)s[a]=arguments[a];const i=s[0].split(" "),n=s[1];for(let t=0;t<i.length;t+=1){const a=i[t];for(let t=0;t<this.length;t+=1){const i=this[t];if(e.CustomEvent){const t=new e.CustomEvent(a,{detail:n,bubbles:!0,cancelable:!0});i.dom7EventData=s.filter(((e,t)=>t>0)),i.dispatchEvent(t),i.dom7EventData=[],delete i.dom7EventData}}}return this},transitionEnd:function(e){const t=this;return e&&t.on("transitionend",(function s(a){a.target===this&&(e.call(this,a),t.off("transitionend",s))})),this},outerWidth:function(e){if(this.length>0){if(e){const e=this.styles();return this[0].offsetWidth+parseFloat(e.getPropertyValue("margin-right"))+parseFloat(e.getPropertyValue("margin-left"))}return this[0].offsetWidth}return null},outerHeight:function(e){if(this.length>0){if(e){const e=this.styles();return this[0].offsetHeight+parseFloat(e.getPropertyValue("margin-top"))+parseFloat(e.getPropertyValue("margin-bottom"))}return this[0].offsetHeight}return null},styles:function(){const e=r();return this[0]?e.getComputedStyle(this[0],null):{}},offset:function(){if(this.length>0){const e=r(),t=a(),s=this[0],i=s.getBoundingClientRect(),n=t.body,l=s.clientTop||n.clientTop||0,o=s.clientLeft||n.clientLeft||0,d=s===e?e.scrollY:s.scrollTop,c=s===e?e.scrollX:s.scrollLeft;return{top:i.top+d-l,left:i.left+c-o}}return null},css:function(e,t){const s=r();let a;if(1===arguments.length){if("string"!=typeof e){for(a=0;a<this.length;a+=1)for(const t in e)this[a].style[t]=e[t];return this}if(this[0])return s.getComputedStyle(this[0],null).getPropertyValue(e)}if(2===arguments.length&&"string"==typeof e){for(a=0;a<this.length;a+=1)this[a].style[e]=t;return this}return this},each:function(e){return e?(this.forEach(((t,s)=>{e.apply(t,[t,s])})),this):this},html:function(e){if(void 0===e)return this[0]?this[0].innerHTML:null;for(let t=0;t<this.length;t+=1)this[t].innerHTML=e;return this},text:function(e){if(void 0===e)return this[0]?this[0].textContent.trim():null;for(let t=0;t<this.length;t+=1)this[t].textContent=e;return this},is:function(e){const t=r(),s=a(),i=this[0];let l,o;if(!i||void 0===e)return!1;if("string"==typeof e){if(i.matches)return i.matches(e);if(i.webkitMatchesSelector)return i.webkitMatchesSelector(e);if(i.msMatchesSelector)return i.msMatchesSelector(e);for(l=d(e),o=0;o<l.length;o+=1)if(l[o]===i)return!0;return!1}if(e===s)return i===s;if(e===t)return i===t;if(e.nodeType||e instanceof n){for(l=e.nodeType?[e]:e,o=0;o<l.length;o+=1)if(l[o]===i)return!0;return!1}return!1},index:function(){let e,t=this[0];if(t){for(e=0;null!==(t=t.previousSibling);)1===t.nodeType&&(e+=1);return e}},eq:function(e){if(void 0===e)return this;const t=this.length;if(e>t-1)return d([]);if(e<0){const s=t+e;return d(s<0?[]:[this[s]])}return d([this[e]])},append:function(){let e;const t=a();for(let s=0;s<arguments.length;s+=1){e=s<0||arguments.length<=s?void 0:arguments[s];for(let s=0;s<this.length;s+=1)if("string"==typeof e){const a=t.createElement("div");for(a.innerHTML=e;a.firstChild;)this[s].appendChild(a.firstChild)}else if(e instanceof n)for(let t=0;t<e.length;t+=1)this[s].appendChild(e[t]);else this[s].appendChild(e)}return this},prepend:function(e){const t=a();let s,i;for(s=0;s<this.length;s+=1)if("string"==typeof e){const a=t.createElement("div");for(a.innerHTML=e,i=a.childNodes.length-1;i>=0;i-=1)this[s].insertBefore(a.childNodes[i],this[s].childNodes[0])}else if(e instanceof n)for(i=0;i<e.length;i+=1)this[s].insertBefore(e[i],this[s].childNodes[0]);else this[s].insertBefore(e,this[s].childNodes[0]);return this},next:function(e){return this.length>0?e?this[0].nextElementSibling&&d(this[0].nextElementSibling).is(e)?d([this[0].nextElementSibling]):d([]):this[0].nextElementSibling?d([this[0].nextElementSibling]):d([]):d([])},nextAll:function(e){const t=[];let s=this[0];if(!s)return d([]);for(;s.nextElementSibling;){const a=s.nextElementSibling;e?d(a).is(e)&&t.push(a):t.push(a),s=a}return d(t)},prev:function(e){if(this.length>0){const t=this[0];return e?t.previousElementSibling&&d(t.previousElementSibling).is(e)?d([t.previousElementSibling]):d([]):t.previousElementSibling?d([t.previousElementSibling]):d([])}return d([])},prevAll:function(e){const t=[];let s=this[0];if(!s)return d([]);for(;s.previousElementSibling;){const a=s.previousElementSibling;e?d(a).is(e)&&t.push(a):t.push(a),s=a}return d(t)},parent:function(e){const t=[];for(let s=0;s<this.length;s+=1)null!==this[s].parentNode&&(e?d(this[s].parentNode).is(e)&&t.push(this[s].parentNode):t.push(this[s].parentNode));return d(t)},parents:function(e){const t=[];for(let s=0;s<this.length;s+=1){let a=this[s].parentNode;for(;a;)e?d(a).is(e)&&t.push(a):t.push(a),a=a.parentNode}return d(t)},closest:function(e){let t=this;return void 0===e?d([]):(t.is(e)||(t=t.parents(e).eq(0)),t)},find:function(e){const t=[];for(let s=0;s<this.length;s+=1){const a=this[s].querySelectorAll(e);for(let e=0;e<a.length;e+=1)t.push(a[e])}return d(t)},children:function(e){const t=[];for(let s=0;s<this.length;s+=1){const a=this[s].children;for(let s=0;s<a.length;s+=1)e&&!d(a[s]).is(e)||t.push(a[s])}return d(t)},filter:function(e){return d(o(this,e))},remove:function(){for(let e=0;e<this.length;e+=1)this[e].parentNode&&this[e].parentNode.removeChild(this[e]);return this}};function p(e,t){return void 0===t&&(t=0),setTimeout(e,t)}function u(){return Date.now()}function h(e,t){void 0===t&&(t="x");const s=r();let a,i,n;const l=function(e){const t=r();let s;return t.getComputedStyle&&(s=t.getComputedStyle(e,null)),!s&&e.currentStyle&&(s=e.currentStyle),s||(s=e.style),s}(e);return s.WebKitCSSMatrix?(i=l.transform||l.webkitTransform,i.split(",").length>6&&(i=i.split(", ").map((e=>e.replace(",","."))).join(", ")),n=new s.WebKitCSSMatrix("none"===i?"":i)):(n=l.MozTransform||l.OTransform||l.MsTransform||l.msTransform||l.transform||l.getPropertyValue("transform").replace("translate(","matrix(1, 0, 0, 1,"),a=n.toString().split(",")),"x"===t&&(i=s.WebKitCSSMatrix?n.m41:16===a.length?parseFloat(a[12]):parseFloat(a[4])),"y"===t&&(i=s.WebKitCSSMatrix?n.m42:16===a.length?parseFloat(a[13]):parseFloat(a[5])),i||0}function m(e){return"object"==typeof e&&null!==e&&e.constructor&&"Object"===Object.prototype.toString.call(e).slice(8,-1)}function f(e){return"undefined"!=typeof window&&void 0!==window.HTMLElement?e instanceof HTMLElement:e&&(1===e.nodeType||11===e.nodeType)}function g(){const e=Object(arguments.length<=0?void 0:arguments[0]),t=["__proto__","constructor","prototype"];for(let s=1;s<arguments.length;s+=1){const a=s<0||arguments.length<=s?void 0:arguments[s];if(null!=a&&!f(a)){const s=Object.keys(Object(a)).filter((e=>t.indexOf(e)<0));for(let t=0,i=s.length;t<i;t+=1){const i=s[t],r=Object.getOwnPropertyDescriptor(a,i);void 0!==r&&r.enumerable&&(m(e[i])&&m(a[i])?a[i].__swiper__?e[i]=a[i]:g(e[i],a[i]):!m(e[i])&&m(a[i])?(e[i]={},a[i].__swiper__?e[i]=a[i]:g(e[i],a[i])):e[i]=a[i])}}}return e}function v(e,t,s){e.style.setProperty(t,s)}function w(e){let{swiper:t,targetPosition:s,side:a}=e;const i=r(),n=-t.translate;let l,o=null;const d=t.params.speed;t.wrapperEl.style.scrollSnapType="none",i.cancelAnimationFrame(t.cssModeFrameID);const c=s>n?"next":"prev",p=(e,t)=>"next"===c&&e>=t||"prev"===c&&e<=t,u=()=>{l=(new Date).getTime(),null===o&&(o=l);const e=Math.max(Math.min((l-o)/d,1),0),r=.5-Math.cos(e*Math.PI)/2;let c=n+r*(s-n);if(p(c,s)&&(c=s),t.wrapperEl.scrollTo({[a]:c}),p(c,s))return t.wrapperEl.style.overflow="hidden",t.wrapperEl.style.scrollSnapType="",setTimeout((()=>{t.wrapperEl.style.overflow="",t.wrapperEl.scrollTo({[a]:c})})),void i.cancelAnimationFrame(t.cssModeFrameID);t.cssModeFrameID=i.requestAnimationFrame(u)};u()}let b,x,y;function E(){return b||(b=function(){const e=r(),t=a();return{smoothScroll:t.documentElement&&"scrollBehavior"in t.documentElement.style,touch:!!("ontouchstart"in e||e.DocumentTouch&&t instanceof e.DocumentTouch),passiveListener:function(){let t=!1;try{const s=Object.defineProperty({},"passive",{get(){t=!0}});e.addEventListener("testPassiveListener",null,s)}catch(e){}return t}(),gestures:"ongesturestart"in e}}()),b}function C(e){return void 0===e&&(e={}),x||(x=function(e){let{userAgent:t}=void 0===e?{}:e;const s=E(),a=r(),i=a.navigator.platform,n=t||a.navigator.userAgent,l={ios:!1,android:!1},o=a.screen.width,d=a.screen.height,c=n.match(/(Android);?[\s\/]+([\d.]+)?/);let p=n.match(/(iPad).*OS\s([\d_]+)/);const u=n.match(/(iPod)(.*OS\s([\d_]+))?/),h=!p&&n.match(/(iPhone\sOS|iOS)\s([\d_]+)/),m="Win32"===i;let f="MacIntel"===i;return!p&&f&&s.touch&&["1024x1366","1366x1024","834x1194","1194x834","834x1112","1112x834","768x1024","1024x768","820x1180","1180x820","810x1080","1080x810"].indexOf(`${o}x${d}`)>=0&&(p=n.match(/(Version)\/([\d.]+)/),p||(p=[0,1,"13_0_0"]),f=!1),c&&!m&&(l.os="android",l.android=!0),(p||h||u)&&(l.os="ios",l.ios=!0),l}(e)),x}function T(){return y||(y=function(){const e=r();return{isSafari:function(){const t=e.navigator.userAgent.toLowerCase();return t.indexOf("safari")>=0&&t.indexOf("chrome")<0&&t.indexOf("android")<0}(),isWebView:/(iPhone|iPod|iPad).*AppleWebKit(?!.*Safari)/i.test(e.navigator.userAgent)}}()),y}Object.keys(c).forEach((e=>{Object.defineProperty(d.fn,e,{value:c[e],writable:!0})}));var $={on(e,t,s){const a=this;if(!a.eventsListeners||a.destroyed)return a;if("function"!=typeof t)return a;const i=s?"unshift":"push";return e.split(" ").forEach((e=>{a.eventsListeners[e]||(a.eventsListeners[e]=[]),a.eventsListeners[e][i](t)})),a},once(e,t,s){const a=this;if(!a.eventsListeners||a.destroyed)return a;if("function"!=typeof t)return a;function i(){a.off(e,i),i.__emitterProxy&&delete i.__emitterProxy;for(var s=arguments.length,r=new Array(s),n=0;n<s;n++)r[n]=arguments[n];t.apply(a,r)}return i.__emitterProxy=t,a.on(e,i,s)},onAny(e,t){const s=this;if(!s.eventsListeners||s.destroyed)return s;if("function"!=typeof e)return s;const a=t?"unshift":"push";return s.eventsAnyListeners.indexOf(e)<0&&s.eventsAnyListeners[a](e),s},offAny(e){const t=this;if(!t.eventsListeners||t.destroyed)return t;if(!t.eventsAnyListeners)return t;const s=t.eventsAnyListeners.indexOf(e);return s>=0&&t.eventsAnyListeners.splice(s,1),t},off(e,t){const s=this;return!s.eventsListeners||s.destroyed?s:s.eventsListeners?(e.split(" ").forEach((e=>{void 0===t?s.eventsListeners[e]=[]:s.eventsListeners[e]&&s.eventsListeners[e].forEach(((a,i)=>{(a===t||a.__emitterProxy&&a.__emitterProxy===t)&&s.eventsListeners[e].splice(i,1)}))})),s):s},emit(){const e=this;if(!e.eventsListeners||e.destroyed)return e;if(!e.eventsListeners)return e;let t,s,a;for(var i=arguments.length,r=new Array(i),n=0;n<i;n++)r[n]=arguments[n];"string"==typeof r[0]||Array.isArray(r[0])?(t=r[0],s=r.slice(1,r.length),a=e):(t=r[0].events,s=r[0].data,a=r[0].context||e),s.unshift(a);return(Array.isArray(t)?t:t.split(" ")).forEach((t=>{e.eventsAnyListeners&&e.eventsAnyListeners.length&&e.eventsAnyListeners.forEach((e=>{e.apply(a,[t,...s])})),e.eventsListeners&&e.eventsListeners[t]&&e.eventsListeners[t].forEach((e=>{e.apply(a,s)}))})),e}};var S={updateSize:function(){const e=this;let t,s;const a=e.$el;t=void 0!==e.params.width&&null!==e.params.width?e.params.width:a[0].clientWidth,s=void 0!==e.params.height&&null!==e.params.height?e.params.height:a[0].clientHeight,0===t&&e.isHorizontal()||0===s&&e.isVertical()||(t=t-parseInt(a.css("padding-left")||0,10)-parseInt(a.css("padding-right")||0,10),s=s-parseInt(a.css("padding-top")||0,10)-parseInt(a.css("padding-bottom")||0,10),Number.isNaN(t)&&(t=0),Number.isNaN(s)&&(s=0),Object.assign(e,{width:t,height:s,size:e.isHorizontal()?t:s}))},updateSlides:function(){const e=this;function t(t){return e.isHorizontal()?t:{width:"height","margin-top":"margin-left","margin-bottom ":"margin-right","margin-left":"margin-top","margin-right":"margin-bottom","padding-left":"padding-top","padding-right":"padding-bottom",marginRight:"marginBottom"}[t]}function s(e,s){return parseFloat(e.getPropertyValue(t(s))||0)}const a=e.params,{$wrapperEl:i,size:r,rtlTranslate:n,wrongRTL:l}=e,o=e.virtual&&a.virtual.enabled,d=o?e.virtual.slides.length:e.slides.length,c=i.children(`.${e.params.slideClass}`),p=o?e.virtual.slides.length:c.length;let u=[];const h=[],m=[];let f=a.slidesOffsetBefore;"function"==typeof f&&(f=a.slidesOffsetBefore.call(e));let g=a.slidesOffsetAfter;"function"==typeof g&&(g=a.slidesOffsetAfter.call(e));const w=e.snapGrid.length,b=e.slidesGrid.length;let x=a.spaceBetween,y=-f,E=0,C=0;if(void 0===r)return;"string"==typeof x&&x.indexOf("%%")>=0&&(x=parseFloat(x.replace("%%",""))/100*r),e.virtualSize=-x,n?c.css({marginLeft:"",marginBottom:"",marginTop:""}):c.css({marginRight:"",marginBottom:"",marginTop:""}),a.centeredSlides&&a.cssMode&&(v(e.wrapperEl,"--swiper-centered-offset-before",""),v(e.wrapperEl,"--swiper-centered-offset-after",""));const T=a.grid&&a.grid.rows>1&&e.grid;let $;T&&e.grid.initSlides(p);const S="auto"===a.slidesPerView&&a.breakpoints&&Object.keys(a.breakpoints).filter((e=>void 0!==a.breakpoints[e].slidesPerView)).length>0;for(let i=0;i<p;i+=1){$=0;const n=c.eq(i);if(T&&e.grid.updateSlide(i,n,p,t),"none"!==n.css("display")){if("auto"===a.slidesPerView){S&&(c[i].style[t("width")]="");const r=getComputedStyle(n[0]),l=n[0].style.transform,o=n[0].style.webkitTransform;if(l&&(n[0].style.transform="none"),o&&(n[0].style.webkitTransform="none"),a.roundLengths)$=e.isHorizontal()?n.outerWidth(!0):n.outerHeight(!0);else{const e=s(r,"width"),t=s(r,"padding-left"),a=s(r,"padding-right"),i=s(r,"margin-left"),l=s(r,"margin-right"),o=r.getPropertyValue("box-sizing");if(o&&"border-box"===o)$=e+i+l;else{const{clientWidth:s,offsetWidth:r}=n[0];$=e+t+a+i+l+(r-s)}}l&&(n[0].style.transform=l),o&&(n[0].style.webkitTransform=o),a.roundLengths&&($=Math.floor($))}else $=(r-(a.slidesPerView-1)*x)/a.slidesPerView,a.roundLengths&&($=Math.floor($)),c[i]&&(c[i].style[t("width")]=`${$}px`);c[i]&&(c[i].swiperSlideSize=$),m.push($),a.centeredSlides?(y=y+$/2+E/2+x,0===E&&0!==i&&(y=y-r/2-x),0===i&&(y=y-r/2-x),Math.abs(y)<.001&&(y=0),a.roundLengths&&(y=Math.floor(y)),C%%a.slidesPerGroup==0&&u.push(y),h.push(y)):(a.roundLengths&&(y=Math.floor(y)),(C-Math.min(e.params.slidesPerGroupSkip,C))%%e.params.slidesPerGroup==0&&u.push(y),h.push(y),y=y+$+x),e.virtualSize+=$+x,E=$,C+=1}}if(e.virtualSize=Math.max(e.virtualSize,r)+g,n&&l&&("slide"===a.effect||"coverflow"===a.effect)&&i.css({width:`${e.virtualSize+a.spaceBetween}px`}),a.setWrapperSize&&i.css({[t("width")]:`${e.virtualSize+a.spaceBetween}px`}),T&&e.grid.updateWrapperSize($,u,t),!a.centeredSlides){const t=[];for(let s=0;s<u.length;s+=1){let i=u[s];a.roundLengths&&(i=Math.floor(i)),u[s]<=e.virtualSize-r&&t.push(i)}u=t,Math.floor(e.virtualSize-r)-Math.floor(u[u.length-1])>1&&u.push(e.virtualSize-r)}if(0===u.length&&(u=[0]),0!==a.spaceBetween){const s=e.isHorizontal()&&n?"marginLeft":t("marginRight");c.filter(((e,t)=>!a.cssMode||t!==c.length-1)).css({[s]:`${x}px`})}if(a.centeredSlides&&a.centeredSlidesBounds){let e=0;m.forEach((t=>{e+=t+(a.spaceBetween?a.spaceBetween:0)})),e-=a.spaceBetween;const t=e-r;u=u.map((e=>e<0?-f:e>t?t+g:e))}if(a.centerInsufficientSlides){let e=0;if(m.forEach((t=>{e+=t+(a.spaceBetween?a.spaceBetween:0)})),e-=a.spaceBetween,e<r){const t=(r-e)/2;u.forEach(((e,s)=>{u[s]=e-t})),h.forEach(((e,s)=>{h[s]=e+t}))}}if(Object.assign(e,{slides:c,snapGrid:u,slidesGrid:h,slidesSizesGrid:m}),a.centeredSlides&&a.cssMode&&!a.centeredSlidesBounds){v(e.wrapperEl,"--swiper-centered-offset-before",-u[0]+"px"),v(e.wrapperEl,"--swiper-centered-offset-after",e.size/2-m[m.length-1]/2+"px");const t=-e.snapGrid[0],s=-e.slidesGrid[0];e.snapGrid=e.snapGrid.map((e=>e+t)),e.slidesGrid=e.slidesGrid.map((e=>e+s))}if(p!==d&&e.emit("slidesLengthChange"),u.length!==w&&(e.params.watchOverflow&&e.checkOverflow(),e.emit("snapGridLengthChange")),h.length!==b&&e.emit("slidesGridLengthChange"),a.watchSlidesProgress&&e.updateSlidesOffset(),!(o||a.cssMode||"slide"!==a.effect&&"fade"!==a.effect)){const t=`${a.containerModifierClass}backface-hidden`,s=e.$el.hasClass(t);p<=a.maxBackfaceHiddenSlides?s||e.$el.addClass(t):s&&e.$el.removeClass(t)}},updateAutoHeight:function(e){const t=this,s=[],a=t.virtual&&t.params.virtual.enabled;let i,r=0;"number"==typeof e?t.setTransition(e):!0===e&&t.setTransition(t.params.speed);const n=e=>a?t.slides.filter((t=>parseInt(t.getAttribute("data-swiper-slide-index"),10)===e))[0]:t.slides.eq(e)[0];if("auto"!==t.params.slidesPerView&&t.params.slidesPerView>1)if(t.params.centeredSlides)(t.visibleSlides||d([])).each((e=>{s.push(e)}));else for(i=0;i<Math.ceil(t.params.slidesPerView);i+=1){const e=t.activeIndex+i;if(e>t.slides.length&&!a)break;s.push(n(e))}else s.push(n(t.activeIndex));for(i=0;i<s.length;i+=1)if(void 0!==s[i]){const e=s[i].offsetHeight;r=e>r?e:r}(r||0===r)&&t.$wrapperEl.css("height",`${r}px`)},updateSlidesOffset:function(){const e=this,t=e.slides;for(let s=0;s<t.length;s+=1)t[s].swiperSlideOffset=e.isHorizontal()?t[s].offsetLeft:t[s].offsetTop},updateSlidesProgress:function(e){void 0===e&&(e=this&&this.translate||0);const t=this,s=t.params,{slides:a,rtlTranslate:i,snapGrid:r}=t;if(0===a.length)return;void 0===a[0].swiperSlideOffset&&t.updateSlidesOffset();let n=-e;i&&(n=e),a.removeClass(s.slideVisibleClass),t.visibleSlidesIndexes=[],t.visibleSlides=[];for(let e=0;e<a.length;e+=1){const l=a[e];let o=l.swiperSlideOffset;s.cssMode&&s.centeredSlides&&(o-=a[0].swiperSlideOffset);const d=(n+(s.centeredSlides?t.minTranslate():0)-o)/(l.swiperSlideSize+s.spaceBetween),c=(n-r[0]+(s.centeredSlides?t.minTranslate():0)-o)/(l.swiperSlideSize+s.spaceBetween),p=-(n-o),u=p+t.slidesSizesGrid[e];(p>=0&&p<t.size-1||u>1&&u<=t.size||p<=0&&u>=t.size)&&(t.visibleSlides.push(l),t.visibleSlidesIndexes.push(e),a.eq(e).addClass(s.slideVisibleClass)),l.progress=i?-d:d,l.originalProgress=i?-c:c}t.visibleSlides=d(t.visibleSlides)},updateProgress:function(e){const t=this;if(void 0===e){const s=t.rtlTranslate?-1:1;e=t&&t.translate&&t.translate*s||0}const s=t.params,a=t.maxTranslate()-t.minTranslate();let{progress:i,isBeginning:r,isEnd:n}=t;const l=r,o=n;0===a?(i=0,r=!0,n=!0):(i=(e-t.minTranslate())/a,r=i<=0,n=i>=1),Object.assign(t,{progress:i,isBeginning:r,isEnd:n}),(s.watchSlidesProgress||s.centeredSlides&&s.autoHeight)&&t.updateSlidesProgress(e),r&&!l&&t.emit("reachBeginning toEdge"),n&&!o&&t.emit("reachEnd toEdge"),(l&&!r||o&&!n)&&t.emit("fromEdge"),t.emit("progress",i)},updateSlidesClasses:function(){const e=this,{slides:t,params:s,$wrapperEl:a,activeIndex:i,realIndex:r}=e,n=e.virtual&&s.virtual.enabled;let l;t.removeClass(`${s.slideActiveClass} ${s.slideNextClass} ${s.slidePrevClass} ${s.slideDuplicateActiveClass} ${s.slideDuplicateNextClass} ${s.slideDuplicatePrevClass}`),l=n?e.$wrapperEl.find(`.${s.slideClass}[data-swiper-slide-index="${i}"]`):t.eq(i),l.addClass(s.slideActiveClass),s.loop&&(l.hasClass(s.slideDuplicateClass)?a.children(`.${s.slideClass}:not(.${s.slideDuplicateClass})[data-swiper-slide-index="${r}"]`).addClass(s.slideDuplicateActiveClass):a.children(`.${s.slideClass}.${s.slideDuplicateClass}[data-swiper-slide-index="${r}"]`).addClass(s.slideDuplicateActiveClass));let o=l.nextAll(`.${s.slideClass}`).eq(0).addClass(s.slideNextClass);s.loop&&0===o.length&&(o=t.eq(0),o.addClass(s.slideNextClass));let d=l.prevAll(`.${s.slideClass}`).eq(0).addClass(s.slidePrevClass);s.loop&&0===d.length&&(d=t.eq(-1),d.addClass(s.slidePrevClass)),s.loop&&(o.hasClass(s.slideDuplicateClass)?a.children(`.${s.slideClass}:not(.${s.slideDuplicateClass})[data-swiper-slide-index="${o.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicateNextClass):a.children(`.${s.slideClass}.${s.slideDuplicateClass}[data-swiper-slide-index="${o.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicateNextClass),d.hasClass(s.slideDuplicateClass)?a.children(`.${s.slideClass}:not(.${s.slideDuplicateClass})[data-swiper-slide-index="${d.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicatePrevClass):a.children(`.${s.slideClass}.${s.slideDuplicateClass}[data-swiper-slide-index="${d.attr("data-swiper-slide-index")}"]`).addClass(s.slideDuplicatePrevClass)),e.emitSlidesClasses()},updateActiveIndex:function(e){const t=this,s=t.rtlTranslate?t.translate:-t.translate,{slidesGrid:a,snapGrid:i,params:r,activeIndex:n,realIndex:l,snapIndex:o}=t;let d,c=e;if(void 0===c){for(let e=0;e<a.length;e+=1)void 0!==a[e+1]?s>=a[e]&&s<a[e+1]-(a[e+1]-a[e])/2?c=e:s>=a[e]&&s<a[e+1]&&(c=e+1):s>=a[e]&&(c=e);r.normalizeSlideIndex&&(c<0||void 0===c)&&(c=0)}if(i.indexOf(s)>=0)d=i.indexOf(s);else{const e=Math.min(r.slidesPerGroupSkip,c);d=e+Math.floor((c-e)/r.slidesPerGroup)}if(d>=i.length&&(d=i.length-1),c===n)return void(d!==o&&(t.snapIndex=d,t.emit("snapIndexChange")));const p=parseInt(t.slides.eq(c).attr("data-swiper-slide-index")||c,10);Object.assign(t,{snapIndex:d,realIndex:p,previousIndex:n,activeIndex:c}),t.emit("activeIndexChange"),t.emit("snapIndexChange"),l!==p&&t.emit("realIndexChange"),(t.initialized||t.params.runCallbacksOnInit)&&t.emit("slideChange")},updateClickedSlide:function(e){const t=this,s=t.params,a=d(e).closest(`.${s.slideClass}`)[0];let i,r=!1;if(a)for(let e=0;e<t.slides.length;e+=1)if(t.slides[e]===a){r=!0,i=e;break}if(!a||!r)return t.clickedSlide=void 0,void(t.clickedIndex=void 0);t.clickedSlide=a,t.virtual&&t.params.virtual.enabled?t.clickedIndex=parseInt(d(a).attr("data-swiper-slide-index"),10):t.clickedIndex=i,s.slideToClickedSlide&&void 0!==t.clickedIndex&&t.clickedIndex!==t.activeIndex&&t.slideToClickedSlide()}};var M={getTranslate:function(e){void 0===e&&(e=this.isHorizontal()?"x":"y");const{params:t,rtlTranslate:s,translate:a,$wrapperEl:i}=this;if(t.virtualTranslate)return s?-a:a;if(t.cssMode)return a;let r=h(i[0],e);return s&&(r=-r),r||0},setTranslate:function(e,t){const s=this,{rtlTranslate:a,params:i,$wrapperEl:r,wrapperEl:n,progress:l}=s;let o,d=0,c=0;s.isHorizontal()?d=a?-e:e:c=e,i.roundLengths&&(d=Math.floor(d),c=Math.floor(c)),i.cssMode?n[s.isHorizontal()?"scrollLeft":"scrollTop"]=s.isHorizontal()?-d:-c:i.virtualTranslate||r.transform(`translate3d(${d}px, ${c}px, 0px)`),s.previousTranslate=s.translate,s.translate=s.isHorizontal()?d:c;const p=s.maxTranslate()-s.minTranslate();o=0===p?0:(e-s.minTranslate())/p,o!==l&&s.updateProgress(e),s.emit("setTranslate",s.translate,t)},minTranslate:function(){return-this.snapGrid[0]},maxTranslate:function(){return-this.snapGrid[this.snapGrid.length-1]},translateTo:function(e,t,s,a,i){void 0===e&&(e=0),void 0===t&&(t=this.params.speed),void 0===s&&(s=!0),void 0===a&&(a=!0);const r=this,{params:n,wrapperEl:l}=r;if(r.animating&&n.preventInteractionOnTransition)return!1;const o=r.minTranslate(),d=r.maxTranslate();let c;if(c=a&&e>o?o:a&&e<d?d:e,r.updateProgress(c),n.cssMode){const e=r.isHorizontal();if(0===t)l[e?"scrollLeft":"scrollTop"]=-c;else{if(!r.support.smoothScroll)return w({swiper:r,targetPosition:-c,side:e?"left":"top"}),!0;l.scrollTo({[e?"left":"top"]:-c,behavior:"smooth"})}return!0}return 0===t?(r.setTransition(0),r.setTranslate(c),s&&(r.emit("beforeTransitionStart",t,i),r.emit("transitionEnd"))):(r.setTransition(t),r.setTranslate(c),s&&(r.emit("beforeTransitionStart",t,i),r.emit("transitionStart")),r.animating||(r.animating=!0,r.onTranslateToWrapperTransitionEnd||(r.onTranslateToWrapperTransitionEnd=function(e){r&&!r.destroyed&&e.target===this&&(r.$wrapperEl[0].removeEventListener("transitionend",r.onTranslateToWrapperTransitionEnd),r.$wrapperEl[0].removeEventListener("webkitTransitionEnd",r.onTranslateToWrapperTransitionEnd),r.onTranslateToWrapperTransitionEnd=null,delete r.onTranslateToWrapperTransitionEnd,s&&r.emit("transitionEnd"))}),r.$wrapperEl[0].addEventListener("transitionend",r.onTranslateToWrapperTransitionEnd),r.$wrapperEl[0].addEventListener("webkitTransitionEnd",r.onTranslateToWrapperTransitionEnd))),!0}};function P(e){let{swiper:t,runCallbacks:s,direction:a,step:i}=e;const{activeIndex:r,previousIndex:n}=t;let l=a;if(l||(l=r>n?"next":r<n?"prev":"reset"),t.emit(`transition${i}`),s&&r!==n){if("reset"===l)return void t.emit(`slideResetTransition${i}`);t.emit(`slideChangeTransition${i}`),"next"===l?t.emit(`slideNextTransition${i}`):t.emit(`slidePrevTransition${i}`)}}var k={slideTo:function(e,t,s,a,i){if(void 0===e&&(e=0),void 0===t&&(t=this.params.speed),void 0===s&&(s=!0),"number"!=typeof e&&"string"!=typeof e)throw new Error(`The 'index' argument cannot have type other than 'number' or 'string'. [${typeof e}] given.`);if("string"==typeof e){const t=parseInt(e,10);if(!isFinite(t))throw new Error(`The passed-in 'index' (string) couldn't be converted to 'number'. [${e}] given.`);e=t}const r=this;let n=e;n<0&&(n=0);const{params:l,snapGrid:o,slidesGrid:d,previousIndex:c,activeIndex:p,rtlTranslate:u,wrapperEl:h,enabled:m}=r;if(r.animating&&l.preventInteractionOnTransition||!m&&!a&&!i)return!1;const f=Math.min(r.params.slidesPerGroupSkip,n);let g=f+Math.floor((n-f)/r.params.slidesPerGroup);g>=o.length&&(g=o.length-1),(p||l.initialSlide||0)===(c||0)&&s&&r.emit("beforeSlideChangeStart");const v=-o[g];if(r.updateProgress(v),l.normalizeSlideIndex)for(let e=0;e<d.length;e+=1){const t=-Math.floor(100*v),s=Math.floor(100*d[e]),a=Math.floor(100*d[e+1]);void 0!==d[e+1]?t>=s&&t<a-(a-s)/2?n=e:t>=s&&t<a&&(n=e+1):t>=s&&(n=e)}if(r.initialized&&n!==p){if(!r.allowSlideNext&&v<r.translate&&v<r.minTranslate())return!1;if(!r.allowSlidePrev&&v>r.translate&&v>r.maxTranslate()&&(p||0)!==n)return!1}let b;if(b=n>p?"next":n<p?"prev":"reset",u&&-v===r.translate||!u&&v===r.translate)return r.updateActiveIndex(n),l.autoHeight&&r.updateAutoHeight(),r.updateSlidesClasses(),"slide"!==l.effect&&r.setTranslate(v),"reset"!==b&&(r.transitionStart(s,b),r.transitionEnd(s,b)),!1;if(l.cssMode){const e=r.isHorizontal(),s=u?v:-v;if(0===t){const t=r.virtual&&r.params.virtual.enabled;t&&(r.wrapperEl.style.scrollSnapType="none",r._immediateVirtual=!0),h[e?"scrollLeft":"scrollTop"]=s,t&&requestAnimationFrame((()=>{r.wrapperEl.style.scrollSnapType="",r._swiperImmediateVirtual=!1}))}else{if(!r.support.smoothScroll)return w({swiper:r,targetPosition:s,side:e?"left":"top"}),!0;h.scrollTo({[e?"left":"top"]:s,behavior:"smooth"})}return!0}return r.setTransition(t),r.setTranslate(v),r.updateActiveIndex(n),r.updateSlidesClasses(),r.emit("beforeTransitionStart",t,a),r.transitionStart(s,b),0===t?r.transitionEnd(s,b):r.animating||(r.animating=!0,r.onSlideToWrapperTransitionEnd||(r.onSlideToWrapperTransitionEnd=function(e){r&&!r.destroyed&&e.target===this&&(r.$wrapperEl[0].removeEventListener("transitionend",r.onSlideToWrapperTransitionEnd),r.$wrapperEl[0].removeEventListener("webkitTransitionEnd",r.onSlideToWrapperTransitionEnd),r.onSlideToWrapperTransitionEnd=null,delete r.onSlideToWrapperTransitionEnd,r.transitionEnd(s,b))}),r.$wrapperEl[0].addEventListener("transitionend",r.onSlideToWrapperTransitionEnd),r.$wrapperEl[0].addEventListener("webkitTransitionEnd",r.onSlideToWrapperTransitionEnd)),!0},slideToLoop:function(e,t,s,a){if(void 0===e&&(e=0),void 0===t&&(t=this.params.speed),void 0===s&&(s=!0),"string"==typeof e){const t=parseInt(e,10);if(!isFinite(t))throw new Error(`The passed-in 'index' (string) couldn't be converted to 'number'. [${e}] given.`);e=t}const i=this;let r=e;return i.params.loop&&(r+=i.loopedSlides),i.slideTo(r,t,s,a)},slideNext:function(e,t,s){void 0===e&&(e=this.params.speed),void 0===t&&(t=!0);const a=this,{animating:i,enabled:r,params:n}=a;if(!r)return a;let l=n.slidesPerGroup;"auto"===n.slidesPerView&&1===n.slidesPerGroup&&n.slidesPerGroupAuto&&(l=Math.max(a.slidesPerViewDynamic("current",!0),1));const o=a.activeIndex<n.slidesPerGroupSkip?1:l;if(n.loop){if(i&&n.loopPreventsSlide)return!1;a.loopFix(),a._clientLeft=a.$wrapperEl[0].clientLeft}return n.rewind&&a.isEnd?a.slideTo(0,e,t,s):a.slideTo(a.activeIndex+o,e,t,s)},slidePrev:function(e,t,s){void 0===e&&(e=this.params.speed),void 0===t&&(t=!0);const a=this,{params:i,animating:r,snapGrid:n,slidesGrid:l,rtlTranslate:o,enabled:d}=a;if(!d)return a;if(i.loop){if(r&&i.loopPreventsSlide)return!1;a.loopFix(),a._clientLeft=a.$wrapperEl[0].clientLeft}function c(e){return e<0?-Math.floor(Math.abs(e)):Math.floor(e)}const p=c(o?a.translate:-a.translate),u=n.map((e=>c(e)));let h=n[u.indexOf(p)-1];if(void 0===h&&i.cssMode){let e;n.forEach(((t,s)=>{p>=t&&(e=s)})),void 0!==e&&(h=n[e>0?e-1:e])}let m=0;if(void 0!==h&&(m=l.indexOf(h),m<0&&(m=a.activeIndex-1),"auto"===i.slidesPerView&&1===i.slidesPerGroup&&i.slidesPerGroupAuto&&(m=m-a.slidesPerViewDynamic("previous",!0)+1,m=Math.max(m,0))),i.rewind&&a.isBeginning){const i=a.params.virtual&&a.params.virtual.enabled&&a.virtual?a.virtual.slides.length-1:a.slides.length-1;return a.slideTo(i,e,t,s)}return a.slideTo(m,e,t,s)},slideReset:function(e,t,s){return void 0===e&&(e=this.params.speed),void 0===t&&(t=!0),this.slideTo(this.activeIndex,e,t,s)},slideToClosest:function(e,t,s,a){void 0===e&&(e=this.params.speed),void 0===t&&(t=!0),void 0===a&&(a=.5);const i=this;let r=i.activeIndex;const n=Math.min(i.params.slidesPerGroupSkip,r),l=n+Math.floor((r-n)/i.params.slidesPerGroup),o=i.rtlTranslate?i.translate:-i.translate;if(o>=i.snapGrid[l]){const e=i.snapGrid[l];o-e>(i.snapGrid[l+1]-e)*a&&(r+=i.params.slidesPerGroup)}else{const e=i.snapGrid[l-1];o-e<=(i.snapGrid[l]-e)*a&&(r-=i.params.slidesPerGroup)}return r=Math.max(r,0),r=Math.min(r,i.slidesGrid.length-1),i.slideTo(r,e,t,s)},slideToClickedSlide:function(){const e=this,{params:t,$wrapperEl:s}=e,a="auto"===t.slidesPerView?e.slidesPerViewDynamic():t.slidesPerView;let i,r=e.clickedIndex;if(t.loop){if(e.animating)return;i=parseInt(d(e.clickedSlide).attr("data-swiper-slide-index"),10),t.centeredSlides?r<e.loopedSlides-a/2||r>e.slides.length-e.loopedSlides+a/2?(e.loopFix(),r=s.children(`.${t.slideClass}[data-swiper-slide-index="${i}"]:not(.${t.slideDuplicateClass})`).eq(0).index(),p((()=>{e.slideTo(r)}))):e.slideTo(r):r>e.slides.length-a?(e.loopFix(),r=s.children(`.${t.slideClass}[data-swiper-slide-index="${i}"]:not(.${t.slideDuplicateClass})`).eq(0).index(),p((()=>{e.slideTo(r)}))):e.slideTo(r)}else e.slideTo(r)}};var z={loopCreate:function(){const e=this,t=a(),{params:s,$wrapperEl:i}=e,r=i.children().length>0?d(i.children()[0].parentNode):i;r.children(`.${s.slideClass}.${s.slideDuplicateClass}`).remove();let n=r.children(`.${s.slideClass}`);if(s.loopFillGroupWithBlank){const e=s.slidesPerGroup-n.length%%s.slidesPerGroup;if(e!==s.slidesPerGroup){for(let a=0;a<e;a+=1){const e=d(t.createElement("div")).addClass(`${s.slideClass} ${s.slideBlankClass}`);r.append(e)}n=r.children(`.${s.slideClass}`)}}"auto"!==s.slidesPerView||s.loopedSlides||(s.loopedSlides=n.length),e.loopedSlides=Math.ceil(parseFloat(s.loopedSlides||s.slidesPerView,10)),e.loopedSlides+=s.loopAdditionalSlides,e.loopedSlides>n.length&&(e.loopedSlides=n.length);const l=[],o=[];n.each(((t,s)=>{const a=d(t);s<e.loopedSlides&&o.push(t),s<n.length&&s>=n.length-e.loopedSlides&&l.push(t),a.attr("data-swiper-slide-index",s)}));for(let e=0;e<o.length;e+=1)r.append(d(o[e].cloneNode(!0)).addClass(s.slideDuplicateClass));for(let e=l.length-1;e>=0;e-=1)r.prepend(d(l[e].cloneNode(!0)).addClass(s.slideDuplicateClass))},loopFix:function(){const e=this;e.emit("beforeLoopFix");const{activeIndex:t,slides:s,loopedSlides:a,allowSlidePrev:i,allowSlideNext:r,snapGrid:n,rtlTranslate:l}=e;let o;e.allowSlidePrev=!0,e.allowSlideNext=!0;const d=-n[t]-e.getTranslate();if(t<a){o=s.length-3*a+t,o+=a;e.slideTo(o,0,!1,!0)&&0!==d&&e.setTranslate((l?-e.translate:e.translate)-d)}else if(t>=s.length-a){o=-s.length+t+a,o+=a;e.slideTo(o,0,!1,!0)&&0!==d&&e.setTranslate((l?-e.translate:e.translate)-d)}e.allowSlidePrev=i,e.allowSlideNext=r,e.emit("loopFix")},loopDestroy:function(){const{$wrapperEl:e,params:t,slides:s}=this;e.children(`.${t.slideClass}.${t.slideDuplicateClass},.${t.slideClass}.${t.slideBlankClass}`).remove(),s.removeAttr("data-swiper-slide-index")}};function L(e){const t=this,s=a(),i=r(),n=t.touchEventsData,{params:l,touches:o,enabled:c}=t;if(!c)return;if(t.animating&&l.preventInteractionOnTransition)return;!t.animating&&l.cssMode&&l.loop&&t.loopFix();let p=e;p.originalEvent&&(p=p.originalEvent);let h=d(p.target);if("wrapper"===l.touchEventsTarget&&!h.closest(t.wrapperEl).length)return;if(n.isTouchEvent="touchstart"===p.type,!n.isTouchEvent&&"which"in p&&3===p.which)return;if(!n.isTouchEvent&&"button"in p&&p.button>0)return;if(n.isTouched&&n.isMoved)return;!!l.noSwipingClass&&""!==l.noSwipingClass&&p.target&&p.target.shadowRoot&&e.path&&e.path[0]&&(h=d(e.path[0]));const m=l.noSwipingSelector?l.noSwipingSelector:`.${l.noSwipingClass}`,f=!(!p.target||!p.target.shadowRoot);if(l.noSwiping&&(f?function(e,t){return void 0===t&&(t=this),function t(s){if(!s||s===a()||s===r())return null;s.assignedSlot&&(s=s.assignedSlot);const i=s.closest(e);return i||s.getRootNode?i||t(s.getRootNode().host):null}(t)}(m,h[0]):h.closest(m)[0]))return void(t.allowClick=!0);if(l.swipeHandler&&!h.closest(l.swipeHandler)[0])return;o.currentX="touchstart"===p.type?p.targetTouches[0].pageX:p.pageX,o.currentY="touchstart"===p.type?p.targetTouches[0].pageY:p.pageY;const g=o.currentX,v=o.currentY,w=l.edgeSwipeDetection||l.iOSEdgeSwipeDetection,b=l.edgeSwipeThreshold||l.iOSEdgeSwipeThreshold;if(w&&(g<=b||g>=i.innerWidth-b)){if("prevent"!==w)return;e.preventDefault()}if(Object.assign(n,{isTouched:!0,isMoved:!1,allowTouchCallbacks:!0,isScrolling:void 0,startMoving:void 0}),o.startX=g,o.startY=v,n.touchStartTime=u(),t.allowClick=!0,t.updateSize(),t.swipeDirection=void 0,l.threshold>0&&(n.allowThresholdMove=!1),"touchstart"!==p.type){let e=!0;h.is(n.focusableElements)&&(e=!1,"SELECT"===h[0].nodeName&&(n.isTouched=!1)),s.activeElement&&d(s.activeElement).is(n.focusableElements)&&s.activeElement!==h[0]&&s.activeElement.blur();const a=e&&t.allowTouchMove&&l.touchStartPreventDefault;!l.touchStartForcePreventDefault&&!a||h[0].isContentEditable||p.preventDefault()}t.params.freeMode&&t.params.freeMode.enabled&&t.freeMode&&t.animating&&!l.cssMode&&t.freeMode.onTouchStart(),t.emit("touchStart",p)}function O(e){const t=a(),s=this,i=s.touchEventsData,{params:r,touches:n,rtlTranslate:l,enabled:o}=s;if(!o)return;let c=e;if(c.originalEvent&&(c=c.originalEvent),!i.isTouched)return void(i.startMoving&&i.isScrolling&&s.emit("touchMoveOpposite",c));if(i.isTouchEvent&&"touchmove"!==c.type)return;const p="touchmove"===c.type&&c.targetTouches&&(c.targetTouches[0]||c.changedTouches[0]),h="touchmove"===c.type?p.pageX:c.pageX,m="touchmove"===c.type?p.pageY:c.pageY;if(c.preventedByNestedSwiper)return n.startX=h,void(n.startY=m);if(!s.allowTouchMove)return d(c.target).is(i.focusableElements)||(s.allowClick=!1),void(i.isTouched&&(Object.assign(n,{startX:h,startY:m,currentX:h,currentY:m}),i.touchStartTime=u()));if(i.isTouchEvent&&r.touchReleaseOnEdges&&!r.loop)if(s.isVertical()){if(m<n.startY&&s.translate<=s.maxTranslate()||m>n.startY&&s.translate>=s.minTranslate())return i.isTouched=!1,void(i.isMoved=!1)}else if(h<n.startX&&s.translate<=s.maxTranslate()||h>n.startX&&s.translate>=s.minTranslate())return;if(i.isTouchEvent&&t.activeElement&&c.target===t.activeElement&&d(c.target).is(i.focusableElements))return i.isMoved=!0,void(s.allowClick=!1);if(i.allowTouchCallbacks&&s.emit("touchMove",c),c.targetTouches&&c.targetTouches.length>1)return;n.currentX=h,n.currentY=m;const f=n.currentX-n.startX,g=n.currentY-n.startY;if(s.params.threshold&&Math.sqrt(f**2+g**2)<s.params.threshold)return;if(void 0===i.isScrolling){let e;s.isHorizontal()&&n.currentY===n.startY||s.isVertical()&&n.currentX===n.startX?i.isScrolling=!1:f*f+g*g>=25&&(e=180*Math.atan2(Math.abs(g),Math.abs(f))/Math.PI,i.isScrolling=s.isHorizontal()?e>r.touchAngle:90-e>r.touchAngle)}if(i.isScrolling&&s.emit("touchMoveOpposite",c),void 0===i.startMoving&&(n.currentX===n.startX&&n.currentY===n.startY||(i.startMoving=!0)),i.isScrolling)return void(i.isTouched=!1);if(!i.startMoving)return;s.allowClick=!1,!r.cssMode&&c.cancelable&&c.preventDefault(),r.touchMoveStopPropagation&&!r.nested&&c.stopPropagation(),i.isMoved||(r.loop&&!r.cssMode&&s.loopFix(),i.startTranslate=s.getTranslate(),s.setTransition(0),s.animating&&s.$wrapperEl.trigger("webkitTransitionEnd transitionend"),i.allowMomentumBounce=!1,!r.grabCursor||!0!==s.allowSlideNext&&!0!==s.allowSlidePrev||s.setGrabCursor(!0),s.emit("sliderFirstMove",c)),s.emit("sliderMove",c),i.isMoved=!0;let v=s.isHorizontal()?f:g;n.diff=v,v*=r.touchRatio,l&&(v=-v),s.swipeDirection=v>0?"prev":"next",i.currentTranslate=v+i.startTranslate;let w=!0,b=r.resistanceRatio;if(r.touchReleaseOnEdges&&(b=0),v>0&&i.currentTranslate>s.minTranslate()?(w=!1,r.resistance&&(i.currentTranslate=s.minTranslate()-1+(-s.minTranslate()+i.startTranslate+v)**b)):v<0&&i.currentTranslate<s.maxTranslate()&&(w=!1,r.resistance&&(i.currentTranslate=s.maxTranslate()+1-(s.maxTranslate()-i.startTranslate-v)**b)),w&&(c.preventedByNestedSwiper=!0),!s.allowSlideNext&&"next"===s.swipeDirection&&i.currentTranslate<i.startTranslate&&(i.currentTranslate=i.startTranslate),!s.allowSlidePrev&&"prev"===s.swipeDirection&&i.currentTranslate>i.startTranslate&&(i.currentTranslate=i.startTranslate),s.allowSlidePrev||s.allowSlideNext||(i.currentTranslate=i.startTranslate),r.threshold>0){if(!(Math.abs(v)>r.threshold||i.allowThresholdMove))return void(i.currentTranslate=i.startTranslate);if(!i.allowThresholdMove)return i.allowThresholdMove=!0,n.startX=n.currentX,n.startY=n.currentY,i.currentTranslate=i.startTranslate,void(n.diff=s.isHorizontal()?n.currentX-n.startX:n.currentY-n.startY)}r.followFinger&&!r.cssMode&&((r.freeMode&&r.freeMode.enabled&&s.freeMode||r.watchSlidesProgress)&&(s.updateActiveIndex(),s.updateSlidesClasses()),s.params.freeMode&&r.freeMode.enabled&&s.freeMode&&s.freeMode.onTouchMove(),s.updateProgress(i.currentTranslate),s.setTranslate(i.currentTranslate))}function I(e){const t=this,s=t.touchEventsData,{params:a,touches:i,rtlTranslate:r,slidesGrid:n,enabled:l}=t;if(!l)return;let o=e;if(o.originalEvent&&(o=o.originalEvent),s.allowTouchCallbacks&&t.emit("touchEnd",o),s.allowTouchCallbacks=!1,!s.isTouched)return s.isMoved&&a.grabCursor&&t.setGrabCursor(!1),s.isMoved=!1,void(s.startMoving=!1);a.grabCursor&&s.isMoved&&s.isTouched&&(!0===t.allowSlideNext||!0===t.allowSlidePrev)&&t.setGrabCursor(!1);const d=u(),c=d-s.touchStartTime;if(t.allowClick){const e=o.path||o.composedPath&&o.composedPath();t.updateClickedSlide(e&&e[0]||o.target),t.emit("tap click",o),c<300&&d-s.lastClickTime<300&&t.emit("doubleTap doubleClick",o)}if(s.lastClickTime=u(),p((()=>{t.destroyed||(t.allowClick=!0)})),!s.isTouched||!s.isMoved||!t.swipeDirection||0===i.diff||s.currentTranslate===s.startTranslate)return s.isTouched=!1,s.isMoved=!1,void(s.startMoving=!1);let h;if(s.isTouched=!1,s.isMoved=!1,s.startMoving=!1,h=a.followFinger?r?t.translate:-t.translate:-s.currentTranslate,a.cssMode)return;if(t.params.freeMode&&a.freeMode.enabled)return void t.freeMode.onTouchEnd({currentPos:h});let m=0,f=t.slidesSizesGrid[0];for(let e=0;e<n.length;e+=e<a.slidesPerGroupSkip?1:a.slidesPerGroup){const t=e<a.slidesPerGroupSkip-1?1:a.slidesPerGroup;void 0!==n[e+t]?h>=n[e]&&h<n[e+t]&&(m=e,f=n[e+t]-n[e]):h>=n[e]&&(m=e,f=n[n.length-1]-n[n.length-2])}let g=null,v=null;a.rewind&&(t.isBeginning?v=t.params.virtual&&t.params.virtual.enabled&&t.virtual?t.virtual.slides.length-1:t.slides.length-1:t.isEnd&&(g=0));const w=(h-n[m])/f,b=m<a.slidesPerGroupSkip-1?1:a.slidesPerGroup;if(c>a.longSwipesMs){if(!a.longSwipes)return void t.slideTo(t.activeIndex);"next"===t.swipeDirection&&(w>=a.longSwipesRatio?t.slideTo(a.rewind&&t.isEnd?g:m+b):t.slideTo(m)),"prev"===t.swipeDirection&&(w>1-a.longSwipesRatio?t.slideTo(m+b):null!==v&&w<0&&Math.abs(w)>a.longSwipesRatio?t.slideTo(v):t.slideTo(m))}else{if(!a.shortSwipes)return void t.slideTo(t.activeIndex);t.navigation&&(o.target===t.navigation.nextEl||o.target===t.navigation.prevEl)?o.target===t.navigation.nextEl?t.slideTo(m+b):t.slideTo(m):("next"===t.swipeDirection&&t.slideTo(null!==g?g:m+b),"prev"===t.swipeDirection&&t.slideTo(null!==v?v:m))}}function A(){const e=this,{params:t,el:s}=e;if(s&&0===s.offsetWidth)return;t.breakpoints&&e.setBreakpoint();const{allowSlideNext:a,allowSlidePrev:i,snapGrid:r}=e;e.allowSlideNext=!0,e.allowSlidePrev=!0,e.updateSize(),e.updateSlides(),e.updateSlidesClasses(),("auto"===t.slidesPerView||t.slidesPerView>1)&&e.isEnd&&!e.isBeginning&&!e.params.centeredSlides?e.slideTo(e.slides.length-1,0,!1,!0):e.slideTo(e.activeIndex,0,!1,!0),e.autoplay&&e.autoplay.running&&e.autoplay.paused&&e.autoplay.run(),e.allowSlidePrev=i,e.allowSlideNext=a,e.params.watchOverflow&&r!==e.snapGrid&&e.checkOverflow()}function D(e){const t=this;t.enabled&&(t.allowClick||(t.params.preventClicks&&e.preventDefault(),t.params.preventClicksPropagation&&t.animating&&(e.stopPropagation(),e.stopImmediatePropagation())))}function G(){const e=this,{wrapperEl:t,rtlTranslate:s,enabled:a}=e;if(!a)return;let i;e.previousTranslate=e.translate,e.isHorizontal()?e.translate=-t.scrollLeft:e.translate=-t.scrollTop,0===e.translate&&(e.translate=0),e.updateActiveIndex(),e.updateSlidesClasses();const r=e.maxTranslate()-e.minTranslate();i=0===r?0:(e.translate-e.minTranslate())/r,i!==e.progress&&e.updateProgress(s?-e.translate:e.translate),e.emit("setTranslate",e.translate,!1)}let N=!1;function B(){}const H=(e,t)=>{const s=a(),{params:i,touchEvents:r,el:n,wrapperEl:l,device:o,support:d}=e,c=!!i.nested,p="on"===t?"addEventListener":"removeEventListener",u=t;if(d.touch){const t=!("touchstart"!==r.start||!d.passiveListener||!i.passiveListeners)&&{passive:!0,capture:!1};n[p](r.start,e.onTouchStart,t),n[p](r.move,e.onTouchMove,d.passiveListener?{passive:!1,capture:c}:c),n[p](r.end,e.onTouchEnd,t),r.cancel&&n[p](r.cancel,e.onTouchEnd,t)}else n[p](r.start,e.onTouchStart,!1),s[p](r.move,e.onTouchMove,c),s[p](r.end,e.onTouchEnd,!1);(i.preventClicks||i.preventClicksPropagation)&&n[p]("click",e.onClick,!0),i.cssMode&&l[p]("scroll",e.onScroll),i.updateOnWindowResize?e[u](o.ios||o.android?"resize orientationchange observerUpdate":"resize observerUpdate",A,!0):e[u]("observerUpdate",A,!0)};var X={attachEvents:function(){const e=this,t=a(),{params:s,support:i}=e;e.onTouchStart=L.bind(e),e.onTouchMove=O.bind(e),e.onTouchEnd=I.bind(e),s.cssMode&&(e.onScroll=G.bind(e)),e.onClick=D.bind(e),i.touch&&!N&&(t.addEventListener("touchstart",B),N=!0),H(e,"on")},detachEvents:function(){H(this,"off")}};const Y=(e,t)=>e.grid&&t.grid&&t.grid.rows>1;var R={addClasses:function(){const e=this,{classNames:t,params:s,rtl:a,$el:i,device:r,support:n}=e,l=function(e,t){const s=[];return e.forEach((e=>{"object"==typeof e?Object.keys(e).forEach((a=>{e[a]&&s.push(t+a)})):"string"==typeof e&&s.push(t+e)})),s}(["initialized",s.direction,{"pointer-events":!n.touch},{"free-mode":e.params.freeMode&&s.freeMode.enabled},{autoheight:s.autoHeight},{rtl:a},{grid:s.grid&&s.grid.rows>1},{"grid-column":s.grid&&s.grid.rows>1&&"column"===s.grid.fill},{android:r.android},{ios:r.ios},{"css-mode":s.cssMode},{centered:s.cssMode&&s.centeredSlides},{"watch-progress":s.watchSlidesProgress}],s.containerModifierClass);t.push(...l),i.addClass([...t].join(" ")),e.emitContainerClasses()},removeClasses:function(){const{$el:e,classNames:t}=this;e.removeClass(t.join(" ")),this.emitContainerClasses()}};var W={init:!0,direction:"horizontal",touchEventsTarget:"wrapper",initialSlide:0,speed:300,cssMode:!1,updateOnWindowResize:!0,resizeObserver:!0,nested:!1,createElements:!1,enabled:!0,focusableElements:"input, select, option, textarea, button, video, label",width:null,height:null,preventInteractionOnTransition:!1,userAgent:null,url:null,edgeSwipeDetection:!1,edgeSwipeThreshold:20,autoHeight:!1,setWrapperSize:!1,virtualTranslate:!1,effect:"slide",breakpoints:void 0,breakpointsBase:"window",spaceBetween:0,slidesPerView:1,slidesPerGroup:1,slidesPerGroupSkip:0,slidesPerGroupAuto:!1,centeredSlides:!1,centeredSlidesBounds:!1,slidesOffsetBefore:0,slidesOffsetAfter:0,normalizeSlideIndex:!0,centerInsufficientSlides:!1,watchOverflow:!0,roundLengths:!1,touchRatio:1,touchAngle:45,simulateTouch:!0,shortSwipes:!0,longSwipes:!0,longSwipesRatio:.5,longSwipesMs:300,followFinger:!0,allowTouchMove:!0,threshold:0,touchMoveStopPropagation:!1,touchStartPreventDefault:!0,touchStartForcePreventDefault:!1,touchReleaseOnEdges:!1,uniqueNavElements:!0,resistance:!0,resistanceRatio:.85,watchSlidesProgress:!1,grabCursor:!1,preventClicks:!0,preventClicksPropagation:!0,slideToClickedSlide:!1,preloadImages:!0,updateOnImagesReady:!0,loop:!1,loopAdditionalSlides:0,loopedSlides:null,loopFillGroupWithBlank:!1,loopPreventsSlide:!0,rewind:!1,allowSlidePrev:!0,allowSlideNext:!0,swipeHandler:null,noSwiping:!0,noSwipingClass:"swiper-no-swiping",noSwipingSelector:null,passiveListeners:!0,maxBackfaceHiddenSlides:10,containerModifierClass:"swiper-",slideClass:"swiper-slide",slideBlankClass:"swiper-slide-invisible-blank",slideActiveClass:"swiper-slide-active",slideDuplicateActiveClass:"swiper-slide-duplicate-active",slideVisibleClass:"swiper-slide-visible",slideDuplicateClass:"swiper-slide-duplicate",slideNextClass:"swiper-slide-next",slideDuplicateNextClass:"swiper-slide-duplicate-next",slidePrevClass:"swiper-slide-prev",slideDuplicatePrevClass:"swiper-slide-duplicate-prev",wrapperClass:"swiper-wrapper",runCallbacksOnInit:!0,_emitClasses:!1};function j(e,t){return function(s){void 0===s&&(s={});const a=Object.keys(s)[0],i=s[a];"object"==typeof i&&null!==i?(["navigation","pagination","scrollbar"].indexOf(a)>=0&&!0===e[a]&&(e[a]={auto:!0}),a in e&&"enabled"in i?(!0===e[a]&&(e[a]={enabled:!0}),"object"!=typeof e[a]||"enabled"in e[a]||(e[a].enabled=!0),e[a]||(e[a]={enabled:!1}),g(t,s)):g(t,s)):g(t,s)}}const _={eventsEmitter:$,update:S,translate:M,transition:{setTransition:function(e,t){const s=this;s.params.cssMode||s.$wrapperEl.transition(e),s.emit("setTransition",e,t)},transitionStart:function(e,t){void 0===e&&(e=!0);const s=this,{params:a}=s;a.cssMode||(a.autoHeight&&s.updateAutoHeight(),P({swiper:s,runCallbacks:e,direction:t,step:"Start"}))},transitionEnd:function(e,t){void 0===e&&(e=!0);const s=this,{params:a}=s;s.animating=!1,a.cssMode||(s.setTransition(0),P({swiper:s,runCallbacks:e,direction:t,step:"End"}))}},slide:k,loop:z,grabCursor:{setGrabCursor:function(e){const t=this;if(t.support.touch||!t.params.simulateTouch||t.params.watchOverflow&&t.isLocked||t.params.cssMode)return;const s="container"===t.params.touchEventsTarget?t.el:t.wrapperEl;s.style.cursor="move",s.style.cursor=e?"grabbing":"grab"},unsetGrabCursor:function(){const e=this;e.support.touch||e.params.watchOverflow&&e.isLocked||e.params.cssMode||(e["container"===e.params.touchEventsTarget?"el":"wrapperEl"].style.cursor="")}},events:X,breakpoints:{setBreakpoint:function(){const e=this,{activeIndex:t,initialized:s,loopedSlides:a=0,params:i,$el:r}=e,n=i.breakpoints;if(!n||n&&0===Object.keys(n).length)return;const l=e.getBreakpoint(n,e.params.breakpointsBase,e.el);if(!l||e.currentBreakpoint===l)return;const o=(l in n?n[l]:void 0)||e.originalParams,d=Y(e,i),c=Y(e,o),p=i.enabled;d&&!c?(r.removeClass(`${i.containerModifierClass}grid ${i.containerModifierClass}grid-column`),e.emitContainerClasses()):!d&&c&&(r.addClass(`${i.containerModifierClass}grid`),(o.grid.fill&&"column"===o.grid.fill||!o.grid.fill&&"column"===i.grid.fill)&&r.addClass(`${i.containerModifierClass}grid-column`),e.emitContainerClasses()),["navigation","pagination","scrollbar"].forEach((t=>{const s=i[t]&&i[t].enabled,a=o[t]&&o[t].enabled;s&&!a&&e[t].disable(),!s&&a&&e[t].enable()}));const u=o.direction&&o.direction!==i.direction,h=i.loop&&(o.slidesPerView!==i.slidesPerView||u);u&&s&&e.changeDirection(),g(e.params,o);const m=e.params.enabled;Object.assign(e,{allowTouchMove:e.params.allowTouchMove,allowSlideNext:e.params.allowSlideNext,allowSlidePrev:e.params.allowSlidePrev}),p&&!m?e.disable():!p&&m&&e.enable(),e.currentBreakpoint=l,e.emit("_beforeBreakpoint",o),h&&s&&(e.loopDestroy(),e.loopCreate(),e.updateSlides(),e.slideTo(t-a+e.loopedSlides,0,!1)),e.emit("breakpoint",o)},getBreakpoint:function(e,t,s){if(void 0===t&&(t="window"),!e||"container"===t&&!s)return;let a=!1;const i=r(),n="window"===t?i.innerHeight:s.clientHeight,l=Object.keys(e).map((e=>{if("string"==typeof e&&0===e.indexOf("@")){const t=parseFloat(e.substr(1));return{value:n*t,point:e}}return{value:e,point:e}}));l.sort(((e,t)=>parseInt(e.value,10)-parseInt(t.value,10)));for(let e=0;e<l.length;e+=1){const{point:r,value:n}=l[e];"window"===t?i.matchMedia(`(min-width: ${n}px)`).matches&&(a=r):n<=s.clientWidth&&(a=r)}return a||"max"}},checkOverflow:{checkOverflow:function(){const e=this,{isLocked:t,params:s}=e,{slidesOffsetBefore:a}=s;if(a){const t=e.slides.length-1,s=e.slidesGrid[t]+e.slidesSizesGrid[t]+2*a;e.isLocked=e.size>s}else e.isLocked=1===e.snapGrid.length;!0===s.allowSlideNext&&(e.allowSlideNext=!e.isLocked),!0===s.allowSlidePrev&&(e.allowSlidePrev=!e.isLocked),t&&t!==e.isLocked&&(e.isEnd=!1),t!==e.isLocked&&e.emit(e.isLocked?"lock":"unlock")}},classes:R,images:{loadImage:function(e,t,s,a,i,n){const l=r();let o;function c(){n&&n()}d(e).parent("picture")[0]||e.complete&&i?c():t?(o=new l.Image,o.onload=c,o.onerror=c,a&&(o.sizes=a),s&&(o.srcset=s),t&&(o.src=t)):c()},preloadImages:function(){const e=this;function t(){null!=e&&e&&!e.destroyed&&(void 0!==e.imagesLoaded&&(e.imagesLoaded+=1),e.imagesLoaded===e.imagesToLoad.length&&(e.params.updateOnImagesReady&&e.update(),e.emit("imagesReady")))}e.imagesToLoad=e.$el.find("img");for(let s=0;s<e.imagesToLoad.length;s+=1){const a=e.imagesToLoad[s];e.loadImage(a,a.currentSrc||a.getAttribute("src"),a.srcset||a.getAttribute("srcset"),a.sizes||a.getAttribute("sizes"),!0,t)}}}},q={};class V{constructor(){let e,t;for(var s=arguments.length,a=new Array(s),i=0;i<s;i++)a[i]=arguments[i];if(1===a.length&&a[0].constructor&&"Object"===Object.prototype.toString.call(a[0]).slice(8,-1)?t=a[0]:[e,t]=a,t||(t={}),t=g({},t),e&&!t.el&&(t.el=e),t.el&&d(t.el).length>1){const e=[];return d(t.el).each((s=>{const a=g({},t,{el:s});e.push(new V(a))})),e}const r=this;r.__swiper__=!0,r.support=E(),r.device=C({userAgent:t.userAgent}),r.browser=T(),r.eventsListeners={},r.eventsAnyListeners=[],r.modules=[...r.__modules__],t.modules&&Array.isArray(t.modules)&&r.modules.push(...t.modules);const n={};r.modules.forEach((e=>{e({swiper:r,extendParams:j(t,n),on:r.on.bind(r),once:r.once.bind(r),off:r.off.bind(r),emit:r.emit.bind(r)})}));const l=g({},W,n);return r.params=g({},l,q,t),r.originalParams=g({},r.params),r.passedParams=g({},t),r.params&&r.params.on&&Object.keys(r.params.on).forEach((e=>{r.on(e,r.params.on[e])})),r.params&&r.params.onAny&&r.onAny(r.params.onAny),r.$=d,Object.assign(r,{enabled:r.params.enabled,el:e,classNames:[],slides:d(),slidesGrid:[],snapGrid:[],slidesSizesGrid:[],isHorizontal:()=>"horizontal"===r.params.direction,isVertical:()=>"vertical"===r.params.direction,activeIndex:0,realIndex:0,isBeginning:!0,isEnd:!1,translate:0,previousTranslate:0,progress:0,velocity:0,animating:!1,allowSlideNext:r.params.allowSlideNext,allowSlidePrev:r.params.allowSlidePrev,touchEvents:function(){const e=["touchstart","touchmove","touchend","touchcancel"],t=["pointerdown","pointermove","pointerup"];return r.touchEventsTouch={start:e[0],move:e[1],end:e[2],cancel:e[3]},r.touchEventsDesktop={start:t[0],move:t[1],end:t[2]},r.support.touch||!r.params.simulateTouch?r.touchEventsTouch:r.touchEventsDesktop}(),touchEventsData:{isTouched:void 0,isMoved:void 0,allowTouchCallbacks:void 0,touchStartTime:void 0,isScrolling:void 0,currentTranslate:void 0,startTranslate:void 0,allowThresholdMove:void 0,focusableElements:r.params.focusableElements,lastClickTime:u(),clickTimeout:void 0,velocities:[],allowMomentumBounce:void 0,isTouchEvent:void 0,startMoving:void 0},allowClick:!0,allowTouchMove:r.params.allowTouchMove,touches:{startX:0,startY:0,currentX:0,currentY:0,diff:0},imagesToLoad:[],imagesLoaded:0}),r.emit("_swiper"),r.params.init&&r.init(),r}enable(){const e=this;e.enabled||(e.enabled=!0,e.params.grabCursor&&e.setGrabCursor(),e.emit("enable"))}disable(){const e=this;e.enabled&&(e.enabled=!1,e.params.grabCursor&&e.unsetGrabCursor(),e.emit("disable"))}setProgress(e,t){const s=this;e=Math.min(Math.max(e,0),1);const a=s.minTranslate(),i=(s.maxTranslate()-a)*e+a;s.translateTo(i,void 0===t?0:t),s.updateActiveIndex(),s.updateSlidesClasses()}emitContainerClasses(){const e=this;if(!e.params._emitClasses||!e.el)return;const t=e.el.className.split(" ").filter((t=>0===t.indexOf("swiper")||0===t.indexOf(e.params.containerModifierClass)));e.emit("_containerClasses",t.join(" "))}getSlideClasses(e){const t=this;return t.destroyed?"":e.className.split(" ").filter((e=>0===e.indexOf("swiper-slide")||0===e.indexOf(t.params.slideClass))).join(" ")}emitSlidesClasses(){const e=this;if(!e.params._emitClasses||!e.el)return;const t=[];e.slides.each((s=>{const a=e.getSlideClasses(s);t.push({slideEl:s,classNames:a}),e.emit("_slideClass",s,a)})),e.emit("_slideClasses",t)}slidesPerViewDynamic(e,t){void 0===e&&(e="current"),void 0===t&&(t=!1);const{params:s,slides:a,slidesGrid:i,slidesSizesGrid:r,size:n,activeIndex:l}=this;let o=1;if(s.centeredSlides){let e,t=a[l].swiperSlideSize;for(let s=l+1;s<a.length;s+=1)a[s]&&!e&&(t+=a[s].swiperSlideSize,o+=1,t>n&&(e=!0));for(let s=l-1;s>=0;s-=1)a[s]&&!e&&(t+=a[s].swiperSlideSize,o+=1,t>n&&(e=!0))}else if("current"===e)for(let e=l+1;e<a.length;e+=1){(t?i[e]+r[e]-i[l]<n:i[e]-i[l]<n)&&(o+=1)}else for(let e=l-1;e>=0;e-=1){i[l]-i[e]<n&&(o+=1)}return o}update(){const e=this;if(!e||e.destroyed)return;const{snapGrid:t,params:s}=e;function a(){const t=e.rtlTranslate?-1*e.translate:e.translate,s=Math.min(Math.max(t,e.maxTranslate()),e.minTranslate());e.setTranslate(s),e.updateActiveIndex(),e.updateSlidesClasses()}let i;s.breakpoints&&e.setBreakpoint(),e.updateSize(),e.updateSlides(),e.updateProgress(),e.updateSlidesClasses(),e.params.freeMode&&e.params.freeMode.enabled?(a(),e.params.autoHeight&&e.updateAutoHeight()):(i=("auto"===e.params.slidesPerView||e.params.slidesPerView>1)&&e.isEnd&&!e.params.centeredSlides?e.slideTo(e.slides.length-1,0,!1,!0):e.slideTo(e.activeIndex,0,!1,!0),i||a()),s.watchOverflow&&t!==e.snapGrid&&e.checkOverflow(),e.emit("update")}changeDirection(e,t){void 0===t&&(t=!0);const s=this,a=s.params.direction;return e||(e="horizontal"===a?"vertical":"horizontal"),e===a||"horizontal"!==e&&"vertical"!==e||(s.$el.removeClass(`${s.params.containerModifierClass}${a}`).addClass(`${s.params.containerModifierClass}${e}`),s.emitContainerClasses(),s.params.direction=e,s.slides.each((t=>{"vertical"===e?t.style.width="":t.style.height=""})),s.emit("changeDirection"),t&&s.update()),s}mount(e){const t=this;if(t.mounted)return!0;const s=d(e||t.params.el);if(!(e=s[0]))return!1;e.swiper=t;const i=()=>`.${(t.params.wrapperClass||"").trim().split(" ").join(".")}`;let r=(()=>{if(e&&e.shadowRoot&&e.shadowRoot.querySelector){const t=d(e.shadowRoot.querySelector(i()));return t.children=e=>s.children(e),t}return s.children?s.children(i()):d(s).children(i())})();if(0===r.length&&t.params.createElements){const e=a().createElement("div");r=d(e),e.className=t.params.wrapperClass,s.append(e),s.children(`.${t.params.slideClass}`).each((e=>{r.append(e)}))}return Object.assign(t,{$el:s,el:e,$wrapperEl:r,wrapperEl:r[0],mounted:!0,rtl:"rtl"===e.dir.toLowerCase()||"rtl"===s.css("direction"),rtlTranslate:"horizontal"===t.params.direction&&("rtl"===e.dir.toLowerCase()||"rtl"===s.css("direction")),wrongRTL:"-webkit-box"===r.css("display")}),!0}init(e){const t=this;if(t.initialized)return t;return!1===t.mount(e)||(t.emit("beforeInit"),t.params.breakpoints&&t.setBreakpoint(),t.addClasses(),t.params.loop&&t.loopCreate(),t.updateSize(),t.updateSlides(),t.params.watchOverflow&&t.checkOverflow(),t.params.grabCursor&&t.enabled&&t.setGrabCursor(),t.params.preloadImages&&t.preloadImages(),t.params.loop?t.slideTo(t.params.initialSlide+t.loopedSlides,0,t.params.runCallbacksOnInit,!1,!0):t.slideTo(t.params.initialSlide,0,t.params.runCallbacksOnInit,!1,!0),t.attachEvents(),t.initialized=!0,t.emit("init"),t.emit("afterInit")),t}destroy(e,t){void 0===e&&(e=!0),void 0===t&&(t=!0);const s=this,{params:a,$el:i,$wrapperEl:r,slides:n}=s;return void 0===s.params||s.destroyed||(s.emit("beforeDestroy"),s.initialized=!1,s.detachEvents(),a.loop&&s.loopDestroy(),t&&(s.removeClasses(),i.removeAttr("style"),r.removeAttr("style"),n&&n.length&&n.removeClass([a.slideVisibleClass,a.slideActiveClass,a.slideNextClass,a.slidePrevClass].join(" ")).removeAttr("style").removeAttr("data-swiper-slide-index")),s.emit("destroy"),Object.keys(s.eventsListeners).forEach((e=>{s.off(e)})),!1!==e&&(s.$el[0].swiper=null,function(e){const t=e;Object.keys(t).forEach((e=>{try{t[e]=null}catch(e){}try{delete t[e]}catch(e){}}))}(s)),s.destroyed=!0),null}static extendDefaults(e){g(q,e)}static get extendedDefaults(){return q}static get defaults(){return W}static installModule(e){V.prototype.__modules__||(V.prototype.__modules__=[]);const t=V.prototype.__modules__;"function"==typeof e&&t.indexOf(e)<0&&t.push(e)}static use(e){return Array.isArray(e)?(e.forEach((e=>V.installModule(e))),V):(V.installModule(e),V)}}function F(e,t,s,i){const r=a();return e.params.createElements&&Object.keys(i).forEach((a=>{if(!s[a]&&!0===s.auto){let n=e.$el.children(`.${i[a]}`)[0];n||(n=r.createElement("div"),n.className=i[a],e.$el.append(n)),s[a]=n,t[a]=n}})),s}function U(e){return void 0===e&&(e=""),`.${e.trim().replace(/([\.:!\/])/g,"\\$1").replace(/ /g,".")}`}function K(e){const t=this,{$wrapperEl:s,params:a}=t;if(a.loop&&t.loopDestroy(),"object"==typeof e&&"length"in e)for(let t=0;t<e.length;t+=1)e[t]&&s.append(e[t]);else s.append(e);a.loop&&t.loopCreate(),a.observer||t.update()}function Z(e){const t=this,{params:s,$wrapperEl:a,activeIndex:i}=t;s.loop&&t.loopDestroy();let r=i+1;if("object"==typeof e&&"length"in e){for(let t=0;t<e.length;t+=1)e[t]&&a.prepend(e[t]);r=i+e.length}else a.prepend(e);s.loop&&t.loopCreate(),s.observer||t.update(),t.slideTo(r,0,!1)}function Q(e,t){const s=this,{$wrapperEl:a,params:i,activeIndex:r}=s;let n=r;i.loop&&(n-=s.loopedSlides,s.loopDestroy(),s.slides=a.children(`.${i.slideClass}`));const l=s.slides.length;if(e<=0)return void s.prependSlide(t);if(e>=l)return void s.appendSlide(t);let o=n>e?n+1:n;const d=[];for(let t=l-1;t>=e;t-=1){const e=s.slides.eq(t);e.remove(),d.unshift(e)}if("object"==typeof t&&"length"in t){for(let e=0;e<t.length;e+=1)t[e]&&a.append(t[e]);o=n>e?n+t.length:n}else a.append(t);for(let e=0;e<d.length;e+=1)a.append(d[e]);i.loop&&s.loopCreate(),i.observer||s.update(),i.loop?s.slideTo(o+s.loopedSlides,0,!1):s.slideTo(o,0,!1)}function J(e){const t=this,{params:s,$wrapperEl:a,activeIndex:i}=t;let r=i;s.loop&&(r-=t.loopedSlides,t.loopDestroy(),t.slides=a.children(`.${s.slideClass}`));let n,l=r;if("object"==typeof e&&"length"in e){for(let s=0;s<e.length;s+=1)n=e[s],t.slides[n]&&t.slides.eq(n).remove(),n<l&&(l-=1);l=Math.max(l,0)}else n=e,t.slides[n]&&t.slides.eq(n).remove(),n<l&&(l-=1),l=Math.max(l,0);s.loop&&t.loopCreate(),s.observer||t.update(),s.loop?t.slideTo(l+t.loopedSlides,0,!1):t.slideTo(l,0,!1)}function ee(){const e=this,t=[];for(let s=0;s<e.slides.length;s+=1)t.push(s);e.removeSlide(t)}function te(e){const{effect:t,swiper:s,on:a,setTranslate:i,setTransition:r,overwriteParams:n,perspective:l,recreateShadows:o,getEffectParams:d}=e;let c;a("beforeInit",(()=>{if(s.params.effect!==t)return;s.classNames.push(`${s.params.containerModifierClass}${t}`),l&&l()&&s.classNames.push(`${s.params.containerModifierClass}3d`);const e=n?n():{};Object.assign(s.params,e),Object.assign(s.originalParams,e)})),a("setTranslate",(()=>{s.params.effect===t&&i()})),a("setTransition",((e,a)=>{s.params.effect===t&&r(a)})),a("transitionEnd",(()=>{if(s.params.effect===t&&o){if(!d||!d().slideShadows)return;s.slides.each((e=>{s.$(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").remove()})),o()}})),a("virtualUpdate",(()=>{s.params.effect===t&&(s.slides.length||(c=!0),requestAnimationFrame((()=>{c&&s.slides&&s.slides.length&&(i(),c=!1)})))}))}function se(e,t){return e.transformEl?t.find(e.transformEl).css({"backface-visibility":"hidden","-webkit-backface-visibility":"hidden"}):t}function ae(e){let{swiper:t,duration:s,transformEl:a,allSlides:i}=e;const{slides:r,activeIndex:n,$wrapperEl:l}=t;if(t.params.virtualTranslate&&0!==s){let e,s=!1;e=i?a?r.find(a):r:a?r.eq(n).find(a):r.eq(n),e.transitionEnd((()=>{if(s)return;if(!t||t.destroyed)return;s=!0,t.animating=!1;const e=["webkitTransitionEnd","transitionend"];for(let t=0;t<e.length;t+=1)l.trigger(e[t])}))}}function ie(e,t,s){const a="swiper-slide-shadow"+(s?`-${s}`:""),i=e.transformEl?t.find(e.transformEl):t;let r=i.children(`.${a}`);return r.length||(r=d(`<div class="swiper-slide-shadow${s?`-${s}`:""}"></div>`),i.append(r)),r}Object.keys(_).forEach((e=>{Object.keys(_[e]).forEach((t=>{V.prototype[t]=_[e][t]}))})),V.use([function(e){let{swiper:t,on:s,emit:a}=e;const i=r();let n=null,l=null;const o=()=>{t&&!t.destroyed&&t.initialized&&(a("beforeResize"),a("resize"))},d=()=>{t&&!t.destroyed&&t.initialized&&a("orientationchange")};s("init",(()=>{t.params.resizeObserver&&void 0!==i.ResizeObserver?t&&!t.destroyed&&t.initialized&&(n=new ResizeObserver((e=>{l=i.requestAnimationFrame((()=>{const{width:s,height:a}=t;let i=s,r=a;e.forEach((e=>{let{contentBoxSize:s,contentRect:a,target:n}=e;n&&n!==t.el||(i=a?a.width:(s[0]||s).inlineSize,r=a?a.height:(s[0]||s).blockSize)})),i===s&&r===a||o()}))})),n.observe(t.el)):(i.addEventListener("resize",o),i.addEventListener("orientationchange",d))})),s("destroy",(()=>{l&&i.cancelAnimationFrame(l),n&&n.unobserve&&t.el&&(n.unobserve(t.el),n=null),i.removeEventListener("resize",o),i.removeEventListener("orientationchange",d)}))},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const n=[],l=r(),o=function(e,t){void 0===t&&(t={});const s=new(l.MutationObserver||l.WebkitMutationObserver)((e=>{if(1===e.length)return void i("observerUpdate",e[0]);const t=function(){i("observerUpdate",e[0])};l.requestAnimationFrame?l.requestAnimationFrame(t):l.setTimeout(t,0)}));s.observe(e,{attributes:void 0===t.attributes||t.attributes,childList:void 0===t.childList||t.childList,characterData:void 0===t.characterData||t.characterData}),n.push(s)};s({observer:!1,observeParents:!1,observeSlideChildren:!1}),a("init",(()=>{if(t.params.observer){if(t.params.observeParents){const e=t.$el.parents();for(let t=0;t<e.length;t+=1)o(e[t])}o(t.$el[0],{childList:t.params.observeSlideChildren}),o(t.$wrapperEl[0],{attributes:!1})}})),a("destroy",(()=>{n.forEach((e=>{e.disconnect()})),n.splice(0,n.length)}))}]);const re=[function(e){let t,{swiper:s,extendParams:a,on:i,emit:r}=e;function n(e,t){const a=s.params.virtual;if(a.cache&&s.virtual.cache[t])return s.virtual.cache[t];const i=a.renderSlide?d(a.renderSlide.call(s,e,t)):d(`<div class="${s.params.slideClass}" data-swiper-slide-index="${t}">${e}</div>`);return i.attr("data-swiper-slide-index")||i.attr("data-swiper-slide-index",t),a.cache&&(s.virtual.cache[t]=i),i}function l(e){const{slidesPerView:t,slidesPerGroup:a,centeredSlides:i}=s.params,{addSlidesBefore:l,addSlidesAfter:o}=s.params.virtual,{from:d,to:c,slides:p,slidesGrid:u,offset:h}=s.virtual;s.params.cssMode||s.updateActiveIndex();const m=s.activeIndex||0;let f,g,v;f=s.rtlTranslate?"right":s.isHorizontal()?"left":"top",i?(g=Math.floor(t/2)+a+o,v=Math.floor(t/2)+a+l):(g=t+(a-1)+o,v=a+l);const w=Math.max((m||0)-v,0),b=Math.min((m||0)+g,p.length-1),x=(s.slidesGrid[w]||0)-(s.slidesGrid[0]||0);function y(){s.updateSlides(),s.updateProgress(),s.updateSlidesClasses(),s.lazy&&s.params.lazy.enabled&&s.lazy.load(),r("virtualUpdate")}if(Object.assign(s.virtual,{from:w,to:b,offset:x,slidesGrid:s.slidesGrid}),d===w&&c===b&&!e)return s.slidesGrid!==u&&x!==h&&s.slides.css(f,`${x}px`),s.updateProgress(),void r("virtualUpdate");if(s.params.virtual.renderExternal)return s.params.virtual.renderExternal.call(s,{offset:x,from:w,to:b,slides:function(){const e=[];for(let t=w;t<=b;t+=1)e.push(p[t]);return e}()}),void(s.params.virtual.renderExternalUpdate?y():r("virtualUpdate"));const E=[],C=[];if(e)s.$wrapperEl.find(`.${s.params.slideClass}`).remove();else for(let e=d;e<=c;e+=1)(e<w||e>b)&&s.$wrapperEl.find(`.${s.params.slideClass}[data-swiper-slide-index="${e}"]`).remove();for(let t=0;t<p.length;t+=1)t>=w&&t<=b&&(void 0===c||e?C.push(t):(t>c&&C.push(t),t<d&&E.push(t)));C.forEach((e=>{s.$wrapperEl.append(n(p[e],e))})),E.sort(((e,t)=>t-e)).forEach((e=>{s.$wrapperEl.prepend(n(p[e],e))})),s.$wrapperEl.children(".swiper-slide").css(f,`${x}px`),y()}a({virtual:{enabled:!1,slides:[],cache:!0,renderSlide:null,renderExternal:null,renderExternalUpdate:!0,addSlidesBefore:0,addSlidesAfter:0}}),s.virtual={cache:{},from:void 0,to:void 0,slides:[],offset:0,slidesGrid:[]},i("beforeInit",(()=>{s.params.virtual.enabled&&(s.virtual.slides=s.params.virtual.slides,s.classNames.push(`${s.params.containerModifierClass}virtual`),s.params.watchSlidesProgress=!0,s.originalParams.watchSlidesProgress=!0,s.params.initialSlide||l())})),i("setTranslate",(()=>{s.params.virtual.enabled&&(s.params.cssMode&&!s._immediateVirtual?(clearTimeout(t),t=setTimeout((()=>{l()}),100)):l())})),i("init update resize",(()=>{s.params.virtual.enabled&&s.params.cssMode&&v(s.wrapperEl,"--swiper-virtual-size",`${s.virtualSize}px`)})),Object.assign(s.virtual,{appendSlide:function(e){if("object"==typeof e&&"length"in e)for(let t=0;t<e.length;t+=1)e[t]&&s.virtual.slides.push(e[t]);else s.virtual.slides.push(e);l(!0)},prependSlide:function(e){const t=s.activeIndex;let a=t+1,i=1;if(Array.isArray(e)){for(let t=0;t<e.length;t+=1)e[t]&&s.virtual.slides.unshift(e[t]);a=t+e.length,i=e.length}else s.virtual.slides.unshift(e);if(s.params.virtual.cache){const e=s.virtual.cache,t={};Object.keys(e).forEach((s=>{const a=e[s],r=a.attr("data-swiper-slide-index");r&&a.attr("data-swiper-slide-index",parseInt(r,10)+i),t[parseInt(s,10)+i]=a})),s.virtual.cache=t}l(!0),s.slideTo(a,0)},removeSlide:function(e){if(null==e)return;let t=s.activeIndex;if(Array.isArray(e))for(let a=e.length-1;a>=0;a-=1)s.virtual.slides.splice(e[a],1),s.params.virtual.cache&&delete s.virtual.cache[e[a]],e[a]<t&&(t-=1),t=Math.max(t,0);else s.virtual.slides.splice(e,1),s.params.virtual.cache&&delete s.virtual.cache[e],e<t&&(t-=1),t=Math.max(t,0);l(!0),s.slideTo(t,0)},removeAllSlides:function(){s.virtual.slides=[],s.params.virtual.cache&&(s.virtual.cache={}),l(!0),s.slideTo(0,0)},update:l})},function(e){let{swiper:t,extendParams:s,on:i,emit:n}=e;const l=a(),o=r();function c(e){if(!t.enabled)return;const{rtlTranslate:s}=t;let a=e;a.originalEvent&&(a=a.originalEvent);const i=a.keyCode||a.charCode,r=t.params.keyboard.pageUpDown,d=r&&33===i,c=r&&34===i,p=37===i,u=39===i,h=38===i,m=40===i;if(!t.allowSlideNext&&(t.isHorizontal()&&u||t.isVertical()&&m||c))return!1;if(!t.allowSlidePrev&&(t.isHorizontal()&&p||t.isVertical()&&h||d))return!1;if(!(a.shiftKey||a.altKey||a.ctrlKey||a.metaKey||l.activeElement&&l.activeElement.nodeName&&("input"===l.activeElement.nodeName.toLowerCase()||"textarea"===l.activeElement.nodeName.toLowerCase()))){if(t.params.keyboard.onlyInViewport&&(d||c||p||u||h||m)){let e=!1;if(t.$el.parents(`.${t.params.slideClass}`).length>0&&0===t.$el.parents(`.${t.params.slideActiveClass}`).length)return;const a=t.$el,i=a[0].clientWidth,r=a[0].clientHeight,n=o.innerWidth,l=o.innerHeight,d=t.$el.offset();s&&(d.left-=t.$el[0].scrollLeft);const c=[[d.left,d.top],[d.left+i,d.top],[d.left,d.top+r],[d.left+i,d.top+r]];for(let t=0;t<c.length;t+=1){const s=c[t];if(s[0]>=0&&s[0]<=n&&s[1]>=0&&s[1]<=l){if(0===s[0]&&0===s[1])continue;e=!0}}if(!e)return}t.isHorizontal()?((d||c||p||u)&&(a.preventDefault?a.preventDefault():a.returnValue=!1),((c||u)&&!s||(d||p)&&s)&&t.slideNext(),((d||p)&&!s||(c||u)&&s)&&t.slidePrev()):((d||c||h||m)&&(a.preventDefault?a.preventDefault():a.returnValue=!1),(c||m)&&t.slideNext(),(d||h)&&t.slidePrev()),n("keyPress",i)}}function p(){t.keyboard.enabled||(d(l).on("keydown",c),t.keyboard.enabled=!0)}function u(){t.keyboard.enabled&&(d(l).off("keydown",c),t.keyboard.enabled=!1)}t.keyboard={enabled:!1},s({keyboard:{enabled:!1,onlyInViewport:!0,pageUpDown:!0}}),i("init",(()=>{t.params.keyboard.enabled&&p()})),i("destroy",(()=>{t.keyboard.enabled&&u()})),Object.assign(t.keyboard,{enable:p,disable:u})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const n=r();let l;s({mousewheel:{enabled:!1,releaseOnEdges:!1,invert:!1,forceToAxis:!1,sensitivity:1,eventsTarget:"container",thresholdDelta:null,thresholdTime:null}}),t.mousewheel={enabled:!1};let o,c=u();const h=[];function m(){t.enabled&&(t.mouseEntered=!0)}function f(){t.enabled&&(t.mouseEntered=!1)}function g(e){return!(t.params.mousewheel.thresholdDelta&&e.delta<t.params.mousewheel.thresholdDelta)&&(!(t.params.mousewheel.thresholdTime&&u()-c<t.params.mousewheel.thresholdTime)&&(e.delta>=6&&u()-c<60||(e.direction<0?t.isEnd&&!t.params.loop||t.animating||(t.slideNext(),i("scroll",e.raw)):t.isBeginning&&!t.params.loop||t.animating||(t.slidePrev(),i("scroll",e.raw)),c=(new n.Date).getTime(),!1)))}function v(e){let s=e,a=!0;if(!t.enabled)return;const r=t.params.mousewheel;t.params.cssMode&&s.preventDefault();let n=t.$el;if("container"!==t.params.mousewheel.eventsTarget&&(n=d(t.params.mousewheel.eventsTarget)),!t.mouseEntered&&!n[0].contains(s.target)&&!r.releaseOnEdges)return!0;s.originalEvent&&(s=s.originalEvent);let c=0;const m=t.rtlTranslate?-1:1,f=function(e){let t=0,s=0,a=0,i=0;return"detail"in e&&(s=e.detail),"wheelDelta"in e&&(s=-e.wheelDelta/120),"wheelDeltaY"in e&&(s=-e.wheelDeltaY/120),"wheelDeltaX"in e&&(t=-e.wheelDeltaX/120),"axis"in e&&e.axis===e.HORIZONTAL_AXIS&&(t=s,s=0),a=10*t,i=10*s,"deltaY"in e&&(i=e.deltaY),"deltaX"in e&&(a=e.deltaX),e.shiftKey&&!a&&(a=i,i=0),(a||i)&&e.deltaMode&&(1===e.deltaMode?(a*=40,i*=40):(a*=800,i*=800)),a&&!t&&(t=a<1?-1:1),i&&!s&&(s=i<1?-1:1),{spinX:t,spinY:s,pixelX:a,pixelY:i}}(s);if(r.forceToAxis)if(t.isHorizontal()){if(!(Math.abs(f.pixelX)>Math.abs(f.pixelY)))return!0;c=-f.pixelX*m}else{if(!(Math.abs(f.pixelY)>Math.abs(f.pixelX)))return!0;c=-f.pixelY}else c=Math.abs(f.pixelX)>Math.abs(f.pixelY)?-f.pixelX*m:-f.pixelY;if(0===c)return!0;r.invert&&(c=-c);let v=t.getTranslate()+c*r.sensitivity;if(v>=t.minTranslate()&&(v=t.minTranslate()),v<=t.maxTranslate()&&(v=t.maxTranslate()),a=!!t.params.loop||!(v===t.minTranslate()||v===t.maxTranslate()),a&&t.params.nested&&s.stopPropagation(),t.params.freeMode&&t.params.freeMode.enabled){const e={time:u(),delta:Math.abs(c),direction:Math.sign(c)},a=o&&e.time<o.time+500&&e.delta<=o.delta&&e.direction===o.direction;if(!a){o=void 0,t.params.loop&&t.loopFix();let n=t.getTranslate()+c*r.sensitivity;const d=t.isBeginning,u=t.isEnd;if(n>=t.minTranslate()&&(n=t.minTranslate()),n<=t.maxTranslate()&&(n=t.maxTranslate()),t.setTransition(0),t.setTranslate(n),t.updateProgress(),t.updateActiveIndex(),t.updateSlidesClasses(),(!d&&t.isBeginning||!u&&t.isEnd)&&t.updateSlidesClasses(),t.params.freeMode.sticky){clearTimeout(l),l=void 0,h.length>=15&&h.shift();const s=h.length?h[h.length-1]:void 0,a=h[0];if(h.push(e),s&&(e.delta>s.delta||e.direction!==s.direction))h.splice(0);else if(h.length>=15&&e.time-a.time<500&&a.delta-e.delta>=1&&e.delta<=6){const s=c>0?.8:.2;o=e,h.splice(0),l=p((()=>{t.slideToClosest(t.params.speed,!0,void 0,s)}),0)}l||(l=p((()=>{o=e,h.splice(0),t.slideToClosest(t.params.speed,!0,void 0,.5)}),500))}if(a||i("scroll",s),t.params.autoplay&&t.params.autoplayDisableOnInteraction&&t.autoplay.stop(),n===t.minTranslate()||n===t.maxTranslate())return!0}}else{const s={time:u(),delta:Math.abs(c),direction:Math.sign(c),raw:e};h.length>=2&&h.shift();const a=h.length?h[h.length-1]:void 0;if(h.push(s),a?(s.direction!==a.direction||s.delta>a.delta||s.time>a.time+150)&&g(s):g(s),function(e){const s=t.params.mousewheel;if(e.direction<0){if(t.isEnd&&!t.params.loop&&s.releaseOnEdges)return!0}else if(t.isBeginning&&!t.params.loop&&s.releaseOnEdges)return!0;return!1}(s))return!0}return s.preventDefault?s.preventDefault():s.returnValue=!1,!1}function w(e){let s=t.$el;"container"!==t.params.mousewheel.eventsTarget&&(s=d(t.params.mousewheel.eventsTarget)),s[e]("mouseenter",m),s[e]("mouseleave",f),s[e]("wheel",v)}function b(){return t.params.cssMode?(t.wrapperEl.removeEventListener("wheel",v),!0):!t.mousewheel.enabled&&(w("on"),t.mousewheel.enabled=!0,!0)}function x(){return t.params.cssMode?(t.wrapperEl.addEventListener(event,v),!0):!!t.mousewheel.enabled&&(w("off"),t.mousewheel.enabled=!1,!0)}a("init",(()=>{!t.params.mousewheel.enabled&&t.params.cssMode&&x(),t.params.mousewheel.enabled&&b()})),a("destroy",(()=>{t.params.cssMode&&b(),t.mousewheel.enabled&&x()})),Object.assign(t.mousewheel,{enable:b,disable:x})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;function r(e){let s;return e&&(s=d(e),t.params.uniqueNavElements&&"string"==typeof e&&s.length>1&&1===t.$el.find(e).length&&(s=t.$el.find(e))),s}function n(e,s){const a=t.params.navigation;e&&e.length>0&&(e[s?"addClass":"removeClass"](a.disabledClass),e[0]&&"BUTTON"===e[0].tagName&&(e[0].disabled=s),t.params.watchOverflow&&t.enabled&&e[t.isLocked?"addClass":"removeClass"](a.lockClass))}function l(){if(t.params.loop)return;const{$nextEl:e,$prevEl:s}=t.navigation;n(s,t.isBeginning&&!t.params.rewind),n(e,t.isEnd&&!t.params.rewind)}function o(e){e.preventDefault(),(!t.isBeginning||t.params.loop||t.params.rewind)&&t.slidePrev()}function c(e){e.preventDefault(),(!t.isEnd||t.params.loop||t.params.rewind)&&t.slideNext()}function p(){const e=t.params.navigation;if(t.params.navigation=F(t,t.originalParams.navigation,t.params.navigation,{nextEl:"swiper-button-next",prevEl:"swiper-button-prev"}),!e.nextEl&&!e.prevEl)return;const s=r(e.nextEl),a=r(e.prevEl);s&&s.length>0&&s.on("click",c),a&&a.length>0&&a.on("click",o),Object.assign(t.navigation,{$nextEl:s,nextEl:s&&s[0],$prevEl:a,prevEl:a&&a[0]}),t.enabled||(s&&s.addClass(e.lockClass),a&&a.addClass(e.lockClass))}function u(){const{$nextEl:e,$prevEl:s}=t.navigation;e&&e.length&&(e.off("click",c),e.removeClass(t.params.navigation.disabledClass)),s&&s.length&&(s.off("click",o),s.removeClass(t.params.navigation.disabledClass))}s({navigation:{nextEl:null,prevEl:null,hideOnClick:!1,disabledClass:"swiper-button-disabled",hiddenClass:"swiper-button-hidden",lockClass:"swiper-button-lock",navigationDisabledClass:"swiper-navigation-disabled"}}),t.navigation={nextEl:null,$nextEl:null,prevEl:null,$prevEl:null},a("init",(()=>{!1===t.params.navigation.enabled?h():(p(),l())})),a("toEdge fromEdge lock unlock",(()=>{l()})),a("destroy",(()=>{u()})),a("enable disable",(()=>{const{$nextEl:e,$prevEl:s}=t.navigation;e&&e[t.enabled?"removeClass":"addClass"](t.params.navigation.lockClass),s&&s[t.enabled?"removeClass":"addClass"](t.params.navigation.lockClass)})),a("click",((e,s)=>{const{$nextEl:a,$prevEl:r}=t.navigation,n=s.target;if(t.params.navigation.hideOnClick&&!d(n).is(r)&&!d(n).is(a)){if(t.pagination&&t.params.pagination&&t.params.pagination.clickable&&(t.pagination.el===n||t.pagination.el.contains(n)))return;let e;a?e=a.hasClass(t.params.navigation.hiddenClass):r&&(e=r.hasClass(t.params.navigation.hiddenClass)),i(!0===e?"navigationShow":"navigationHide"),a&&a.toggleClass(t.params.navigation.hiddenClass),r&&r.toggleClass(t.params.navigation.hiddenClass)}}));const h=()=>{t.$el.addClass(t.params.navigation.navigationDisabledClass),u()};Object.assign(t.navigation,{enable:()=>{t.$el.removeClass(t.params.navigation.navigationDisabledClass),p(),l()},disable:h,update:l,init:p,destroy:u})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const r="swiper-pagination";let n;s({pagination:{el:null,bulletElement:"span",clickable:!1,hideOnClick:!1,renderBullet:null,renderProgressbar:null,renderFraction:null,renderCustom:null,progressbarOpposite:!1,type:"bullets",dynamicBullets:!1,dynamicMainBullets:1,formatFractionCurrent:e=>e,formatFractionTotal:e=>e,bulletClass:`${r}-bullet`,bulletActiveClass:`${r}-bullet-active`,modifierClass:`${r}-`,currentClass:`${r}-current`,totalClass:`${r}-total`,hiddenClass:`${r}-hidden`,progressbarFillClass:`${r}-progressbar-fill`,progressbarOppositeClass:`${r}-progressbar-opposite`,clickableClass:`${r}-clickable`,lockClass:`${r}-lock`,horizontalClass:`${r}-horizontal`,verticalClass:`${r}-vertical`,paginationDisabledClass:`${r}-disabled`}}),t.pagination={el:null,$el:null,bullets:[]};let l=0;function o(){return!t.params.pagination.el||!t.pagination.el||!t.pagination.$el||0===t.pagination.$el.length}function c(e,s){const{bulletActiveClass:a}=t.params.pagination;e[s]().addClass(`${a}-${s}`)[s]().addClass(`${a}-${s}-${s}`)}function p(){const e=t.rtl,s=t.params.pagination;if(o())return;const a=t.virtual&&t.params.virtual.enabled?t.virtual.slides.length:t.slides.length,r=t.pagination.$el;let p;const u=t.params.loop?Math.ceil((a-2*t.loopedSlides)/t.params.slidesPerGroup):t.snapGrid.length;if(t.params.loop?(p=Math.ceil((t.activeIndex-t.loopedSlides)/t.params.slidesPerGroup),p>a-1-2*t.loopedSlides&&(p-=a-2*t.loopedSlides),p>u-1&&(p-=u),p<0&&"bullets"!==t.params.paginationType&&(p=u+p)):p=void 0!==t.snapIndex?t.snapIndex:t.activeIndex||0,"bullets"===s.type&&t.pagination.bullets&&t.pagination.bullets.length>0){const a=t.pagination.bullets;let i,o,u;if(s.dynamicBullets&&(n=a.eq(0)[t.isHorizontal()?"outerWidth":"outerHeight"](!0),r.css(t.isHorizontal()?"width":"height",n*(s.dynamicMainBullets+4)+"px"),s.dynamicMainBullets>1&&void 0!==t.previousIndex&&(l+=p-(t.previousIndex-t.loopedSlides||0),l>s.dynamicMainBullets-1?l=s.dynamicMainBullets-1:l<0&&(l=0)),i=Math.max(p-l,0),o=i+(Math.min(a.length,s.dynamicMainBullets)-1),u=(o+i)/2),a.removeClass(["","-next","-next-next","-prev","-prev-prev","-main"].map((e=>`${s.bulletActiveClass}${e}`)).join(" ")),r.length>1)a.each((e=>{const t=d(e),a=t.index();a===p&&t.addClass(s.bulletActiveClass),s.dynamicBullets&&(a>=i&&a<=o&&t.addClass(`${s.bulletActiveClass}-main`),a===i&&c(t,"prev"),a===o&&c(t,"next"))}));else{const e=a.eq(p),r=e.index();if(e.addClass(s.bulletActiveClass),s.dynamicBullets){const e=a.eq(i),n=a.eq(o);for(let e=i;e<=o;e+=1)a.eq(e).addClass(`${s.bulletActiveClass}-main`);if(t.params.loop)if(r>=a.length){for(let e=s.dynamicMainBullets;e>=0;e-=1)a.eq(a.length-e).addClass(`${s.bulletActiveClass}-main`);a.eq(a.length-s.dynamicMainBullets-1).addClass(`${s.bulletActiveClass}-prev`)}else c(e,"prev"),c(n,"next");else c(e,"prev"),c(n,"next")}}if(s.dynamicBullets){const i=Math.min(a.length,s.dynamicMainBullets+4),r=(n*i-n)/2-u*n,l=e?"right":"left";a.css(t.isHorizontal()?l:"top",`${r}px`)}}if("fraction"===s.type&&(r.find(U(s.currentClass)).text(s.formatFractionCurrent(p+1)),r.find(U(s.totalClass)).text(s.formatFractionTotal(u))),"progressbar"===s.type){let e;e=s.progressbarOpposite?t.isHorizontal()?"vertical":"horizontal":t.isHorizontal()?"horizontal":"vertical";const a=(p+1)/u;let i=1,n=1;"horizontal"===e?i=a:n=a,r.find(U(s.progressbarFillClass)).transform(`translate3d(0,0,0) scaleX(${i}) scaleY(${n})`).transition(t.params.speed)}"custom"===s.type&&s.renderCustom?(r.html(s.renderCustom(t,p+1,u)),i("paginationRender",r[0])):i("paginationUpdate",r[0]),t.params.watchOverflow&&t.enabled&&r[t.isLocked?"addClass":"removeClass"](s.lockClass)}function u(){const e=t.params.pagination;if(o())return;const s=t.virtual&&t.params.virtual.enabled?t.virtual.slides.length:t.slides.length,a=t.pagination.$el;let r="";if("bullets"===e.type){let i=t.params.loop?Math.ceil((s-2*t.loopedSlides)/t.params.slidesPerGroup):t.snapGrid.length;t.params.freeMode&&t.params.freeMode.enabled&&!t.params.loop&&i>s&&(i=s);for(let s=0;s<i;s+=1)e.renderBullet?r+=e.renderBullet.call(t,s,e.bulletClass):r+=`<${e.bulletElement} class="${e.bulletClass}"></${e.bulletElement}>`;a.html(r),t.pagination.bullets=a.find(U(e.bulletClass))}"fraction"===e.type&&(r=e.renderFraction?e.renderFraction.call(t,e.currentClass,e.totalClass):`<span class="${e.currentClass}"></span> / <span class="${e.totalClass}"></span>`,a.html(r)),"progressbar"===e.type&&(r=e.renderProgressbar?e.renderProgressbar.call(t,e.progressbarFillClass):`<span class="${e.progressbarFillClass}"></span>`,a.html(r)),"custom"!==e.type&&i("paginationRender",t.pagination.$el[0])}function h(){t.params.pagination=F(t,t.originalParams.pagination,t.params.pagination,{el:"swiper-pagination"});const e=t.params.pagination;if(!e.el)return;let s=d(e.el);0!==s.length&&(t.params.uniqueNavElements&&"string"==typeof e.el&&s.length>1&&(s=t.$el.find(e.el),s.length>1&&(s=s.filter((e=>d(e).parents(".swiper")[0]===t.el)))),"bullets"===e.type&&e.clickable&&s.addClass(e.clickableClass),s.addClass(e.modifierClass+e.type),s.addClass(t.isHorizontal()?e.horizontalClass:e.verticalClass),"bullets"===e.type&&e.dynamicBullets&&(s.addClass(`${e.modifierClass}${e.type}-dynamic`),l=0,e.dynamicMainBullets<1&&(e.dynamicMainBullets=1)),"progressbar"===e.type&&e.progressbarOpposite&&s.addClass(e.progressbarOppositeClass),e.clickable&&s.on("click",U(e.bulletClass),(function(e){e.preventDefault();let s=d(this).index()*t.params.slidesPerGroup;t.params.loop&&(s+=t.loopedSlides),t.slideTo(s)})),Object.assign(t.pagination,{$el:s,el:s[0]}),t.enabled||s.addClass(e.lockClass))}function m(){const e=t.params.pagination;if(o())return;const s=t.pagination.$el;s.removeClass(e.hiddenClass),s.removeClass(e.modifierClass+e.type),s.removeClass(t.isHorizontal()?e.horizontalClass:e.verticalClass),t.pagination.bullets&&t.pagination.bullets.removeClass&&t.pagination.bullets.removeClass(e.bulletActiveClass),e.clickable&&s.off("click",U(e.bulletClass))}a("init",(()=>{!1===t.params.pagination.enabled?f():(h(),u(),p())})),a("activeIndexChange",(()=>{(t.params.loop||void 0===t.snapIndex)&&p()})),a("snapIndexChange",(()=>{t.params.loop||p()})),a("slidesLengthChange",(()=>{t.params.loop&&(u(),p())})),a("snapGridLengthChange",(()=>{t.params.loop||(u(),p())})),a("destroy",(()=>{m()})),a("enable disable",(()=>{const{$el:e}=t.pagination;e&&e[t.enabled?"removeClass":"addClass"](t.params.pagination.lockClass)})),a("lock unlock",(()=>{p()})),a("click",((e,s)=>{const a=s.target,{$el:r}=t.pagination;if(t.params.pagination.el&&t.params.pagination.hideOnClick&&r.length>0&&!d(a).hasClass(t.params.pagination.bulletClass)){if(t.navigation&&(t.navigation.nextEl&&a===t.navigation.nextEl||t.navigation.prevEl&&a===t.navigation.prevEl))return;const e=r.hasClass(t.params.pagination.hiddenClass);i(!0===e?"paginationShow":"paginationHide"),r.toggleClass(t.params.pagination.hiddenClass)}}));const f=()=>{t.$el.addClass(t.params.pagination.paginationDisabledClass),t.pagination.$el&&t.pagination.$el.addClass(t.params.pagination.paginationDisabledClass),m()};Object.assign(t.pagination,{enable:()=>{t.$el.removeClass(t.params.pagination.paginationDisabledClass),t.pagination.$el&&t.pagination.$el.removeClass(t.params.pagination.paginationDisabledClass),h(),u(),p()},disable:f,render:u,update:p,init:h,destroy:m})},function(e){let{swiper:t,extendParams:s,on:i,emit:r}=e;const n=a();let l,o,c,u,h=!1,m=null,f=null;function g(){if(!t.params.scrollbar.el||!t.scrollbar.el)return;const{scrollbar:e,rtlTranslate:s,progress:a}=t,{$dragEl:i,$el:r}=e,n=t.params.scrollbar;let l=o,d=(c-o)*a;s?(d=-d,d>0?(l=o-d,d=0):-d+o>c&&(l=c+d)):d<0?(l=o+d,d=0):d+o>c&&(l=c-d),t.isHorizontal()?(i.transform(`translate3d(${d}px, 0, 0)`),i[0].style.width=`${l}px`):(i.transform(`translate3d(0px, ${d}px, 0)`),i[0].style.height=`${l}px`),n.hide&&(clearTimeout(m),r[0].style.opacity=1,m=setTimeout((()=>{r[0].style.opacity=0,r.transition(400)}),1e3))}function v(){if(!t.params.scrollbar.el||!t.scrollbar.el)return;const{scrollbar:e}=t,{$dragEl:s,$el:a}=e;s[0].style.width="",s[0].style.height="",c=t.isHorizontal()?a[0].offsetWidth:a[0].offsetHeight,u=t.size/(t.virtualSize+t.params.slidesOffsetBefore-(t.params.centeredSlides?t.snapGrid[0]:0)),o="auto"===t.params.scrollbar.dragSize?c*u:parseInt(t.params.scrollbar.dragSize,10),t.isHorizontal()?s[0].style.width=`${o}px`:s[0].style.height=`${o}px`,a[0].style.display=u>=1?"none":"",t.params.scrollbar.hide&&(a[0].style.opacity=0),t.params.watchOverflow&&t.enabled&&e.$el[t.isLocked?"addClass":"removeClass"](t.params.scrollbar.lockClass)}function w(e){return t.isHorizontal()?"touchstart"===e.type||"touchmove"===e.type?e.targetTouches[0].clientX:e.clientX:"touchstart"===e.type||"touchmove"===e.type?e.targetTouches[0].clientY:e.clientY}function b(e){const{scrollbar:s,rtlTranslate:a}=t,{$el:i}=s;let r;r=(w(e)-i.offset()[t.isHorizontal()?"left":"top"]-(null!==l?l:o/2))/(c-o),r=Math.max(Math.min(r,1),0),a&&(r=1-r);const n=t.minTranslate()+(t.maxTranslate()-t.minTranslate())*r;t.updateProgress(n),t.setTranslate(n),t.updateActiveIndex(),t.updateSlidesClasses()}function x(e){const s=t.params.scrollbar,{scrollbar:a,$wrapperEl:i}=t,{$el:n,$dragEl:o}=a;h=!0,l=e.target===o[0]||e.target===o?w(e)-e.target.getBoundingClientRect()[t.isHorizontal()?"left":"top"]:null,e.preventDefault(),e.stopPropagation(),i.transition(100),o.transition(100),b(e),clearTimeout(f),n.transition(0),s.hide&&n.css("opacity",1),t.params.cssMode&&t.$wrapperEl.css("scroll-snap-type","none"),r("scrollbarDragStart",e)}function y(e){const{scrollbar:s,$wrapperEl:a}=t,{$el:i,$dragEl:n}=s;h&&(e.preventDefault?e.preventDefault():e.returnValue=!1,b(e),a.transition(0),i.transition(0),n.transition(0),r("scrollbarDragMove",e))}function E(e){const s=t.params.scrollbar,{scrollbar:a,$wrapperEl:i}=t,{$el:n}=a;h&&(h=!1,t.params.cssMode&&(t.$wrapperEl.css("scroll-snap-type",""),i.transition("")),s.hide&&(clearTimeout(f),f=p((()=>{n.css("opacity",0),n.transition(400)}),1e3)),r("scrollbarDragEnd",e),s.snapOnRelease&&t.slideToClosest())}function C(e){const{scrollbar:s,touchEventsTouch:a,touchEventsDesktop:i,params:r,support:l}=t,o=s.$el;if(!o)return;const d=o[0],c=!(!l.passiveListener||!r.passiveListeners)&&{passive:!1,capture:!1},p=!(!l.passiveListener||!r.passiveListeners)&&{passive:!0,capture:!1};if(!d)return;const u="on"===e?"addEventListener":"removeEventListener";l.touch?(d[u](a.start,x,c),d[u](a.move,y,c),d[u](a.end,E,p)):(d[u](i.start,x,c),n[u](i.move,y,c),n[u](i.end,E,p))}function T(){const{scrollbar:e,$el:s}=t;t.params.scrollbar=F(t,t.originalParams.scrollbar,t.params.scrollbar,{el:"swiper-scrollbar"});const a=t.params.scrollbar;if(!a.el)return;let i=d(a.el);t.params.uniqueNavElements&&"string"==typeof a.el&&i.length>1&&1===s.find(a.el).length&&(i=s.find(a.el)),i.addClass(t.isHorizontal()?a.horizontalClass:a.verticalClass);let r=i.find(`.${t.params.scrollbar.dragClass}`);0===r.length&&(r=d(`<div class="${t.params.scrollbar.dragClass}"></div>`),i.append(r)),Object.assign(e,{$el:i,el:i[0],$dragEl:r,dragEl:r[0]}),a.draggable&&t.params.scrollbar.el&&t.scrollbar.el&&C("on"),i&&i[t.enabled?"removeClass":"addClass"](t.params.scrollbar.lockClass)}function $(){const e=t.params.scrollbar,s=t.scrollbar.$el;s&&s.removeClass(t.isHorizontal()?e.horizontalClass:e.verticalClass),t.params.scrollbar.el&&t.scrollbar.el&&C("off")}s({scrollbar:{el:null,dragSize:"auto",hide:!1,draggable:!1,snapOnRelease:!0,lockClass:"swiper-scrollbar-lock",dragClass:"swiper-scrollbar-drag",scrollbarDisabledClass:"swiper-scrollbar-disabled",horizontalClass:"swiper-scrollbar-horizontal",verticalClass:"swiper-scrollbar-vertical"}}),t.scrollbar={el:null,dragEl:null,$el:null,$dragEl:null},i("init",(()=>{!1===t.params.scrollbar.enabled?S():(T(),v(),g())})),i("update resize observerUpdate lock unlock",(()=>{v()})),i("setTranslate",(()=>{g()})),i("setTransition",((e,s)=>{!function(e){t.params.scrollbar.el&&t.scrollbar.el&&t.scrollbar.$dragEl.transition(e)}(s)})),i("enable disable",(()=>{const{$el:e}=t.scrollbar;e&&e[t.enabled?"removeClass":"addClass"](t.params.scrollbar.lockClass)})),i("destroy",(()=>{$()}));const S=()=>{t.$el.addClass(t.params.scrollbar.scrollbarDisabledClass),t.scrollbar.$el&&t.scrollbar.$el.addClass(t.params.scrollbar.scrollbarDisabledClass),$()};Object.assign(t.scrollbar,{enable:()=>{t.$el.removeClass(t.params.scrollbar.scrollbarDisabledClass),t.scrollbar.$el&&t.scrollbar.$el.removeClass(t.params.scrollbar.scrollbarDisabledClass),T(),v(),g()},disable:S,updateSize:v,setTranslate:g,init:T,destroy:$})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({parallax:{enabled:!1}});const i=(e,s)=>{const{rtl:a}=t,i=d(e),r=a?-1:1,n=i.attr("data-swiper-parallax")||"0";let l=i.attr("data-swiper-parallax-x"),o=i.attr("data-swiper-parallax-y");const c=i.attr("data-swiper-parallax-scale"),p=i.attr("data-swiper-parallax-opacity");if(l||o?(l=l||"0",o=o||"0"):t.isHorizontal()?(l=n,o="0"):(o=n,l="0"),l=l.indexOf("%%")>=0?parseInt(l,10)*s*r+"%%":l*s*r+"px",o=o.indexOf("%%")>=0?parseInt(o,10)*s+"%%":o*s+"px",null!=p){const e=p-(p-1)*(1-Math.abs(s));i[0].style.opacity=e}if(null==c)i.transform(`translate3d(${l}, ${o}, 0px)`);else{const e=c-(c-1)*(1-Math.abs(s));i.transform(`translate3d(${l}, ${o}, 0px) scale(${e})`)}},r=()=>{const{$el:e,slides:s,progress:a,snapGrid:r}=t;e.children("[data-swiper-parallax], [data-swiper-parallax-x], [data-swiper-parallax-y], [data-swiper-parallax-opacity], [data-swiper-parallax-scale]").each((e=>{i(e,a)})),s.each(((e,s)=>{let n=e.progress;t.params.slidesPerGroup>1&&"auto"!==t.params.slidesPerView&&(n+=Math.ceil(s/2)-a*(r.length-1)),n=Math.min(Math.max(n,-1),1),d(e).find("[data-swiper-parallax], [data-swiper-parallax-x], [data-swiper-parallax-y], [data-swiper-parallax-opacity], [data-swiper-parallax-scale]").each((e=>{i(e,n)}))}))};a("beforeInit",(()=>{t.params.parallax.enabled&&(t.params.watchSlidesProgress=!0,t.originalParams.watchSlidesProgress=!0)})),a("init",(()=>{t.params.parallax.enabled&&r()})),a("setTranslate",(()=>{t.params.parallax.enabled&&r()})),a("setTransition",((e,s)=>{t.params.parallax.enabled&&function(e){void 0===e&&(e=t.params.speed);const{$el:s}=t;s.find("[data-swiper-parallax], [data-swiper-parallax-x], [data-swiper-parallax-y], [data-swiper-parallax-opacity], [data-swiper-parallax-scale]").each((t=>{const s=d(t);let a=parseInt(s.attr("data-swiper-parallax-duration"),10)||e;0===e&&(a=0),s.transition(a)}))}(s)}))},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;const n=r();s({zoom:{enabled:!1,maxRatio:3,minRatio:1,toggle:!0,containerClass:"swiper-zoom-container",zoomedSlideClass:"swiper-slide-zoomed"}}),t.zoom={enabled:!1};let l,o,c,p=1,u=!1;const m={$slideEl:void 0,slideWidth:void 0,slideHeight:void 0,$imageEl:void 0,$imageWrapEl:void 0,maxRatio:3},f={isTouched:void 0,isMoved:void 0,currentX:void 0,currentY:void 0,minX:void 0,minY:void 0,maxX:void 0,maxY:void 0,width:void 0,height:void 0,startX:void 0,startY:void 0,touchesStart:{},touchesCurrent:{}},g={x:void 0,y:void 0,prevPositionX:void 0,prevPositionY:void 0,prevTime:void 0};let v=1;function w(e){if(e.targetTouches.length<2)return 1;const t=e.targetTouches[0].pageX,s=e.targetTouches[0].pageY,a=e.targetTouches[1].pageX,i=e.targetTouches[1].pageY;return Math.sqrt((a-t)**2+(i-s)**2)}function b(e){const s=t.support,a=t.params.zoom;if(o=!1,c=!1,!s.gestures){if("touchstart"!==e.type||"touchstart"===e.type&&e.targetTouches.length<2)return;o=!0,m.scaleStart=w(e)}m.$slideEl&&m.$slideEl.length||(m.$slideEl=d(e.target).closest(`.${t.params.slideClass}`),0===m.$slideEl.length&&(m.$slideEl=t.slides.eq(t.activeIndex)),m.$imageEl=m.$slideEl.find(`.${a.containerClass}`).eq(0).find("picture, img, svg, canvas, .swiper-zoom-target").eq(0),m.$imageWrapEl=m.$imageEl.parent(`.${a.containerClass}`),m.maxRatio=m.$imageWrapEl.attr("data-swiper-zoom")||a.maxRatio,0!==m.$imageWrapEl.length)?(m.$imageEl&&m.$imageEl.transition(0),u=!0):m.$imageEl=void 0}function x(e){const s=t.support,a=t.params.zoom,i=t.zoom;if(!s.gestures){if("touchmove"!==e.type||"touchmove"===e.type&&e.targetTouches.length<2)return;c=!0,m.scaleMove=w(e)}m.$imageEl&&0!==m.$imageEl.length?(s.gestures?i.scale=e.scale*p:i.scale=m.scaleMove/m.scaleStart*p,i.scale>m.maxRatio&&(i.scale=m.maxRatio-1+(i.scale-m.maxRatio+1)**.5),i.scale<a.minRatio&&(i.scale=a.minRatio+1-(a.minRatio-i.scale+1)**.5),m.$imageEl.transform(`translate3d(0,0,0) scale(${i.scale})`)):"gesturechange"===e.type&&b(e)}function y(e){const s=t.device,a=t.support,i=t.params.zoom,r=t.zoom;if(!a.gestures){if(!o||!c)return;if("touchend"!==e.type||"touchend"===e.type&&e.changedTouches.length<2&&!s.android)return;o=!1,c=!1}m.$imageEl&&0!==m.$imageEl.length&&(r.scale=Math.max(Math.min(r.scale,m.maxRatio),i.minRatio),m.$imageEl.transition(t.params.speed).transform(`translate3d(0,0,0) scale(${r.scale})`),p=r.scale,u=!1,1===r.scale&&(m.$slideEl=void 0))}function E(e){const s=t.zoom;if(!m.$imageEl||0===m.$imageEl.length)return;if(t.allowClick=!1,!f.isTouched||!m.$slideEl)return;f.isMoved||(f.width=m.$imageEl[0].offsetWidth,f.height=m.$imageEl[0].offsetHeight,f.startX=h(m.$imageWrapEl[0],"x")||0,f.startY=h(m.$imageWrapEl[0],"y")||0,m.slideWidth=m.$slideEl[0].offsetWidth,m.slideHeight=m.$slideEl[0].offsetHeight,m.$imageWrapEl.transition(0));const a=f.width*s.scale,i=f.height*s.scale;if(!(a<m.slideWidth&&i<m.slideHeight)){if(f.minX=Math.min(m.slideWidth/2-a/2,0),f.maxX=-f.minX,f.minY=Math.min(m.slideHeight/2-i/2,0),f.maxY=-f.minY,f.touchesCurrent.x="touchmove"===e.type?e.targetTouches[0].pageX:e.pageX,f.touchesCurrent.y="touchmove"===e.type?e.targetTouches[0].pageY:e.pageY,!f.isMoved&&!u){if(t.isHorizontal()&&(Math.floor(f.minX)===Math.floor(f.startX)&&f.touchesCurrent.x<f.touchesStart.x||Math.floor(f.maxX)===Math.floor(f.startX)&&f.touchesCurrent.x>f.touchesStart.x))return void(f.isTouched=!1);if(!t.isHorizontal()&&(Math.floor(f.minY)===Math.floor(f.startY)&&f.touchesCurrent.y<f.touchesStart.y||Math.floor(f.maxY)===Math.floor(f.startY)&&f.touchesCurrent.y>f.touchesStart.y))return void(f.isTouched=!1)}e.cancelable&&e.preventDefault(),e.stopPropagation(),f.isMoved=!0,f.currentX=f.touchesCurrent.x-f.touchesStart.x+f.startX,f.currentY=f.touchesCurrent.y-f.touchesStart.y+f.startY,f.currentX<f.minX&&(f.currentX=f.minX+1-(f.minX-f.currentX+1)**.8),f.currentX>f.maxX&&(f.currentX=f.maxX-1+(f.currentX-f.maxX+1)**.8),f.currentY<f.minY&&(f.currentY=f.minY+1-(f.minY-f.currentY+1)**.8),f.currentY>f.maxY&&(f.currentY=f.maxY-1+(f.currentY-f.maxY+1)**.8),g.prevPositionX||(g.prevPositionX=f.touchesCurrent.x),g.prevPositionY||(g.prevPositionY=f.touchesCurrent.y),g.prevTime||(g.prevTime=Date.now()),g.x=(f.touchesCurrent.x-g.prevPositionX)/(Date.now()-g.prevTime)/2,g.y=(f.touchesCurrent.y-g.prevPositionY)/(Date.now()-g.prevTime)/2,Math.abs(f.touchesCurrent.x-g.prevPositionX)<2&&(g.x=0),Math.abs(f.touchesCurrent.y-g.prevPositionY)<2&&(g.y=0),g.prevPositionX=f.touchesCurrent.x,g.prevPositionY=f.touchesCurrent.y,g.prevTime=Date.now(),m.$imageWrapEl.transform(`translate3d(${f.currentX}px, ${f.currentY}px,0)`)}}function C(){const e=t.zoom;m.$slideEl&&t.previousIndex!==t.activeIndex&&(m.$imageEl&&m.$imageEl.transform("translate3d(0,0,0) scale(1)"),m.$imageWrapEl&&m.$imageWrapEl.transform("translate3d(0,0,0)"),e.scale=1,p=1,m.$slideEl=void 0,m.$imageEl=void 0,m.$imageWrapEl=void 0)}function T(e){const s=t.zoom,a=t.params.zoom;if(m.$slideEl||(e&&e.target&&(m.$slideEl=d(e.target).closest(`.${t.params.slideClass}`)),m.$slideEl||(t.params.virtual&&t.params.virtual.enabled&&t.virtual?m.$slideEl=t.$wrapperEl.children(`.${t.params.slideActiveClass}`):m.$slideEl=t.slides.eq(t.activeIndex)),m.$imageEl=m.$slideEl.find(`.${a.containerClass}`).eq(0).find("picture, img, svg, canvas, .swiper-zoom-target").eq(0),m.$imageWrapEl=m.$imageEl.parent(`.${a.containerClass}`)),!m.$imageEl||0===m.$imageEl.length||!m.$imageWrapEl||0===m.$imageWrapEl.length)return;let i,r,l,o,c,u,h,g,v,w,b,x,y,E,C,T,$,S;t.params.cssMode&&(t.wrapperEl.style.overflow="hidden",t.wrapperEl.style.touchAction="none"),m.$slideEl.addClass(`${a.zoomedSlideClass}`),void 0===f.touchesStart.x&&e?(i="touchend"===e.type?e.changedTouches[0].pageX:e.pageX,r="touchend"===e.type?e.changedTouches[0].pageY:e.pageY):(i=f.touchesStart.x,r=f.touchesStart.y),s.scale=m.$imageWrapEl.attr("data-swiper-zoom")||a.maxRatio,p=m.$imageWrapEl.attr("data-swiper-zoom")||a.maxRatio,e?($=m.$slideEl[0].offsetWidth,S=m.$slideEl[0].offsetHeight,l=m.$slideEl.offset().left+n.scrollX,o=m.$slideEl.offset().top+n.scrollY,c=l+$/2-i,u=o+S/2-r,v=m.$imageEl[0].offsetWidth,w=m.$imageEl[0].offsetHeight,b=v*s.scale,x=w*s.scale,y=Math.min($/2-b/2,0),E=Math.min(S/2-x/2,0),C=-y,T=-E,h=c*s.scale,g=u*s.scale,h<y&&(h=y),h>C&&(h=C),g<E&&(g=E),g>T&&(g=T)):(h=0,g=0),m.$imageWrapEl.transition(300).transform(`translate3d(${h}px, ${g}px,0)`),m.$imageEl.transition(300).transform(`translate3d(0,0,0) scale(${s.scale})`)}function $(){const e=t.zoom,s=t.params.zoom;m.$slideEl||(t.params.virtual&&t.params.virtual.enabled&&t.virtual?m.$slideEl=t.$wrapperEl.children(`.${t.params.slideActiveClass}`):m.$slideEl=t.slides.eq(t.activeIndex),m.$imageEl=m.$slideEl.find(`.${s.containerClass}`).eq(0).find("picture, img, svg, canvas, .swiper-zoom-target").eq(0),m.$imageWrapEl=m.$imageEl.parent(`.${s.containerClass}`)),m.$imageEl&&0!==m.$imageEl.length&&m.$imageWrapEl&&0!==m.$imageWrapEl.length&&(t.params.cssMode&&(t.wrapperEl.style.overflow="",t.wrapperEl.style.touchAction=""),e.scale=1,p=1,m.$imageWrapEl.transition(300).transform("translate3d(0,0,0)"),m.$imageEl.transition(300).transform("translate3d(0,0,0) scale(1)"),m.$slideEl.removeClass(`${s.zoomedSlideClass}`),m.$slideEl=void 0)}function S(e){const s=t.zoom;s.scale&&1!==s.scale?$():T(e)}function M(){const e=t.support;return{passiveListener:!("touchstart"!==t.touchEvents.start||!e.passiveListener||!t.params.passiveListeners)&&{passive:!0,capture:!1},activeListenerWithCapture:!e.passiveListener||{passive:!1,capture:!0}}}function P(){return`.${t.params.slideClass}`}function k(e){const{passiveListener:s}=M(),a=P();t.$wrapperEl[e]("gesturestart",a,b,s),t.$wrapperEl[e]("gesturechange",a,x,s),t.$wrapperEl[e]("gestureend",a,y,s)}function z(){l||(l=!0,k("on"))}function L(){l&&(l=!1,k("off"))}function O(){const e=t.zoom;if(e.enabled)return;e.enabled=!0;const s=t.support,{passiveListener:a,activeListenerWithCapture:i}=M(),r=P();s.gestures?(t.$wrapperEl.on(t.touchEvents.start,z,a),t.$wrapperEl.on(t.touchEvents.end,L,a)):"touchstart"===t.touchEvents.start&&(t.$wrapperEl.on(t.touchEvents.start,r,b,a),t.$wrapperEl.on(t.touchEvents.move,r,x,i),t.$wrapperEl.on(t.touchEvents.end,r,y,a),t.touchEvents.cancel&&t.$wrapperEl.on(t.touchEvents.cancel,r,y,a)),t.$wrapperEl.on(t.touchEvents.move,`.${t.params.zoom.containerClass}`,E,i)}function I(){const e=t.zoom;if(!e.enabled)return;const s=t.support;e.enabled=!1;const{passiveListener:a,activeListenerWithCapture:i}=M(),r=P();s.gestures?(t.$wrapperEl.off(t.touchEvents.start,z,a),t.$wrapperEl.off(t.touchEvents.end,L,a)):"touchstart"===t.touchEvents.start&&(t.$wrapperEl.off(t.touchEvents.start,r,b,a),t.$wrapperEl.off(t.touchEvents.move,r,x,i),t.$wrapperEl.off(t.touchEvents.end,r,y,a),t.touchEvents.cancel&&t.$wrapperEl.off(t.touchEvents.cancel,r,y,a)),t.$wrapperEl.off(t.touchEvents.move,`.${t.params.zoom.containerClass}`,E,i)}Object.defineProperty(t.zoom,"scale",{get:()=>v,set(e){if(v!==e){const t=m.$imageEl?m.$imageEl[0]:void 0,s=m.$slideEl?m.$slideEl[0]:void 0;i("zoomChange",e,t,s)}v=e}}),a("init",(()=>{t.params.zoom.enabled&&O()})),a("destroy",(()=>{I()})),a("touchStart",((e,s)=>{t.zoom.enabled&&function(e){const s=t.device;m.$imageEl&&0!==m.$imageEl.length&&(f.isTouched||(s.android&&e.cancelable&&e.preventDefault(),f.isTouched=!0,f.touchesStart.x="touchstart"===e.type?e.targetTouches[0].pageX:e.pageX,f.touchesStart.y="touchstart"===e.type?e.targetTouches[0].pageY:e.pageY))}(s)})),a("touchEnd",((e,s)=>{t.zoom.enabled&&function(){const e=t.zoom;if(!m.$imageEl||0===m.$imageEl.length)return;if(!f.isTouched||!f.isMoved)return f.isTouched=!1,void(f.isMoved=!1);f.isTouched=!1,f.isMoved=!1;let s=300,a=300;const i=g.x*s,r=f.currentX+i,n=g.y*a,l=f.currentY+n;0!==g.x&&(s=Math.abs((r-f.currentX)/g.x)),0!==g.y&&(a=Math.abs((l-f.currentY)/g.y));const o=Math.max(s,a);f.currentX=r,f.currentY=l;const d=f.width*e.scale,c=f.height*e.scale;f.minX=Math.min(m.slideWidth/2-d/2,0),f.maxX=-f.minX,f.minY=Math.min(m.slideHeight/2-c/2,0),f.maxY=-f.minY,f.currentX=Math.max(Math.min(f.currentX,f.maxX),f.minX),f.currentY=Math.max(Math.min(f.currentY,f.maxY),f.minY),m.$imageWrapEl.transition(o).transform(`translate3d(${f.currentX}px, ${f.currentY}px,0)`)}()})),a("doubleTap",((e,s)=>{!t.animating&&t.params.zoom.enabled&&t.zoom.enabled&&t.params.zoom.toggle&&S(s)})),a("transitionEnd",(()=>{t.zoom.enabled&&t.params.zoom.enabled&&C()})),a("slideChange",(()=>{t.zoom.enabled&&t.params.zoom.enabled&&t.params.cssMode&&C()})),Object.assign(t.zoom,{enable:O,disable:I,in:T,out:$,toggle:S})},function(e){let{swiper:t,extendParams:s,on:a,emit:i}=e;s({lazy:{checkInView:!1,enabled:!1,loadPrevNext:!1,loadPrevNextAmount:1,loadOnTransitionStart:!1,scrollingElement:"",elementClass:"swiper-lazy",loadingClass:"swiper-lazy-loading",loadedClass:"swiper-lazy-loaded",preloaderClass:"swiper-lazy-preloader"}}),t.lazy={};let n=!1,l=!1;function o(e,s){void 0===s&&(s=!0);const a=t.params.lazy;if(void 0===e)return;if(0===t.slides.length)return;const r=t.virtual&&t.params.virtual.enabled?t.$wrapperEl.children(`.${t.params.slideClass}[data-swiper-slide-index="${e}"]`):t.slides.eq(e),n=r.find(`.${a.elementClass}:not(.${a.loadedClass}):not(.${a.loadingClass})`);!r.hasClass(a.elementClass)||r.hasClass(a.loadedClass)||r.hasClass(a.loadingClass)||n.push(r[0]),0!==n.length&&n.each((e=>{const n=d(e);n.addClass(a.loadingClass);const l=n.attr("data-background"),c=n.attr("data-src"),p=n.attr("data-srcset"),u=n.attr("data-sizes"),h=n.parent("picture");t.loadImage(n[0],c||l,p,u,!1,(()=>{if(null!=t&&t&&(!t||t.params)&&!t.destroyed){if(l?(n.css("background-image",`url("${l}")`),n.removeAttr("data-background")):(p&&(n.attr("srcset",p),n.removeAttr("data-srcset")),u&&(n.attr("sizes",u),n.removeAttr("data-sizes")),h.length&&h.children("source").each((e=>{const t=d(e);t.attr("data-srcset")&&(t.attr("srcset",t.attr("data-srcset")),t.removeAttr("data-srcset"))})),c&&(n.attr("src",c),n.removeAttr("data-src"))),n.addClass(a.loadedClass).removeClass(a.loadingClass),r.find(`.${a.preloaderClass}`).remove(),t.params.loop&&s){const e=r.attr("data-swiper-slide-index");if(r.hasClass(t.params.slideDuplicateClass)){o(t.$wrapperEl.children(`[data-swiper-slide-index="${e}"]:not(.${t.params.slideDuplicateClass})`).index(),!1)}else{o(t.$wrapperEl.children(`.${t.params.slideDuplicateClass}[data-swiper-slide-index="${e}"]`).index(),!1)}}i("lazyImageReady",r[0],n[0]),t.params.autoHeight&&t.updateAutoHeight()}})),i("lazyImageLoad",r[0],n[0])}))}function c(){const{$wrapperEl:e,params:s,slides:a,activeIndex:i}=t,r=t.virtual&&s.virtual.enabled,n=s.lazy;let c=s.slidesPerView;function p(t){if(r){if(e.children(`.${s.slideClass}[data-swiper-slide-index="${t}"]`).length)return!0}else if(a[t])return!0;return!1}function u(e){return r?d(e).attr("data-swiper-slide-index"):d(e).index()}if("auto"===c&&(c=0),l||(l=!0),t.params.watchSlidesProgress)e.children(`.${s.slideVisibleClass}`).each((e=>{o(r?d(e).attr("data-swiper-slide-index"):d(e).index())}));else if(c>1)for(let e=i;e<i+c;e+=1)p(e)&&o(e);else o(i);if(n.loadPrevNext)if(c>1||n.loadPrevNextAmount&&n.loadPrevNextAmount>1){const e=n.loadPrevNextAmount,t=Math.ceil(c),s=Math.min(i+t+Math.max(e,t),a.length),r=Math.max(i-Math.max(t,e),0);for(let e=i+t;e<s;e+=1)p(e)&&o(e);for(let e=r;e<i;e+=1)p(e)&&o(e)}else{const t=e.children(`.${s.slideNextClass}`);t.length>0&&o(u(t));const a=e.children(`.${s.slidePrevClass}`);a.length>0&&o(u(a))}}function p(){const e=r();if(!t||t.destroyed)return;const s=t.params.lazy.scrollingElement?d(t.params.lazy.scrollingElement):d(e),a=s[0]===e,i=a?e.innerWidth:s[0].offsetWidth,l=a?e.innerHeight:s[0].offsetHeight,o=t.$el.offset(),{rtlTranslate:u}=t;let h=!1;u&&(o.left-=t.$el[0].scrollLeft);const m=[[o.left,o.top],[o.left+t.width,o.top],[o.left,o.top+t.height],[o.left+t.width,o.top+t.height]];for(let e=0;e<m.length;e+=1){const t=m[e];if(t[0]>=0&&t[0]<=i&&t[1]>=0&&t[1]<=l){if(0===t[0]&&0===t[1])continue;h=!0}}const f=!("touchstart"!==t.touchEvents.start||!t.support.passiveListener||!t.params.passiveListeners)&&{passive:!0,capture:!1};h?(c(),s.off("scroll",p,f)):n||(n=!0,s.on("scroll",p,f))}a("beforeInit",(()=>{t.params.lazy.enabled&&t.params.preloadImages&&(t.params.preloadImages=!1)})),a("init",(()=>{t.params.lazy.enabled&&(t.params.lazy.checkInView?p():c())})),a("scroll",(()=>{t.params.freeMode&&t.params.freeMode.enabled&&!t.params.freeMode.sticky&&c()})),a("scrollbarDragMove resize _freeModeNoMomentumRelease",(()=>{t.params.lazy.enabled&&(t.params.lazy.checkInView?p():c())})),a("transitionStart",(()=>{t.params.lazy.enabled&&(t.params.lazy.loadOnTransitionStart||!t.params.lazy.loadOnTransitionStart&&!l)&&(t.params.lazy.checkInView?p():c())})),a("transitionEnd",(()=>{t.params.lazy.enabled&&!t.params.lazy.loadOnTransitionStart&&(t.params.lazy.checkInView?p():c())})),a("slideChange",(()=>{const{lazy:e,cssMode:s,watchSlidesProgress:a,touchReleaseOnEdges:i,resistanceRatio:r}=t.params;e.enabled&&(s||a&&(i||0===r))&&c()})),a("destroy",(()=>{t.$el&&t.$el.find(`.${t.params.lazy.loadingClass}`).removeClass(t.params.lazy.loadingClass)})),Object.assign(t.lazy,{load:c,loadInSlide:o})},function(e){let{swiper:t,extendParams:s,on:a}=e;function i(e,t){const s=function(){let e,t,s;return(a,i)=>{for(t=-1,e=a.length;e-t>1;)s=e+t>>1,a[s]<=i?t=s:e=s;return e}}();let a,i;return this.x=e,this.y=t,this.lastIndex=e.length-1,this.interpolate=function(e){return e?(i=s(this.x,e),a=i-1,(e-this.x[a])*(this.y[i]-this.y[a])/(this.x[i]-this.x[a])+this.y[a]):0},this}function r(){t.controller.control&&t.controller.spline&&(t.controller.spline=void 0,delete t.controller.spline)}s({controller:{control:void 0,inverse:!1,by:"slide"}}),t.controller={control:void 0},a("beforeInit",(()=>{t.controller.control=t.params.controller.control})),a("update",(()=>{r()})),a("resize",(()=>{r()})),a("observerUpdate",(()=>{r()})),a("setTranslate",((e,s,a)=>{t.controller.control&&t.controller.setTranslate(s,a)})),a("setTransition",((e,s,a)=>{t.controller.control&&t.controller.setTransition(s,a)})),Object.assign(t.controller,{setTranslate:function(e,s){const a=t.controller.control;let r,n;const l=t.constructor;function o(e){const s=t.rtlTranslate?-t.translate:t.translate;"slide"===t.params.controller.by&&(!function(e){t.controller.spline||(t.controller.spline=t.params.loop?new i(t.slidesGrid,e.slidesGrid):new i(t.snapGrid,e.snapGrid))}(e),n=-t.controller.spline.interpolate(-s)),n&&"container"!==t.params.controller.by||(r=(e.maxTranslate()-e.minTranslate())/(t.maxTranslate()-t.minTranslate()),n=(s-t.minTranslate())*r+e.minTranslate()),t.params.controller.inverse&&(n=e.maxTranslate()-n),e.updateProgress(n),e.setTranslate(n,t),e.updateActiveIndex(),e.updateSlidesClasses()}if(Array.isArray(a))for(let e=0;e<a.length;e+=1)a[e]!==s&&a[e]instanceof l&&o(a[e]);else a instanceof l&&s!==a&&o(a)},setTransition:function(e,s){const a=t.constructor,i=t.controller.control;let r;function n(s){s.setTransition(e,t),0!==e&&(s.transitionStart(),s.params.autoHeight&&p((()=>{s.updateAutoHeight()})),s.$wrapperEl.transitionEnd((()=>{i&&(s.params.loop&&"slide"===t.params.controller.by&&s.loopFix(),s.transitionEnd())})))}if(Array.isArray(i))for(r=0;r<i.length;r+=1)i[r]!==s&&i[r]instanceof a&&n(i[r]);else i instanceof a&&s!==i&&n(i)}})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({a11y:{enabled:!0,notificationClass:"swiper-notification",prevSlideMessage:"Previous slide",nextSlideMessage:"Next slide",firstSlideMessage:"This is the first slide",lastSlideMessage:"This is the last slide",paginationBulletMessage:"Go to slide {{index}}",slideLabelMessage:"{{index}} / {{slidesLength}}",containerMessage:null,containerRoleDescriptionMessage:null,itemRoleDescriptionMessage:null,slideRole:"group",id:null}});let i=null;function r(e){const t=i;0!==t.length&&(t.html(""),t.html(e))}function n(e){e.attr("tabIndex","0")}function l(e){e.attr("tabIndex","-1")}function o(e,t){e.attr("role",t)}function c(e,t){e.attr("aria-roledescription",t)}function p(e,t){e.attr("aria-label",t)}function u(e){e.attr("aria-disabled",!0)}function h(e){e.attr("aria-disabled",!1)}function m(e){if(13!==e.keyCode&&32!==e.keyCode)return;const s=t.params.a11y,a=d(e.target);t.navigation&&t.navigation.$nextEl&&a.is(t.navigation.$nextEl)&&(t.isEnd&&!t.params.loop||t.slideNext(),t.isEnd?r(s.lastSlideMessage):r(s.nextSlideMessage)),t.navigation&&t.navigation.$prevEl&&a.is(t.navigation.$prevEl)&&(t.isBeginning&&!t.params.loop||t.slidePrev(),t.isBeginning?r(s.firstSlideMessage):r(s.prevSlideMessage)),t.pagination&&a.is(U(t.params.pagination.bulletClass))&&a[0].click()}function f(){return t.pagination&&t.pagination.bullets&&t.pagination.bullets.length}function g(){return f()&&t.params.pagination.clickable}const v=(e,t,s)=>{n(e),"BUTTON"!==e[0].tagName&&(o(e,"button"),e.on("keydown",m)),p(e,s),function(e,t){e.attr("aria-controls",t)}(e,t)},w=e=>{const s=e.target.closest(`.${t.params.slideClass}`);if(!s||!t.slides.includes(s))return;const a=t.slides.indexOf(s)===t.activeIndex,i=t.params.watchSlidesProgress&&t.visibleSlides&&t.visibleSlides.includes(s);a||i||t.slideTo(t.slides.indexOf(s),0)},b=()=>{const e=t.params.a11y;e.itemRoleDescriptionMessage&&c(d(t.slides),e.itemRoleDescriptionMessage),o(d(t.slides),e.slideRole);const s=t.params.loop?t.slides.filter((e=>!e.classList.contains(t.params.slideDuplicateClass))).length:t.slides.length;e.slideLabelMessage&&t.slides.each(((a,i)=>{const r=d(a),n=t.params.loop?parseInt(r.attr("data-swiper-slide-index"),10):i;p(r,e.slideLabelMessage.replace(/\{\{index\}\}/,n+1).replace(/\{\{slidesLength\}\}/,s))}))},x=()=>{const e=t.params.a11y;t.$el.append(i);const s=t.$el;e.containerRoleDescriptionMessage&&c(s,e.containerRoleDescriptionMessage),e.containerMessage&&p(s,e.containerMessage);const a=t.$wrapperEl,r=e.id||a.attr("id")||`swiper-wrapper-${n=16,void 0===n&&(n=16),"x".repeat(n).replace(/x/g,(()=>Math.round(16*Math.random()).toString(16)))}`;var n;const l=t.params.autoplay&&t.params.autoplay.enabled?"off":"polite";var o;let d,u;o=r,a.attr("id",o),function(e,t){e.attr("aria-live",t)}(a,l),b(),t.navigation&&t.navigation.$nextEl&&(d=t.navigation.$nextEl),t.navigation&&t.navigation.$prevEl&&(u=t.navigation.$prevEl),d&&d.length&&v(d,r,e.nextSlideMessage),u&&u.length&&v(u,r,e.prevSlideMessage),g()&&t.pagination.$el.on("keydown",U(t.params.pagination.bulletClass),m),t.$el.on("focus",w,!0)};a("beforeInit",(()=>{i=d(`<span class="${t.params.a11y.notificationClass}" aria-live="assertive" aria-atomic="true"></span>`)})),a("afterInit",(()=>{t.params.a11y.enabled&&x()})),a("slidesLengthChange snapGridLengthChange slidesGridLengthChange",(()=>{t.params.a11y.enabled&&b()})),a("fromEdge toEdge afterInit lock unlock",(()=>{t.params.a11y.enabled&&function(){if(t.params.loop||t.params.rewind||!t.navigation)return;const{$nextEl:e,$prevEl:s}=t.navigation;s&&s.length>0&&(t.isBeginning?(u(s),l(s)):(h(s),n(s))),e&&e.length>0&&(t.isEnd?(u(e),l(e)):(h(e),n(e)))}()})),a("paginationUpdate",(()=>{t.params.a11y.enabled&&function(){const e=t.params.a11y;f()&&t.pagination.bullets.each((s=>{const a=d(s);t.params.pagination.clickable&&(n(a),t.params.pagination.renderBullet||(o(a,"button"),p(a,e.paginationBulletMessage.replace(/\{\{index\}\}/,a.index()+1)))),a.is(`.${t.params.pagination.bulletActiveClass}`)?a.attr("aria-current","true"):a.removeAttr("aria-current")}))}()})),a("destroy",(()=>{t.params.a11y.enabled&&function(){let e,s;i&&i.length>0&&i.remove(),t.navigation&&t.navigation.$nextEl&&(e=t.navigation.$nextEl),t.navigation&&t.navigation.$prevEl&&(s=t.navigation.$prevEl),e&&e.off("keydown",m),s&&s.off("keydown",m),g()&&t.pagination.$el.off("keydown",U(t.params.pagination.bulletClass),m),t.$el.off("focus",w,!0)}()}))},function(e){let{swiper:t,extendParams:s,on:a}=e;s({history:{enabled:!1,root:"",replaceState:!1,key:"slides",keepQuery:!1}});let i=!1,n={};const l=e=>e.toString().replace(/\s+/g,"-").replace(/[^\w-]+/g,"").replace(/--+/g,"-").replace(/^-+/,"").replace(/-+$/,""),o=e=>{const t=r();let s;s=e?new URL(e):t.location;const a=s.pathname.slice(1).split("/").filter((e=>""!==e)),i=a.length;return{key:a[i-2],value:a[i-1]}},d=(e,s)=>{const a=r();if(!i||!t.params.history.enabled)return;let n;n=t.params.url?new URL(t.params.url):a.location;const o=t.slides.eq(s);let d=l(o.attr("data-history"));if(t.params.history.root.length>0){let s=t.params.history.root;"/"===s[s.length-1]&&(s=s.slice(0,s.length-1)),d=`${s}/${e}/${d}`}else n.pathname.includes(e)||(d=`${e}/${d}`);t.params.history.keepQuery&&(d+=n.search);const c=a.history.state;c&&c.value===d||(t.params.history.replaceState?a.history.replaceState({value:d},null,d):a.history.pushState({value:d},null,d))},c=(e,s,a)=>{if(s)for(let i=0,r=t.slides.length;i<r;i+=1){const r=t.slides.eq(i);if(l(r.attr("data-history"))===s&&!r.hasClass(t.params.slideDuplicateClass)){const s=r.index();t.slideTo(s,e,a)}}else t.slideTo(0,e,a)},p=()=>{n=o(t.params.url),c(t.params.speed,n.value,!1)};a("init",(()=>{t.params.history.enabled&&(()=>{const e=r();if(t.params.history){if(!e.history||!e.history.pushState)return t.params.history.enabled=!1,void(t.params.hashNavigation.enabled=!0);i=!0,n=o(t.params.url),(n.key||n.value)&&(c(0,n.value,t.params.runCallbacksOnInit),t.params.history.replaceState||e.addEventListener("popstate",p))}})()})),a("destroy",(()=>{t.params.history.enabled&&(()=>{const e=r();t.params.history.replaceState||e.removeEventListener("popstate",p)})()})),a("transitionEnd _freeModeNoMomentumRelease",(()=>{i&&d(t.params.history.key,t.activeIndex)})),a("slideChange",(()=>{i&&t.params.cssMode&&d(t.params.history.key,t.activeIndex)}))},function(e){let{swiper:t,extendParams:s,emit:i,on:n}=e,l=!1;const o=a(),c=r();s({hashNavigation:{enabled:!1,replaceState:!1,watchState:!1}});const p=()=>{i("hashChange");const e=o.location.hash.replace("#","");if(e!==t.slides.eq(t.activeIndex).attr("data-hash")){const s=t.$wrapperEl.children(`.${t.params.slideClass}[data-hash="${e}"]`).index();if(void 0===s)return;t.slideTo(s)}},u=()=>{if(l&&t.params.hashNavigation.enabled)if(t.params.hashNavigation.replaceState&&c.history&&c.history.replaceState)c.history.replaceState(null,null,`#${t.slides.eq(t.activeIndex).attr("data-hash")}`||""),i("hashSet");else{const e=t.slides.eq(t.activeIndex),s=e.attr("data-hash")||e.attr("data-history");o.location.hash=s||"",i("hashSet")}};n("init",(()=>{t.params.hashNavigation.enabled&&(()=>{if(!t.params.hashNavigation.enabled||t.params.history&&t.params.history.enabled)return;l=!0;const e=o.location.hash.replace("#","");if(e){const s=0;for(let a=0,i=t.slides.length;a<i;a+=1){const i=t.slides.eq(a);if((i.attr("data-hash")||i.attr("data-history"))===e&&!i.hasClass(t.params.slideDuplicateClass)){const e=i.index();t.slideTo(e,s,t.params.runCallbacksOnInit,!0)}}}t.params.hashNavigation.watchState&&d(c).on("hashchange",p)})()})),n("destroy",(()=>{t.params.hashNavigation.enabled&&t.params.hashNavigation.watchState&&d(c).off("hashchange",p)})),n("transitionEnd _freeModeNoMomentumRelease",(()=>{l&&u()})),n("slideChange",(()=>{l&&t.params.cssMode&&u()}))},function(e){let t,{swiper:s,extendParams:i,on:r,emit:n}=e;function l(){const e=s.slides.eq(s.activeIndex);let a=s.params.autoplay.delay;e.attr("data-swiper-autoplay")&&(a=e.attr("data-swiper-autoplay")||s.params.autoplay.delay),clearTimeout(t),t=p((()=>{let e;s.params.autoplay.reverseDirection?s.params.loop?(s.loopFix(),e=s.slidePrev(s.params.speed,!0,!0),n("autoplay")):s.isBeginning?s.params.autoplay.stopOnLastSlide?d():(e=s.slideTo(s.slides.length-1,s.params.speed,!0,!0),n("autoplay")):(e=s.slidePrev(s.params.speed,!0,!0),n("autoplay")):s.params.loop?(s.loopFix(),e=s.slideNext(s.params.speed,!0,!0),n("autoplay")):s.isEnd?s.params.autoplay.stopOnLastSlide?d():(e=s.slideTo(0,s.params.speed,!0,!0),n("autoplay")):(e=s.slideNext(s.params.speed,!0,!0),n("autoplay")),(s.params.cssMode&&s.autoplay.running||!1===e)&&l()}),a)}function o(){return void 0===t&&(!s.autoplay.running&&(s.autoplay.running=!0,n("autoplayStart"),l(),!0))}function d(){return!!s.autoplay.running&&(void 0!==t&&(t&&(clearTimeout(t),t=void 0),s.autoplay.running=!1,n("autoplayStop"),!0))}function c(e){s.autoplay.running&&(s.autoplay.paused||(t&&clearTimeout(t),s.autoplay.paused=!0,0!==e&&s.params.autoplay.waitForTransition?["transitionend","webkitTransitionEnd"].forEach((e=>{s.$wrapperEl[0].addEventListener(e,h)})):(s.autoplay.paused=!1,l())))}function u(){const e=a();"hidden"===e.visibilityState&&s.autoplay.running&&c(),"visible"===e.visibilityState&&s.autoplay.paused&&(l(),s.autoplay.paused=!1)}function h(e){s&&!s.destroyed&&s.$wrapperEl&&e.target===s.$wrapperEl[0]&&(["transitionend","webkitTransitionEnd"].forEach((e=>{s.$wrapperEl[0].removeEventListener(e,h)})),s.autoplay.paused=!1,s.autoplay.running?l():d())}function m(){s.params.autoplay.disableOnInteraction?d():(n("autoplayPause"),c()),["transitionend","webkitTransitionEnd"].forEach((e=>{s.$wrapperEl[0].removeEventListener(e,h)}))}function f(){s.params.autoplay.disableOnInteraction||(s.autoplay.paused=!1,n("autoplayResume"),l())}s.autoplay={running:!1,paused:!1},i({autoplay:{enabled:!1,delay:3e3,waitForTransition:!0,disableOnInteraction:!0,stopOnLastSlide:!1,reverseDirection:!1,pauseOnMouseEnter:!1}}),r("init",(()=>{if(s.params.autoplay.enabled){o();a().addEventListener("visibilitychange",u),s.params.autoplay.pauseOnMouseEnter&&(s.$el.on("mouseenter",m),s.$el.on("mouseleave",f))}})),r("beforeTransitionStart",((e,t,a)=>{s.autoplay.running&&(a||!s.params.autoplay.disableOnInteraction?s.autoplay.pause(t):d())})),r("sliderFirstMove",(()=>{s.autoplay.running&&(s.params.autoplay.disableOnInteraction?d():c())})),r("touchEnd",(()=>{s.params.cssMode&&s.autoplay.paused&&!s.params.autoplay.disableOnInteraction&&l()})),r("destroy",(()=>{s.$el.off("mouseenter",m),s.$el.off("mouseleave",f),s.autoplay.running&&d();a().removeEventListener("visibilitychange",u)})),Object.assign(s.autoplay,{pause:c,run:l,start:o,stop:d})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({thumbs:{swiper:null,multipleActiveThumbs:!0,autoScrollOffset:0,slideThumbActiveClass:"swiper-slide-thumb-active",thumbsContainerClass:"swiper-thumbs"}});let i=!1,r=!1;function n(){const e=t.thumbs.swiper;if(!e||e.destroyed)return;const s=e.clickedIndex,a=e.clickedSlide;if(a&&d(a).hasClass(t.params.thumbs.slideThumbActiveClass))return;if(null==s)return;let i;if(i=e.params.loop?parseInt(d(e.clickedSlide).attr("data-swiper-slide-index"),10):s,t.params.loop){let e=t.activeIndex;t.slides.eq(e).hasClass(t.params.slideDuplicateClass)&&(t.loopFix(),t._clientLeft=t.$wrapperEl[0].clientLeft,e=t.activeIndex);const s=t.slides.eq(e).prevAll(`[data-swiper-slide-index="${i}"]`).eq(0).index(),a=t.slides.eq(e).nextAll(`[data-swiper-slide-index="${i}"]`).eq(0).index();i=void 0===s?a:void 0===a?s:a-e<e-s?a:s}t.slideTo(i)}function l(){const{thumbs:e}=t.params;if(i)return!1;i=!0;const s=t.constructor;if(e.swiper instanceof s)t.thumbs.swiper=e.swiper,Object.assign(t.thumbs.swiper.originalParams,{watchSlidesProgress:!0,slideToClickedSlide:!1}),Object.assign(t.thumbs.swiper.params,{watchSlidesProgress:!0,slideToClickedSlide:!1});else if(m(e.swiper)){const a=Object.assign({},e.swiper);Object.assign(a,{watchSlidesProgress:!0,slideToClickedSlide:!1}),t.thumbs.swiper=new s(a),r=!0}return t.thumbs.swiper.$el.addClass(t.params.thumbs.thumbsContainerClass),t.thumbs.swiper.on("tap",n),!0}function o(e){const s=t.thumbs.swiper;if(!s||s.destroyed)return;const a="auto"===s.params.slidesPerView?s.slidesPerViewDynamic():s.params.slidesPerView,i=t.params.thumbs.autoScrollOffset,r=i&&!s.params.loop;if(t.realIndex!==s.realIndex||r){let n,l,o=s.activeIndex;if(s.params.loop){s.slides.eq(o).hasClass(s.params.slideDuplicateClass)&&(s.loopFix(),s._clientLeft=s.$wrapperEl[0].clientLeft,o=s.activeIndex);const e=s.slides.eq(o).prevAll(`[data-swiper-slide-index="${t.realIndex}"]`).eq(0).index(),a=s.slides.eq(o).nextAll(`[data-swiper-slide-index="${t.realIndex}"]`).eq(0).index();n=void 0===e?a:void 0===a?e:a-o==o-e?s.params.slidesPerGroup>1?a:o:a-o<o-e?a:e,l=t.activeIndex>t.previousIndex?"next":"prev"}else n=t.realIndex,l=n>t.previousIndex?"next":"prev";r&&(n+="next"===l?i:-1*i),s.visibleSlidesIndexes&&s.visibleSlidesIndexes.indexOf(n)<0&&(s.params.centeredSlides?n=n>o?n-Math.floor(a/2)+1:n+Math.floor(a/2)-1:n>o&&s.params.slidesPerGroup,s.slideTo(n,e?0:void 0))}let n=1;const l=t.params.thumbs.slideThumbActiveClass;if(t.params.slidesPerView>1&&!t.params.centeredSlides&&(n=t.params.slidesPerView),t.params.thumbs.multipleActiveThumbs||(n=1),n=Math.floor(n),s.slides.removeClass(l),s.params.loop||s.params.virtual&&s.params.virtual.enabled)for(let e=0;e<n;e+=1)s.$wrapperEl.children(`[data-swiper-slide-index="${t.realIndex+e}"]`).addClass(l);else for(let e=0;e<n;e+=1)s.slides.eq(t.realIndex+e).addClass(l)}t.thumbs={swiper:null},a("beforeInit",(()=>{const{thumbs:e}=t.params;e&&e.swiper&&(l(),o(!0))})),a("slideChange update resize observerUpdate",(()=>{o()})),a("setTransition",((e,s)=>{const a=t.thumbs.swiper;a&&!a.destroyed&&a.setTransition(s)})),a("beforeDestroy",(()=>{const e=t.thumbs.swiper;e&&!e.destroyed&&r&&e.destroy()})),Object.assign(t.thumbs,{init:l,update:o})},function(e){let{swiper:t,extendParams:s,emit:a,once:i}=e;s({freeMode:{enabled:!1,momentum:!0,momentumRatio:1,momentumBounce:!0,momentumBounceRatio:1,momentumVelocityRatio:1,sticky:!1,minimumVelocity:.02}}),Object.assign(t,{freeMode:{onTouchStart:function(){const e=t.getTranslate();t.setTranslate(e),t.setTransition(0),t.touchEventsData.velocities.length=0,t.freeMode.onTouchEnd({currentPos:t.rtl?t.translate:-t.translate})},onTouchMove:function(){const{touchEventsData:e,touches:s}=t;0===e.velocities.length&&e.velocities.push({position:s[t.isHorizontal()?"startX":"startY"],time:e.touchStartTime}),e.velocities.push({position:s[t.isHorizontal()?"currentX":"currentY"],time:u()})},onTouchEnd:function(e){let{currentPos:s}=e;const{params:r,$wrapperEl:n,rtlTranslate:l,snapGrid:o,touchEventsData:d}=t,c=u()-d.touchStartTime;if(s<-t.minTranslate())t.slideTo(t.activeIndex);else if(s>-t.maxTranslate())t.slides.length<o.length?t.slideTo(o.length-1):t.slideTo(t.slides.length-1);else{if(r.freeMode.momentum){if(d.velocities.length>1){const e=d.velocities.pop(),s=d.velocities.pop(),a=e.position-s.position,i=e.time-s.time;t.velocity=a/i,t.velocity/=2,Math.abs(t.velocity)<r.freeMode.minimumVelocity&&(t.velocity=0),(i>150||u()-e.time>300)&&(t.velocity=0)}else t.velocity=0;t.velocity*=r.freeMode.momentumVelocityRatio,d.velocities.length=0;let e=1e3*r.freeMode.momentumRatio;const s=t.velocity*e;let c=t.translate+s;l&&(c=-c);let p,h=!1;const m=20*Math.abs(t.velocity)*r.freeMode.momentumBounceRatio;let f;if(c<t.maxTranslate())r.freeMode.momentumBounce?(c+t.maxTranslate()<-m&&(c=t.maxTranslate()-m),p=t.maxTranslate(),h=!0,d.allowMomentumBounce=!0):c=t.maxTranslate(),r.loop&&r.centeredSlides&&(f=!0);else if(c>t.minTranslate())r.freeMode.momentumBounce?(c-t.minTranslate()>m&&(c=t.minTranslate()+m),p=t.minTranslate(),h=!0,d.allowMomentumBounce=!0):c=t.minTranslate(),r.loop&&r.centeredSlides&&(f=!0);else if(r.freeMode.sticky){let e;for(let t=0;t<o.length;t+=1)if(o[t]>-c){e=t;break}c=Math.abs(o[e]-c)<Math.abs(o[e-1]-c)||"next"===t.swipeDirection?o[e]:o[e-1],c=-c}if(f&&i("transitionEnd",(()=>{t.loopFix()})),0!==t.velocity){if(e=l?Math.abs((-c-t.translate)/t.velocity):Math.abs((c-t.translate)/t.velocity),r.freeMode.sticky){const s=Math.abs((l?-c:c)-t.translate),a=t.slidesSizesGrid[t.activeIndex];e=s<a?r.speed:s<2*a?1.5*r.speed:2.5*r.speed}}else if(r.freeMode.sticky)return void t.slideToClosest();r.freeMode.momentumBounce&&h?(t.updateProgress(p),t.setTransition(e),t.setTranslate(c),t.transitionStart(!0,t.swipeDirection),t.animating=!0,n.transitionEnd((()=>{t&&!t.destroyed&&d.allowMomentumBounce&&(a("momentumBounce"),t.setTransition(r.speed),setTimeout((()=>{t.setTranslate(p),n.transitionEnd((()=>{t&&!t.destroyed&&t.transitionEnd()}))}),0))}))):t.velocity?(a("_freeModeNoMomentumRelease"),t.updateProgress(c),t.setTransition(e),t.setTranslate(c),t.transitionStart(!0,t.swipeDirection),t.animating||(t.animating=!0,n.transitionEnd((()=>{t&&!t.destroyed&&t.transitionEnd()})))):t.updateProgress(c),t.updateActiveIndex(),t.updateSlidesClasses()}else{if(r.freeMode.sticky)return void t.slideToClosest();r.freeMode&&a("_freeModeNoMomentumRelease")}(!r.freeMode.momentum||c>=r.longSwipesMs)&&(t.updateProgress(),t.updateActiveIndex(),t.updateSlidesClasses())}}}})},function(e){let t,s,a,{swiper:i,extendParams:r}=e;r({grid:{rows:1,fill:"column"}}),i.grid={initSlides:e=>{const{slidesPerView:r}=i.params,{rows:n,fill:l}=i.params.grid;s=t/n,a=Math.floor(e/n),t=Math.floor(e/n)===e/n?e:Math.ceil(e/n)*n,"auto"!==r&&"row"===l&&(t=Math.max(t,r*n))},updateSlide:(e,r,n,l)=>{const{slidesPerGroup:o,spaceBetween:d}=i.params,{rows:c,fill:p}=i.params.grid;let u,h,m;if("row"===p&&o>1){const s=Math.floor(e/(o*c)),a=e-c*o*s,i=0===s?o:Math.min(Math.ceil((n-s*c*o)/c),o);m=Math.floor(a/i),h=a-m*i+s*o,u=h+m*t/c,r.css({"-webkit-order":u,order:u})}else"column"===p?(h=Math.floor(e/c),m=e-h*c,(h>a||h===a&&m===c-1)&&(m+=1,m>=c&&(m=0,h+=1))):(m=Math.floor(e/s),h=e-m*s);r.css(l("margin-top"),0!==m?d&&`${d}px`:"")},updateWrapperSize:(e,s,a)=>{const{spaceBetween:r,centeredSlides:n,roundLengths:l}=i.params,{rows:o}=i.params.grid;if(i.virtualSize=(e+r)*t,i.virtualSize=Math.ceil(i.virtualSize/o)-r,i.$wrapperEl.css({[a("width")]:`${i.virtualSize+r}px`}),n){s.splice(0,s.length);const e=[];for(let t=0;t<s.length;t+=1){let a=s[t];l&&(a=Math.floor(a)),s[t]<i.virtualSize+s[0]&&e.push(a)}s.push(...e)}}}},function(e){let{swiper:t}=e;Object.assign(t,{appendSlide:K.bind(t),prependSlide:Z.bind(t),addSlide:Q.bind(t),removeSlide:J.bind(t),removeAllSlides:ee.bind(t)})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({fadeEffect:{crossFade:!1,transformEl:null}}),te({effect:"fade",swiper:t,on:a,setTranslate:()=>{const{slides:e}=t,s=t.params.fadeEffect;for(let a=0;a<e.length;a+=1){const e=t.slides.eq(a);let i=-e[0].swiperSlideOffset;t.params.virtualTranslate||(i-=t.translate);let r=0;t.isHorizontal()||(r=i,i=0);const n=t.params.fadeEffect.crossFade?Math.max(1-Math.abs(e[0].progress),0):1+Math.min(Math.max(e[0].progress,-1),0);se(s,e).css({opacity:n}).transform(`translate3d(${i}px, ${r}px, 0px)`)}},setTransition:e=>{const{transformEl:s}=t.params.fadeEffect;(s?t.slides.find(s):t.slides).transition(e),ae({swiper:t,duration:e,transformEl:s,allSlides:!0})},overwriteParams:()=>({slidesPerView:1,slidesPerGroup:1,watchSlidesProgress:!0,spaceBetween:0,virtualTranslate:!t.params.cssMode})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({cubeEffect:{slideShadows:!0,shadow:!0,shadowOffset:20,shadowScale:.94}});const i=(e,t,s)=>{let a=s?e.find(".swiper-slide-shadow-left"):e.find(".swiper-slide-shadow-top"),i=s?e.find(".swiper-slide-shadow-right"):e.find(".swiper-slide-shadow-bottom");0===a.length&&(a=d(`<div class="swiper-slide-shadow-${s?"left":"top"}"></div>`),e.append(a)),0===i.length&&(i=d(`<div class="swiper-slide-shadow-${s?"right":"bottom"}"></div>`),e.append(i)),a.length&&(a[0].style.opacity=Math.max(-t,0)),i.length&&(i[0].style.opacity=Math.max(t,0))};te({effect:"cube",swiper:t,on:a,setTranslate:()=>{const{$el:e,$wrapperEl:s,slides:a,width:r,height:n,rtlTranslate:l,size:o,browser:c}=t,p=t.params.cubeEffect,u=t.isHorizontal(),h=t.virtual&&t.params.virtual.enabled;let m,f=0;p.shadow&&(u?(m=s.find(".swiper-cube-shadow"),0===m.length&&(m=d('<div class="swiper-cube-shadow"></div>'),s.append(m)),m.css({height:`${r}px`})):(m=e.find(".swiper-cube-shadow"),0===m.length&&(m=d('<div class="swiper-cube-shadow"></div>'),e.append(m))));for(let e=0;e<a.length;e+=1){const t=a.eq(e);let s=e;h&&(s=parseInt(t.attr("data-swiper-slide-index"),10));let r=90*s,n=Math.floor(r/360);l&&(r=-r,n=Math.floor(-r/360));const d=Math.max(Math.min(t[0].progress,1),-1);let c=0,m=0,g=0;s%%4==0?(c=4*-n*o,g=0):(s-1)%%4==0?(c=0,g=4*-n*o):(s-2)%%4==0?(c=o+4*n*o,g=o):(s-3)%%4==0&&(c=-o,g=3*o+4*o*n),l&&(c=-c),u||(m=c,c=0);const v=`rotateX(${u?0:-r}deg) rotateY(${u?r:0}deg) translate3d(${c}px, ${m}px, ${g}px)`;d<=1&&d>-1&&(f=90*s+90*d,l&&(f=90*-s-90*d)),t.transform(v),p.slideShadows&&i(t,d,u)}if(s.css({"-webkit-transform-origin":`50%% 50%% -${o/2}px`,"transform-origin":`50%% 50%% -${o/2}px`}),p.shadow)if(u)m.transform(`translate3d(0px, ${r/2+p.shadowOffset}px, ${-r/2}px) rotateX(90deg) rotateZ(0deg) scale(${p.shadowScale})`);else{const e=Math.abs(f)-90*Math.floor(Math.abs(f)/90),t=1.5-(Math.sin(2*e*Math.PI/360)/2+Math.cos(2*e*Math.PI/360)/2),s=p.shadowScale,a=p.shadowScale/t,i=p.shadowOffset;m.transform(`scale3d(${s}, 1, ${a}) translate3d(0px, ${n/2+i}px, ${-n/2/a}px) rotateX(-90deg)`)}const g=c.isSafari||c.isWebView?-o/2:0;s.transform(`translate3d(0px,0,${g}px) rotateX(${t.isHorizontal()?0:f}deg) rotateY(${t.isHorizontal()?-f:0}deg)`),s[0].style.setProperty("--swiper-cube-translate-z",`${g}px`)},setTransition:e=>{const{$el:s,slides:a}=t;a.transition(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").transition(e),t.params.cubeEffect.shadow&&!t.isHorizontal()&&s.find(".swiper-cube-shadow").transition(e)},recreateShadows:()=>{const e=t.isHorizontal();t.slides.each((t=>{const s=Math.max(Math.min(t.progress,1),-1);i(d(t),s,e)}))},getEffectParams:()=>t.params.cubeEffect,perspective:()=>!0,overwriteParams:()=>({slidesPerView:1,slidesPerGroup:1,watchSlidesProgress:!0,resistanceRatio:0,spaceBetween:0,centeredSlides:!1,virtualTranslate:!0})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({flipEffect:{slideShadows:!0,limitRotation:!0,transformEl:null}});const i=(e,s,a)=>{let i=t.isHorizontal()?e.find(".swiper-slide-shadow-left"):e.find(".swiper-slide-shadow-top"),r=t.isHorizontal()?e.find(".swiper-slide-shadow-right"):e.find(".swiper-slide-shadow-bottom");0===i.length&&(i=ie(a,e,t.isHorizontal()?"left":"top")),0===r.length&&(r=ie(a,e,t.isHorizontal()?"right":"bottom")),i.length&&(i[0].style.opacity=Math.max(-s,0)),r.length&&(r[0].style.opacity=Math.max(s,0))};te({effect:"flip",swiper:t,on:a,setTranslate:()=>{const{slides:e,rtlTranslate:s}=t,a=t.params.flipEffect;for(let r=0;r<e.length;r+=1){const n=e.eq(r);let l=n[0].progress;t.params.flipEffect.limitRotation&&(l=Math.max(Math.min(n[0].progress,1),-1));const o=n[0].swiperSlideOffset;let d=-180*l,c=0,p=t.params.cssMode?-o-t.translate:-o,u=0;t.isHorizontal()?s&&(d=-d):(u=p,p=0,c=-d,d=0),n[0].style.zIndex=-Math.abs(Math.round(l))+e.length,a.slideShadows&&i(n,l,a);const h=`translate3d(${p}px, ${u}px, 0px) rotateX(${c}deg) rotateY(${d}deg)`;se(a,n).transform(h)}},setTransition:e=>{const{transformEl:s}=t.params.flipEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").transition(e),ae({swiper:t,duration:e,transformEl:s})},recreateShadows:()=>{const e=t.params.flipEffect;t.slides.each((s=>{const a=d(s);let r=a[0].progress;t.params.flipEffect.limitRotation&&(r=Math.max(Math.min(s.progress,1),-1)),i(a,r,e)}))},getEffectParams:()=>t.params.flipEffect,perspective:()=>!0,overwriteParams:()=>({slidesPerView:1,slidesPerGroup:1,watchSlidesProgress:!0,spaceBetween:0,virtualTranslate:!t.params.cssMode})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({coverflowEffect:{rotate:50,stretch:0,depth:100,scale:1,modifier:1,slideShadows:!0,transformEl:null}}),te({effect:"coverflow",swiper:t,on:a,setTranslate:()=>{const{width:e,height:s,slides:a,slidesSizesGrid:i}=t,r=t.params.coverflowEffect,n=t.isHorizontal(),l=t.translate,o=n?e/2-l:s/2-l,d=n?r.rotate:-r.rotate,c=r.depth;for(let e=0,t=a.length;e<t;e+=1){const t=a.eq(e),s=i[e],l=(o-t[0].swiperSlideOffset-s/2)/s,p="function"==typeof r.modifier?r.modifier(l):l*r.modifier;let u=n?d*p:0,h=n?0:d*p,m=-c*Math.abs(p),f=r.stretch;"string"==typeof f&&-1!==f.indexOf("%%")&&(f=parseFloat(r.stretch)/100*s);let g=n?0:f*p,v=n?f*p:0,w=1-(1-r.scale)*Math.abs(p);Math.abs(v)<.001&&(v=0),Math.abs(g)<.001&&(g=0),Math.abs(m)<.001&&(m=0),Math.abs(u)<.001&&(u=0),Math.abs(h)<.001&&(h=0),Math.abs(w)<.001&&(w=0);const b=`translate3d(${v}px,${g}px,${m}px)  rotateX(${h}deg) rotateY(${u}deg) scale(${w})`;if(se(r,t).transform(b),t[0].style.zIndex=1-Math.abs(Math.round(p)),r.slideShadows){let e=n?t.find(".swiper-slide-shadow-left"):t.find(".swiper-slide-shadow-top"),s=n?t.find(".swiper-slide-shadow-right"):t.find(".swiper-slide-shadow-bottom");0===e.length&&(e=ie(r,t,n?"left":"top")),0===s.length&&(s=ie(r,t,n?"right":"bottom")),e.length&&(e[0].style.opacity=p>0?p:0),s.length&&(s[0].style.opacity=-p>0?-p:0)}}},setTransition:e=>{const{transformEl:s}=t.params.coverflowEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow-top, .swiper-slide-shadow-right, .swiper-slide-shadow-bottom, .swiper-slide-shadow-left").transition(e)},perspective:()=>!0,overwriteParams:()=>({watchSlidesProgress:!0})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({creativeEffect:{transformEl:null,limitProgress:1,shadowPerProgress:!1,progressMultiplier:1,perspective:!0,prev:{translate:[0,0,0],rotate:[0,0,0],opacity:1,scale:1},next:{translate:[0,0,0],rotate:[0,0,0],opacity:1,scale:1}}});const i=e=>"string"==typeof e?e:`${e}px`;te({effect:"creative",swiper:t,on:a,setTranslate:()=>{const{slides:e,$wrapperEl:s,slidesSizesGrid:a}=t,r=t.params.creativeEffect,{progressMultiplier:n}=r,l=t.params.centeredSlides;if(l){const e=a[0]/2-t.params.slidesOffsetBefore||0;s.transform(`translateX(calc(50%% - ${e}px))`)}for(let s=0;s<e.length;s+=1){const a=e.eq(s),o=a[0].progress,d=Math.min(Math.max(a[0].progress,-r.limitProgress),r.limitProgress);let c=d;l||(c=Math.min(Math.max(a[0].originalProgress,-r.limitProgress),r.limitProgress));const p=a[0].swiperSlideOffset,u=[t.params.cssMode?-p-t.translate:-p,0,0],h=[0,0,0];let m=!1;t.isHorizontal()||(u[1]=u[0],u[0]=0);let f={translate:[0,0,0],rotate:[0,0,0],scale:1,opacity:1};d<0?(f=r.next,m=!0):d>0&&(f=r.prev,m=!0),u.forEach(((e,t)=>{u[t]=`calc(${e}px + (${i(f.translate[t])} * ${Math.abs(d*n)}))`})),h.forEach(((e,t)=>{h[t]=f.rotate[t]*Math.abs(d*n)})),a[0].style.zIndex=-Math.abs(Math.round(o))+e.length;const g=u.join(", "),v=`rotateX(${h[0]}deg) rotateY(${h[1]}deg) rotateZ(${h[2]}deg)`,w=c<0?`scale(${1+(1-f.scale)*c*n})`:`scale(${1-(1-f.scale)*c*n})`,b=c<0?1+(1-f.opacity)*c*n:1-(1-f.opacity)*c*n,x=`translate3d(${g}) ${v} ${w}`;if(m&&f.shadow||!m){let e=a.children(".swiper-slide-shadow");if(0===e.length&&f.shadow&&(e=ie(r,a)),e.length){const t=r.shadowPerProgress?d*(1/r.limitProgress):d;e[0].style.opacity=Math.min(Math.max(Math.abs(t),0),1)}}const y=se(r,a);y.transform(x).css({opacity:b}),f.origin&&y.css("transform-origin",f.origin)}},setTransition:e=>{const{transformEl:s}=t.params.creativeEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow").transition(e),ae({swiper:t,duration:e,transformEl:s,allSlides:!0})},perspective:()=>t.params.creativeEffect.perspective,overwriteParams:()=>({watchSlidesProgress:!0,virtualTranslate:!t.params.cssMode})})},function(e){let{swiper:t,extendParams:s,on:a}=e;s({cardsEffect:{slideShadows:!0,transformEl:null,rotate:!0}}),te({effect:"cards",swiper:t,on:a,setTranslate:()=>{const{slides:e,activeIndex:s}=t,a=t.params.cardsEffect,{startTranslate:i,isTouched:r}=t.touchEventsData,n=t.translate;for(let l=0;l<e.length;l+=1){const o=e.eq(l),d=o[0].progress,c=Math.min(Math.max(d,-4),4);let p=o[0].swiperSlideOffset;t.params.centeredSlides&&!t.params.cssMode&&t.$wrapperEl.transform(`translateX(${t.minTranslate()}px)`),t.params.centeredSlides&&t.params.cssMode&&(p-=e[0].swiperSlideOffset);let u=t.params.cssMode?-p-t.translate:-p,h=0;const m=-100*Math.abs(c);let f=1,g=-2*c,v=8-.75*Math.abs(c);const w=t.virtual&&t.params.virtual.enabled?t.virtual.from+l:l,b=(w===s||w===s-1)&&c>0&&c<1&&(r||t.params.cssMode)&&n<i,x=(w===s||w===s+1)&&c<0&&c>-1&&(r||t.params.cssMode)&&n>i;if(b||x){const e=(1-Math.abs((Math.abs(c)-.5)/.5))**.5;g+=-28*c*e,f+=-.5*e,v+=96*e,h=-25*e*Math.abs(c)+"%%"}if(u=c<0?`calc(${u}px + (${v*Math.abs(c)}%%))`:c>0?`calc(${u}px + (-${v*Math.abs(c)}%%))`:`${u}px`,!t.isHorizontal()){const e=h;h=u,u=e}const y=c<0?""+(1+(1-f)*c):""+(1-(1-f)*c),E=`\n        translate3d(${u}, ${h}, ${m}px)\n        rotateZ(${a.rotate?g:0}deg)\n        scale(${y})\n      `;if(a.slideShadows){let e=o.find(".swiper-slide-shadow");0===e.length&&(e=ie(a,o)),e.length&&(e[0].style.opacity=Math.min(Math.max((Math.abs(c)-.5)/.5,0),1))}o[0].style.zIndex=-Math.abs(Math.round(d))+e.length;se(a,o).transform(E)}},setTransition:e=>{const{transformEl:s}=t.params.cardsEffect;(s?t.slides.find(s):t.slides).transition(e).find(".swiper-slide-shadow").transition(e),ae({swiper:t,duration:e,transformEl:s})},perspective:()=>!0,overwriteParams:()=>({watchSlidesProgress:!0,virtualTranslate:!t.params.cssMode})})}];return V.use(re),V}));
        //# sourceMappingURL=swiper-bundle.min.js.map
        </script>
        <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no, shrink-to-fit=no" />
      </head>
    <body>

        <div style="visibility:hidden;position:absolute;left:10px;top:0px;z-index:1;">
            <p class="dataInterval">0</p>
            <p class="dataInterval">0</p>
            <p class="dataInterval">0</p>
        </div>

        <div id="mainContainer">

            <div class="swiper mySwiper">
                <div class="swiper-wrapper">
                    <div class="swiper-slide graphSlide">
                        <div class="chartLabels">
                            <div class="chartLabel">
                                <div class="labelTickBox tick0" onclick="toggleGraph(0)"></div>
                                <input class="graphName name0" placeholder="Graf 1" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()" onchange="updateGraphName(0)">
                            </div>
                            <div class="chartLabel">
                                <div class="labelTickBox tick1" onclick="toggleGraph(1)"></div>
                                <input class="graphName name1" placeholder="Graf 2" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()" onchange="updateGraphName(1)">
                            </div>
                            <div class="chartLabel">
                                <div class="labelTickBox tick2" onclick="toggleGraph(2)"></div>
                                <input class="graphName name2" placeholder="Graf 3" maxlength="5" onfocus="toggleKeys()" onblur="toggleKeys()" onchange="updateGraphName(2)">
                            </div>
                        </div>
                        <div class="chartContainer">
                            <canvas id="chart"></canvas>
                        </div>
                    </div>
                    <div class="swiper-slide logoSlide">
                     <?xml version="1.0" encoding="utf-8"?>
                     <!-- Generator: Adobe Illustrator 27.7.0, SVG Export Plug-In . SVG Version: 6.00 Build 0)  -->
                     <svg style="width: 230px" version="1.1" id="Layer_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
                         viewBox="0 0 1749.23 859.53" style="enable-background:new 0 0 1749.23 859.53;" xml:space="preserve">
                     <style type="text/css">
                        .st10{fill:#FFFFFF;}
                        .st11{fill:#030302;}
                        .st12{fill:#8FCF79;}
                        .st13{fill:#E6E7E2;}
                        .st14{fill:#E7E2D4;}
                        .st15{fill:#2B2A28;}
                     </style>
                     <g>
                        <path class="st10" d="M1306.99,149.36l0.02,0.04c-0.22-2.75-3.44-2.49-4.47-4.43c0.26-0.24,0.49-0.57,0.8-0.72
                           c1.34-0.63,2.96-1.28,2.52-3.04c-0.4-1.57-2.07-1.83-3.56-1.92c-1.25-0.08-2.56,0.11-3.04-1.58c-0.81-2.87-3.46-3.59-5.77-4.52
                           c-4.54-1.81-9.34-3.04-13.72-5.17c-13.92-6.77-28.48-11.68-43.33-15.89c-7.12-2.02-14.16-4.3-21.71-6.61
                           c3.02-2.99,6.33-4.51,9.32-6.48c2.42-1.59,4.95-2.97,7.14-4.95c2.03-1.84,2.04-3.5,0.94-5.75c-0.77-1.58-2.01-2.52-3.33-3.47
                           c-3.75-2.69-8-4.19-12.43-5.3c-13.6-3.4-26.78-7.89-39-14.92c-1.41-0.81-2.94-1.43-4.37-2.21c-4.1-2.2-7.92-1.93-11.67,0.94
                           c-3.46,2.65-7.07,5.09-10.63,7.59c-2.23,1.56-4.73,2.81-6.68,4.66c-1.95,1.85-1.89,4.95-3.32,7.39
                           c-9.92-2.99-19.65-5.96-28.83-10.28c-16.14-7.59-33.05-13.23-49.51-20.02c-10.85-4.48-22.07-8.26-33.26-11.86
                           c-17.52-5.65-34.28-13.87-52.86-16.02c-6.69-3.56-13.73-2.23-20.72-1.45c-0.9,0.1-2.1,0.49-2.42-0.49
                           c-1.08-3.28-4.37-4.19-6.47-6.35c-5.78-5.96-12.75-9.03-21.14-9.67c-6.35-0.48-12.69-0.13-19.03-0.53
                           c-4.11-0.26-7.84-2.37-11.84-2.1c-7.84,0.53-15.53-1.15-23.33-1c-4.17,0.08-8.38,0.08-12.51-0.42c-9.55-1.15-19.15-1.19-28.72-1.57
                           c-9.76-0.39-19.56-0.3-29.37,0.45c-13.56,1.03-27.03,2.61-40.31,5.31c-29.14,5.93-57.56,14.65-86.11,22.85
                           c-16.02,4.6-31.74,10.13-48.07,13.72c-36.1,7.93-72.02,16.64-107.15,28.3c-27.88,9.26-56.33,16.47-85.11,22.22
                           c-18.98,3.8-38.1,6.82-56.89,11.6c-17.39,4.42-34.92,8.28-51.92,14.11c-9.33,3.2-18.54,6.88-25.5,14.09
                           c-9.13,9.46-16.81,19.91-17.54,34.01c-1.08-0.14-1.99-0.15-2.84-0.38c-15.22-4.06-30.52-7.82-45.91-11.15
                           c-16.62-3.6-33.22-7.31-50.27-8.29c-3.79-0.22-7.62-1.01-11.34-0.64c-4.46,0.44-8.81,1.92-13.23,2.82
                           c-2.53,0.51-4.26,1.94-5.47,4.09c-0.89,1.58-1.73,3.19-2.47,4.85c-13.2,29.16-23.44,59.28-29.33,90.82
                           c-1.86,9.96-3.83,19.93-7.2,29.52c-3.85,10.95-7.82,21.85-11.99,32.68c-9.89,25.72-20.16,51.3-29.86,77.09
                           c-14.69,39.04-29.87,77.85-48.87,115.07C14.8,521.05,7.5,538.26,1.88,556.13c-0.71,2.24-1.66,4.52-1.76,6.82
                           c-0.59,12.5,0.98,24.59,7.71,35.53c0.95,1.54,1.75,3.18,2.63,4.77c3.67,6.68,9.22,11.41,16.55,12.97
                           c20.03,4.26,39.83,9.47,59.76,14.13c43.29,10.13,85.97,22.15,127.55,38.07c49.62,19,99.97,35.93,151.2,50.04
                           c51.6,14.22,102.47,30.59,152.51,49.56c41.87,15.87,83.44,32.51,125.72,47.29c18.83,6.58,37.79,12.72,57.43,16.4
                           c14.23,2.67,28.55,4.93,42.66,8.19c4.09,0.95,8.16,1.51,11.95,4.45c2.98,2.31,8.24-0.68,12.19,1.55c0.16,0.09,0.34,0.14,0.51,0.19
                           c8.44,2.77,16.91,5.46,25.29,8.37c3.41,1.18,7.15,1.73,10.06,3.98c2.46,1.9,4.45,1.04,6.39-0.46c1.74-1.35,2.68-3.34,3.68-5.31
                           c4.79-9.42,8-19.44,10.99-29.5c9.25-31.11,18.74-62.13,29.32-92.82c0.49-1.42,1.08-2.81,1.77-4.61
                           c10.88,9.24,21.47,17.76,32.54,25.64c0.92,0.66,1.65,1.38,1.43,2.68c-0.83,4.92,2.31,6.52,6.22,7.9
                           c16.25,5.76,32.23,12.19,47.58,20.09c7.93,4.09,16.29,7.11,24.92,9.31c7.75,1.98,15.26,4.61,22.65,7.66
                           c9.22,3.8,18.49,7.46,28.33,9.43c18.63,3.73,37.34,6.86,56.3,8.33c2.61,0.2,5.38,0.47,7.21-1.49c2.47-2.65,5.4-2.57,8.5-2.56
                           c1.81,0.01,3.63-0.05,5.44-0.17c10.3-0.67,20.61-1.35,30.91-2.04c8.31-0.56,16.64-0.98,24.93-1.76
                           c14.36-1.35,27.29-7.03,39.82-13.74c6.56-3.51,13.09-7.12,20.15-9.53c22.32-7.64,43.96-17.01,65.69-26.1
                           c24.43-10.21,49.08-19.82,73.81-29.23c15.57-5.92,31.74-10.25,47.1-16.86c7.33-3.15,14.89-5.73,22.53-8.07
                           c50.12-15.37,99.25-33.55,148.17-52.31c2.7-1.04,5.31-2.27,8.21-2.81c17.58-3.26,34.3-9.16,50.41-16.82
                           c4.26-2.03,8.55-3.94,13.07-5.35c11.9-3.7,22.77-9.34,32.58-17.1c7.96-6.3,16.17-12.31,24.3-18.39
                           c8.99-6.73,16.02-15.04,21.78-24.73c10.47-17.58,15.19-37.26,20.45-56.57c6.98-25.63,8.7-52.09,8.07-78.66
                           c-0.43-18.22-3.36-35.95-8.81-53.37c-3.79-12.1-10.13-23.21-13.31-35.51c-0.08-0.32-0.33-0.74-0.6-0.86
                           c-3.03-1.28-3.63-4.39-5.09-6.81c-5.69-9.49-11.17-19.13-16.55-28.77c-9.14-16.39-22.58-28.44-37.36-38.98
                           c-17.21-12.28-36.28-21.23-56.53-27.55c-3.23-1.01-7.4-0.37-9.23-4.54c-0.23-0.53-1.65-0.52-2.51-0.79c-3.29-1.04-6.6-2-9.85-3.14
                           c-13.34-4.67-26.69-9.31-40.42-12.77c-1.04-0.26-2.07-0.63-3.03-1.11c-10.3-5.08-21.13-8.63-32.36-10.9
                           c-4.6-0.93-9.34-1.14-13.93-2.1c-10.44-2.19-20.89-3.94-31.62-3.87c-4.19,0.03-8.13-1.52-11.8-3.62c-4.7-2.69-9.34-5.25-14.86-6.3
                           c-14.79-2.82-29.65-4.61-44.7-4.92c-5.27-0.11-10.53-0.25-15.8-0.36c-3.5-0.08-6.53-1.38-8.05-4.53c-4.38-9.13-11.4-15.63-20-20.53
                           c-6.31-3.6-13.2-6-19.79-9.03c-4.44-2.04-8.72-2.47-13.09-0.54c-4.24,1.88-8.04,1.39-11.7-1.26
                           C1307.83,149.91,1307.65,149.36,1306.99,149.36z"/>
                        <path class="st11" d="M1308.12,150.33c3.66,2.65,7.46,3.13,11.7,1.26c4.37-1.93,8.65-1.5,13.09,0.54
                           c6.59,3.02,13.48,5.43,19.79,9.03c8.6,4.9,15.62,11.4,20,20.53c1.51,3.15,4.55,4.45,8.05,4.53c5.27,0.11,10.53,0.25,15.8,0.36
                           c15.05,0.3,29.91,2.1,44.7,4.92c5.52,1.05,10.16,3.61,14.86,6.3c3.67,2.1,7.61,3.65,11.8,3.62c10.73-0.07,21.18,1.68,31.62,3.87
                           c4.59,0.96,9.33,1.17,13.93,2.1c11.23,2.27,22.06,5.82,32.36,10.9c0.96,0.47,1.99,0.85,3.03,1.11c13.73,3.45,27.08,8.1,40.42,12.77
                           c3.25,1.14,6.56,2.11,9.85,3.14c0.86,0.27,2.28,0.26,2.51,0.79c1.83,4.17,6,3.53,9.23,4.54c20.25,6.32,39.32,15.28,56.53,27.55
                           c14.78,10.55,28.22,22.59,37.36,38.98c5.38,9.65,10.85,19.28,16.55,28.77c1.45,2.42,2.06,5.53,5.09,6.81
                           c0.28,0.12,0.52,0.54,0.6,0.86c3.18,12.3,9.52,23.41,13.31,35.51c5.45,17.42,8.38,35.15,8.81,53.37
                           c0.62,26.58-1.1,53.03-8.07,78.66c-5.26,19.31-9.98,38.98-20.45,56.57c-5.76,9.68-12.79,18-21.78,24.73
                           c-8.13,6.09-16.34,12.09-24.3,18.39c-9.81,7.77-20.69,13.41-32.58,17.1c-4.53,1.41-8.81,3.32-13.07,5.35
                           c-16.12,7.66-32.83,13.55-50.41,16.82c-2.89,0.54-5.51,1.77-8.21,2.81c-48.92,18.77-98.05,36.95-148.17,52.31
                           c-7.64,2.34-15.19,4.92-22.53,8.07c-15.36,6.6-31.53,10.93-47.1,16.86c-24.73,9.41-49.38,19.02-73.81,29.23
                           c-21.73,9.08-43.38,18.45-65.69,26.1c-7.06,2.42-13.59,6.02-20.15,9.53c-12.53,6.71-25.46,12.39-39.82,13.74
                           c-8.29,0.78-16.62,1.2-24.93,1.76c-10.3,0.7-20.6,1.38-30.91,2.04c-1.81,0.12-3.63,0.18-5.44,0.17c-3.1-0.01-6.03-0.1-8.5,2.56
                           c-1.83,1.96-4.6,1.69-7.21,1.49c-18.96-1.47-37.68-4.59-56.3-8.33c-9.84-1.97-19.11-5.63-28.33-9.43
                           c-7.39-3.05-14.89-5.68-22.65-7.66c-8.63-2.2-16.98-5.22-24.92-9.31c-15.35-7.91-31.33-14.34-47.58-20.09
                           c-3.91-1.38-7.06-2.99-6.22-7.9c0.22-1.3-0.51-2.02-1.43-2.68c-11.08-7.88-21.66-16.39-32.54-25.64c-0.69,1.79-1.28,3.18-1.77,4.61
                           c-10.58,30.68-20.07,61.71-29.32,92.82c-2.99,10.05-6.2,20.08-10.99,29.5c-1,1.96-1.94,3.96-3.68,5.31
                           c-1.94,1.5-3.93,2.36-6.39,0.46c-2.91-2.25-6.66-2.79-10.06-3.98c-8.39-2.91-16.86-5.59-25.29-8.37c-0.17-0.06-0.35-0.11-0.51-0.19
                           c-3.96-2.23-9.21,0.76-12.19-1.55c-3.79-2.94-7.86-3.5-11.95-4.45c-14.11-3.27-28.43-5.52-42.66-8.19
                           c-19.64-3.68-38.61-9.82-57.43-16.4c-42.28-14.78-83.85-31.42-125.72-47.29c-50.04-18.97-100.91-35.34-152.51-49.56
                           c-51.23-14.12-101.58-31.05-151.2-50.04c-41.58-15.92-84.25-27.94-127.55-38.07c-19.93-4.66-39.73-9.87-59.76-14.13
                           c-7.33-1.56-12.88-6.29-16.55-12.97c-0.87-1.59-1.68-3.22-2.63-4.77c-6.73-10.94-8.3-23.03-7.71-35.53
                           c0.11-2.3,1.06-4.58,1.76-6.82c5.62-17.86,12.92-35.07,21.42-51.71c18.99-37.22,34.17-76.03,48.87-115.07
                           c9.71-25.79,19.97-51.37,29.86-77.09c4.17-10.83,8.14-21.74,11.99-32.68c3.37-9.59,5.34-19.56,7.2-29.52
                           c5.89-31.54,16.12-61.65,29.33-90.82c0.75-1.65,1.59-3.27,2.47-4.85c1.21-2.15,2.95-3.58,5.47-4.09c4.42-0.9,8.77-2.38,13.23-2.82
                           c3.72-0.37,7.55,0.42,11.34,0.64c17.05,0.97,33.66,4.69,50.27,8.29c15.4,3.33,30.69,7.09,45.91,11.15
                           c0.85,0.23,1.76,0.24,2.84,0.38c0.74-14.1,8.41-24.55,17.54-34.01c6.96-7.21,16.17-10.89,25.5-14.09
                           c17-5.83,34.54-9.69,51.92-14.11c18.78-4.78,37.91-7.8,56.89-11.6c28.77-5.76,57.22-12.97,85.11-22.22
                           c35.13-11.66,71.04-20.37,107.15-28.3c16.33-3.59,32.06-9.12,48.07-13.72c28.54-8.2,56.97-16.93,86.11-22.85
                           c13.28-2.7,26.75-4.28,40.31-5.31c9.81-0.75,19.61-0.84,29.37-0.45c9.57,0.39,19.18,0.42,28.72,1.57c4.13,0.5,8.34,0.5,12.51,0.42
                           c7.8-0.15,15.5,1.53,23.33,1c4-0.27,7.73,1.84,11.84,2.1c6.34,0.4,12.68,0.04,19.03,0.53c8.39,0.64,15.35,3.71,21.14,9.67
                           c2.1,2.16,5.38,3.07,6.47,6.35c0.32,0.98,1.52,0.59,2.42,0.49c6.99-0.78,14.03-2.11,20.72,1.45c18.58,2.15,35.34,10.38,52.86,16.02
                           c11.2,3.61,22.41,7.38,33.26,11.86c16.45,6.79,33.37,12.43,49.51,20.02c9.18,4.32,18.92,7.29,28.83,10.28
                           c1.43-2.43,1.37-5.54,3.32-7.39c1.95-1.84,4.45-3.09,6.68-4.66c3.57-2.5,7.18-4.95,10.63-7.59c3.75-2.87,7.57-3.14,11.67-0.94
                           c1.44,0.77,2.96,1.39,4.37,2.21c12.22,7.03,25.4,11.52,39,14.92c4.43,1.11,8.68,2.6,12.43,5.3c1.33,0.95,2.56,1.88,3.33,3.47
                           c1.1,2.25,1.09,3.91-0.94,5.75c-2.19,1.99-4.72,3.37-7.14,4.95c-2.99,1.96-6.3,3.49-9.32,6.48c7.55,2.31,14.6,4.59,21.71,6.61
                           c14.85,4.21,29.41,9.12,43.33,15.89c4.37,2.13,9.18,3.35,13.72,5.17c2.31,0.92,4.95,1.65,5.77,4.52c0.48,1.69,1.79,1.5,3.04,1.58
                           c1.49,0.09,3.16,0.35,3.56,1.92c0.44,1.76-1.18,2.41-2.52,3.04c-0.31,0.15-0.53,0.47-0.8,0.72c-1.71,1.06-0.68,2.15,0.24,2.73
                           c1.27,0.79,2.81,1.15,4.23,1.7c0,0-0.02-0.04-0.02-0.04C1306.99,150.13,1307.35,150.47,1308.12,150.33z M1256.85,602.37
                           c3.33,1.83,6.91,2.82,11.58,3.41c-4-2.64-7.49-4.14-11.38-4.69c-6.48-2.55-12.96-5.11-19.53-7.7c-0.9,6.17-0.88,6.75,2.34,7.12
                           C1245.52,601.15,1251.11,602.54,1256.85,602.37z M1253.05,472.56c-5.02-0.45-10.03-1.02-15.05-1.32c-4.97-0.3-9.5-3.7-14.99-2.08
                           c1.15,4.14,3.44,7.62,5.16,11.35c0.85,1.85,1.98,1.62,3.5,0.9c1.94-0.92,3.96-2.54,6.05-2.01c2.92,0.74,5.32-0.39,7.91-1.02
                           c2.63-0.64,5.27-1.24,7.9-1.86c0.69-0.13,1.45-0.12,2.06-0.42c0.9-0.44,2.28-0.68,2.03-2.11c-0.21-1.23-1.29-1.65-2.43-1.68
                           C1254.47,472.29,1253.76,472.47,1253.05,472.56z M1339.61,558.58c-0.26,0.14-0.7,0.24-0.75,0.43c-0.1,0.4,0.22,0.59,0.64,0.51
                           c1.64,1.02,3.51,0.73,5.29,0.93c6.82,0.78,13.72,0.56,20.48,2.02c2.29,0.49,4.68,0.67,6.92-0.54c0.98-0.53,2.33-0.91,3.12-0.25
                           c2.77,2.29,4.72,0.31,6.53-1.21c2.48-2.09,4.68-4.52,7-6.8c0.21-0.67-0.07-0.8-0.65-0.6c-6.31,1.54-12.79,1.32-19.2,1.91
                           c-4.07,0.37-8.41-0.68-12.14,1.43c-1.63,0.92-2.78,1.09-4.44,0.51C1347.91,555.34,1343.48,554.98,1339.61,558.58z M1000.43,396.41
                           c-5.28,3.26-9.21,7.97-13.42,12.39c-0.49,0.15-0.81,0.46-0.57,0.97c0.08,0.17,0.5,0.19,0.76,0.28c2.84,0.95,4.78,3.08,6.79,5.14
                           c4.02,4.11,8.14,8.09,13.34,11.05c3.71-5.42,7.27-10.63,11.61-15.22c1.07-1.13,1.19-2.11,0.18-3.23
                           c-4.04-4.46-6.17-10.16-9.72-14.94c-0.08-2.02-1.14-3.42-2.99-2.18C1004.14,392.19,1001.1,393.14,1000.43,396.41z M1480.43,625.63
                           c1.28,2.17,3.31,2.67,5.62,2.55c2.65,1.26,4.3,4.3,7.95,4.5c-0.55-3.35,2.35-5.79,1.72-8.98c-1.61-8.18-1.13-16.52-1.78-24.77
                           c-0.22-2.78-1.28-3.88-3.62-4.32c-3.54-0.68-7.15-1.06-10.64-1.94c-2.45-0.62-3.66,0.19-4.68,2.27
                           c-3.5,7.13-7.09,14.22-10.66,21.32c-0.77,1.52-0.75,2.7,1.04,3.47C1470.33,621.87,1474.97,624.78,1480.43,625.63z M1341.83,391.7
                           c-0.68-0.22-0.9,0.04-0.74,0.7c-0.29,1.04-0.3,2.32-0.93,3.07c-3.08,3.63-3.88,8.07-4.9,12.49c-0.94,4.05-1.85,8.15-3.29,12.04
                           c-0.88,2.38-0.12,3.17,1.82,4.01c7.69,3.33,15.64,5.66,23.99,6.61c2.23,0.25,2.69-0.66,3.1-2.57c1.67-7.82,4.5-15.21,9.36-22.17
                           c-6.01-3.84-11.84-7.5-17.6-11.27C1349.33,392.43,1345.78,391.39,1341.83,391.7z M943.94,393.69c0.63-3.42-2.17-5.08-3.87-7.21
                           c-1.64-2.06-3.19-1.79-3.62,0.63c-0.79,4.37-2.51,8.58-2.45,13.11c-1.97,3.7-2.42,7.86-3.11,11.84
                           c-2.37,13.69-4.59,27.41-7.43,41.01c-0.9,4.31-1.1,7.26-0.44,10.03c12.79-23.76,27.94-45.48,45.37-65.91
                           c-4.93,1.27-9.63,2.15-14.55,2.04c-3.5-0.08-6.54-0.23-7.78-4.22C945.77,394.07,944.99,393.58,943.94,393.69z M1397.7,281.71
                           c-7.29-1.24-14.59-2.48-21.88-3.69c-0.7-0.12-1.45,0.03-2.17,0.05c-2.03-1.74-4.26-2.53-6.99-1.86c0.32,2.04,1.05,3.36,2.7,4.02
                           c1.84,3.12,3.85,6.14,5.47,9.37c2.62,5.22,4.85,10.55-0.95,15.32c-0.54,0.45-0.88,1.15-1.3,1.74c-2.2,3.09-0.86,6.98-2.27,10.29
                           c-0.4,0.93,0.93,1.38,1.72,1.78c3.25,1.63,6.59,3.04,10.1,4.04c2.92,0.84,5.77,0.98,8.35-0.86c1.86-1.32,3.71-1.19,5.67-0.41
                           c2.86,1.15,5.72,2.28,8.58,3.41c1.21,0.48,2.28,0.8,3.34-0.53c4.4-5.54,8.87-11.01,13.35-16.48c1.8-2.21,1.45-4.05-0.3-6.24
                           c-2.59-3.23-5.53-6.1-8.3-9.13c-3.5-3.84-7.43-6.87-11.93-9.28C1400.15,282.04,1399.11,281.49,1397.7,281.71z M1296.91,502.81
                           c0.02,2.81,1.56,5.07,2.58,7.55c1.19,2.88,2.77,3.91,5.81,2.74c3.45-1.33,7.03-0.76,9.62,1.59c5.17,4.68,11.89,5.07,18.61,8.57
                           c-1.11-3.49-1.81-5.68-2.5-7.88c-6.46-20.54-8.9-41.69-9.57-63.11c-0.13-4.24-0.06-4.27-4.13-5.59c-7.25-2.34-14.4-4.91-21.42-7.89
                           c-1.62-0.69-3.31-1.98-5.14-1.39c-2.32,0.75-3.66-0.57-5.06-2.01c-1.19,2.18-1.39,4.31-1.36,6.51c0.07,5.43,0.21,10.84,0.64,16.27
                           c0.83,10.52,2.98,20.74,5.45,30.95c0.35,1.45,0.84,2.76,1.74,3.93C1292.88,496.73,1294.34,500.04,1296.91,502.81z M968.91,291.14
                           c3.51,0.04,6.77-1.01,9.98-2.28c6.74-2.65,13.15-6.11,20.2-7.97c3.32-0.87,6.6-1.82,9.81-3.14c18.89-7.76,37.76-15.59,56.72-23.19
                           c14.95-6,29.84-12.24,44.18-19.69c1.77-0.92,3.56-1.84,5.43-2.52c16.25-5.92,31.2-14.65,46.32-22.75
                           c16.03-8.58,32.48-16,49.07-23.25c9.48-4.14,19.55-6.67,29.01-10.81c7.8-3.41,15.61-6.86,23.16-10.77
                           c4.78-2.48,9.4-5.45,12.64-10.02c0.54-0.18,0.63-0.34,0.25-0.42c-0.04-0.01-0.15,0.29-0.22,0.45c-2.28-0.25-4.32,0.72-6.26,1.59
                           c-10.75,4.83-21.93,8.57-32.93,12.73c-10.33,3.91-20.66,7.83-30.89,12c-14.76,6.02-29.36,12.4-44.14,18.39
                           c-13.93,5.64-27.99,10.96-41.99,16.44c-23.6,9.24-46.95,19.15-71.14,26.81c-14,4.43-27.36,10.61-41.42,14.88
                           c-2.06,0.62-4.03,1.71-5.86,2.87c-5.37,3.43-11.16,6.06-16.85,8.87c-3.25,1.6-6.63,2.93-9.91,4.46c-1.28,0.6-2.89,1.11-2.92,2.88
                           c-0.08,4.92-2.35,9.48-2.28,14.41c-0.13,0.05-0.27,0.08-0.37,0.17c-0.06,0.05-0.05,0.19-0.08,0.29
                           C968.59,291.42,968.75,291.28,968.91,291.14z M1465.44,227.95c-8.01-1.33-15.88-3.34-24.11-3.49c-7.2-0.13-14.47-0.58-21.42-2.85
                           c-12.03-3.94-24.34-5.5-36.97-4.7c-1.09,0.07-2.18-0.01-3.27-0.01c-1.43,0-2.47-0.45-2.69-2.05c-0.39-2.82-2.06-1.88-3.54-1.12
                           c-14.02,7.27-28.8,12.88-43.11,19.51c-21.4,9.92-42.74,19.99-63.94,30.33c-22.86,11.15-45.54,22.67-68.27,34.07
                           c-1.38,0.69-3.21,0.9-3.79,2.74c0.86,0.78,1.68,0.36,2.53,0.1c5.36-1.66,10.7-3.43,16.11-4.91c20.6-5.66,41.16-11.48,61.47-18.12
                           c15.51-5.07,30.85-10.52,45.78-17.22c19.03-8.54,39.02-14.5,59.32-19.29c13.36-3.15,26.92-5.17,40.58-6.72
                           c11.13-1.26,22.35-1.34,33.46-2.87c3.71-0.51,7.45-1.64,11.29-1.2c1.81-0.1,3.62-0.2,5.44-0.3c0.02-0.22,0.04-0.44,0.06-0.66
                           C1468.73,228.76,1467.09,228.36,1465.44,227.95z M1010.02,361.83c1.39,0.32,2.35-0.08,2.65-1.58c3.13-1.28,6.26-2.56,9.39-3.84
                           c2.02,0.15,3.65-0.56,4.84-2.22c6.12-3.6,12.92-5.71,19.24-8.85c19.18-9.54,38.61-18.54,58.28-27.04
                           c33.15-14.33,66.25-28.8,98.49-45.08c48.61-24.55,97.26-49,147.65-69.78c3.77-1.55,7.76-2.88,11.37-5.75
                           c-4.5-3.32-9.42-5.19-14.08-7.56c-2.74-1.39-4.71-1.31-7.46,0.12c-30.6,15.92-61.3,31.66-91.98,47.43
                           c-8.56,4.4-17.24,8.56-25.71,13.12c-14.71,7.91-29.13,16.36-44.13,23.73c-24.11,11.86-48.31,23.48-73.21,33.63
                           c-17.97,7.33-35.08,16.7-53.31,23.4c-33.56,12.32-66.5,26.19-99.8,39.14c-1.18,0.46-2.44,0.85-3.47,1.55
                           c-4.98,3.41-5.05,5.83-0.37,9.65c0.84,0.69,1.75,1.33,2.49,2.12c2.29,2.46,4.66,2.12,7.28,0.52c2.93-1.8,5.72-3.89,9.13-4.78
                           c4.73-0.49,8.84-2.88,13.18-4.52c2.44-0.92,5.34-1.15,7.13-3.48C995.08,368.45,1002.55,365.14,1010.02,361.83z M1322.14,297.85
                           c1.04-0.29,2.07-0.68,3.14-0.84c3.41-0.53,7.23-1.48,9.74,1.53c3.14,3.76,7.41,5.75,11.16,8.56c2,1.5,3.69,2.37,5.24-0.58
                           c0.8-1.52,2.3-2.21,4.11-2.21c4.6,0,6.82-3.73,9.69-6.39c1.02-0.94,0.64-2.06-0.25-2.85c-3.25-2.87-6.2-6.42-10.29-7.86
                           c-4.5-1.59-6-4.93-7.05-8.85c-1.12-4.18-1.32-4.46-5.39-2.66c-5.58,2.47-10.93,5.42-16.7,7.55c-2.17,0.8-4.46,1.33-6.59,2.34
                           c-18.78,8.83-38.68,14.63-58.46,20.51c-24.3,7.23-48.77,13.88-72.88,21.76c-12.4,4.05-24.8,8.1-37.34,11.75
                           c-5.33,1.55-10.88,2.64-16.52,5.54c4.04,0.89,2.93,3.54,2.94,5.77c-0.1,0.24-0.2,0.49-0.3,0.73c0.24-0.1,0.48-0.2,0.73-0.31
                           c2.07,0.32,3.06,2.39,5.06,2.96c7.28,2.07,14.45,4.52,21.79,6.32c2.2,0.54,5.49,2.03,7-1.82c0.44-1.11,1.4-0.68,2.3-0.34
                           c4.22,1.58,8.42,3.18,12.53,5.07c4.47,2.06,8.3,5.09,12.5,7.53c11.99,6.95,23.87,14.02,33.68,24.21
                           c6.45,6.7,12.19,13.74,16.88,21.92c-12.4,8.1-23.81,17.41-33.46,28.74c-2.84,0.97-3.64,2.62-1.79,5.22
                           c0.52,0.72,0.85,1.58,1.33,2.33c0.51,0.8,0.67,2.4,2.1,1.61c0.56-0.31,0.6-1.58,0.87-2.41c5.52-2.03,11-0.57,15.72,1.73
                           c6.84,3.34,14.01,4.62,21.3,6c7.28,1.38,14.37,3.43,19.09,10.03c1.49-6.63-0.3-12.71-1.03-18.75c-1.34-11.08-0.23-22.13-0.62-33.18
                           c-0.09-2.44,1.25-3.54,3.4-2.8c4.1,1.42,8.27,0.89,12.42,0.92c1.89,0.01,3.79,0.19,5.21,1.21c3.24,2.33,6.82,2.11,10.44,2.03
                           c5.25-0.11,10.4-1.51,15.7-1.05c1.64,0.14,2.69-0.54,2.9-2.43c0.77-7.21,1.19-14.44,1.14-21.7c-0.02-2.58-0.97-3.81-3.61-4.47
                           c-7.06-1.77-14.29-2.42-21.46-2.94c-6.1-0.44-11.91-0.82-16.89-4.79c-0.41-0.33-0.99-0.44-1.49-0.65
                           c-1.43-0.62-3.66,0.47-4.32-1.49c-0.5-1.48-0.48-3.28-0.18-4.84c1.59-8.36,3.13-16.75,6.18-24.73
                           c6.04-15.81,14.01-30.71,22.24-45.45c2.29-4.1,5.17-7.88,7.91-11.72c0.68-0.96,1.97-2.8,2.86-2c2.43,2.19,6.2,2.85,7.44,6.37
                           c-2.71,1.22-3.81,3.85-5.13,6.16c-6.96,12.14-12.17,25.1-17.65,37.94c-3.13,7.33-6.11,14.71-7.95,22.52
                           c-0.54,2.3,0.22,3.26,1.85,4.14c3.97,2.15,8.02,4.07,12.4,5.32c7.16,2.03,14.13,4.62,20.9,7.71c3.59,1.64,3.63,1.63,4.98-2.39
                           c5.37-16.06,12.31-31.41,21.34-45.74c2.28-3.61,3.48-6.55-0.07-9.91c-0.69-0.66-0.81-1.97-1.11-3c-0.33-1.14-1-1.91-2.14-2.24
                           c-6.59-1.91-12.49-5.79-19.42-6.74c-2.34-0.32-3.9-1.82-5.07-3.71C1323.24,304.92,1321.6,301.7,1322.14,297.85z M1294.02,167.18
                           c-2.51,2.63-5,5.27-7.54,7.87c-3.7,3.8-7.83,6.76-12.93,8.73c-11.87,4.59-23.24,10.28-34.16,16.87
                           c-24.91,15.05-50.69,28.52-77.19,40.49c-24.82,11.21-50.23,21.12-74.94,32.62c-7.93,3.69-16.05,6.82-24.47,9.15
                           c-8.95,2.48-17.59,5.79-26.04,9.61c-9.26,4.18-18.47,8.46-28.37,11.1c-4.16,1.11-8.13,3.16-11.96,5.22
                           c-4.65,2.5-9.4,4.74-14.18,6.95c-8.9,4.11-18.27,7.3-26.52,12.69c-3.84,2.51-7.92,3.47-12.24,3.87c-3.61,0.34-7.26,0.16-10.88,0.43
                           c-7.42,0.56-14.44-0.99-21.28-3.67c-18.6-7.27-36.4-16.36-54.84-23.99c-3.06-1.27-5.78-3.26-6.99-6.53
                           c-0.69-1.85-2.17-2.33-3.68-2.86c-22.57-7.97-44.97-16.39-68.06-22.9c-35.78-10.08-71.08-21.8-107.27-30.48
                           c-30.68-7.36-61.19-15.41-91.96-22.43c-33.23-7.58-66.56-14.77-99.28-24.45c-14.37-4.25-28.59-9.71-43.99-9.1
                           c-5.74,0.23-11.41-1.55-17.39-0.78c0.49,3.11,1,5.95,1.37,8.81c0.53,4.05,0.46,4.36,4.82,5c6.71,0.98,12.78,3.86,19.13,5.89
                           c0.68,1.09,1.34,1.08,2-0.02c0.31-0.17,0.7-0.55,0.92-0.48c11.36,4,23.48,5.23,34.71,9.81c5.18,2.11,10.76,3.34,16.35,4.12
                           c6.78,0.95,12.3,5.13,18.74,7.04c10.25,3.03,20.56,5.78,30.89,8.51c0.11,4.01,1.53,6.93,5.07,9.48
                           c8.91,6.41,18.51,11.04,28.98,14.34c13.1,4.12,26.19,4.81,39.49,1.66c2.02-0.48,4.48,0.63,6.06-1.56c1.6,0.28,3.24,0.46,4.81,0.87
                           c44.37,11.77,88.57,24.23,131.66,40.03c44.55,16.33,89.05,32.75,134.09,47.68c1.2,0.4,2.33,1.11,3.66,0.88
                           c3.47-0.62,6.43,0.93,9.36,2.32c5.91,2.81,11.76,5.66,18.62,4.36c0.7-0.13,1.45-0.01,2.18,0.03c0.97,0.06,1.84,0.45,2.04,1.46
                           c0.78,3.86,4.23,3.95,6.97,5.18c3.13,1.4,5.89,0.9,8.83-0.59c11.51-5.82,23.61-10.32,35.33-15.69
                           c13.03-5.97,25.88-12.35,38.83-18.49c12.46-5.91,25.09-11.44,37.36-17.77c13.23-6.82,26.29-13.96,39.76-20.32
                           c15.1-7.14,30.16-14.34,44.89-22.25c20.63-11.07,41.28-22.11,62.01-33c18.49-9.72,37.79-17.73,57.11-25.55
                           c20.17-8.17,40.71-15.41,61.08-23.09c1.64-0.62,3.52-0.84,4.82-2.44c-4.17-4-9.2-5.65-14.67-6.37c-3.92-0.52-7.96-0.7-11.32-3.23
                           c0.37-1.11,3.36-1.84,1.12-3.19c-3.02-1.82-6.44-3.14-10.12-3.09C1294.53,165.93,1294.28,166.74,1294.02,167.18z M469.26,168.83
                           c-1.19-1.39-1.83-0.67-2.32,0.6c-0.69,0.11-1.39,0.23-2.08,0.34c-2.5-1.87-4.48,0.07-7.17,0.71c2.3,0.99,3.93,2.17,6.02,1.77
                           c0.54,0.05,1.1,0.03,1.63,0.15c41.64,8.89,83.47,16.82,125.17,25.37c59.47,12.19,118.9,24.75,177.33,41.48
                           c1.2,0.34,2.37,0.86,3.64,0.3c0.05-1.9-1.67-2.28-2.78-3.03c-2.58-1.75-4.93-3.76-6.93-6.12c-2.64-3.12-4.86-6.98-3.96-10.88
                           c1.43-6.2,1.87-12.54,3.33-18.7c0.49-2.06,0.14-3.47-1.23-5.35c-4.09-5.6-1.62-13.03,4.83-15.45c3.56-1.34,7.22-2.44,10.86-3.57
                           c23.09-7.16,45.8-15.21,67.1-26.89c16.57-9.09,34.18-16.03,51.3-23.98c25.18-11.7,50.4-23.36,75.87-34.41
                           c13.48-5.85,27.15-11.26,40.41-17.64c1.74-0.84,3.76-1.27,5.23-3.22c-2.41-0.98-4.52-1.88-6.66-2.72
                           c-10.31-4.05-20.54-8.31-30.96-12.02c-5.97-2.13-9.62-6.08-12.01-11.65c-1.27-2.96-2.04-7.05-4.33-8.39
                           c-2.33-1.36-5.63,1.93-8.66,2.71c-0.88,0.22-1.71,0.6-2.57,0.9c-11.49,4.04-23.05,7.88-34.45,12.14
                           c-31.28,11.7-62.93,22.29-94.72,32.47c-21.26,6.81-41.68,15.95-63.09,22.37c-13.55,4.06-26.92,8.65-40.76,11.72
                           c-30.44,6.74-60.84,13.61-91.26,20.44c-26.53,5.96-52.94,12.52-79.62,17.73C520.82,161.02,494.98,164.62,469.26,168.83z
                            M1039.43,380.59c3.85,4.84,7.21,10,10.38,15.3c2.95,4.94,3.76,10.25,2.78,15.7c-1.25,6.95-4.2,13.37-7.53,19.56
                           c-1.39,2.57-3.85,4.08-6.77,3.72c-4.61-0.57-8.05,1.52-11.43,4.1c-2.02,1.54-4.04,3.09-6.09,4.59c-4.96,3.63-6.85,3.72-11.63,0.05
                           c-10.56-8.11-18.13-18.61-23.94-30.47c0.63-0.69,0.47-1.58-0.26-1.68c-0.9-0.13-1.51,0.72-1.76,1.65
                           c-19.02,22.13-33.71,47.01-47.21,73.57c4.86-0.91,8.54-0.1,12.16,2.02c6.88,4.03,13.99,7.67,20.96,11.55
                           c7.48,4.15,9.15,6.5,6.81,16.56c-1.78,7.61-5.2,14.58-9.91,20.89c-2.38,3.2-4.15,6.49-3.97,10.92c0.24,5.71-2.21,10.94-5.06,15.84
                           c-1.54,2.64-2.9,3.09-5.84,1.87c-11.9-4.91-24.46-6.31-37.15-7.01c-4.09-0.22-4.19-0.14-4.8,3.56c-3.43,20.9-3.77,41.79,0.39,62.65
                           c0.77,3.88,1.13,7.85,2.82,11.52c2.43-0.09,4.27-1.31,6.22-2.16c9.35-4.05,19.02-6.9,29.04-8.84c5.48-1.06,9.34,1.8,13.48,4.12
                           c1.56,0.87,1.83,3.06,2.09,4.86c0.18,1.25,0.06,2.54,0.12,3.81c0.44,9.65,4.61,17.43,12.11,23.38c2.55,2.02,5.44,3.59,8.15,5.42
                           c3.6,2.43,4.52,4.26,3.42,8.27c-1.09,3.99-2.51,7.91-4.41,11.63c-1.19,2.34-2.97,3.78-5.59,3.32c-1.69-0.3-2.79,0.33-3.96,1.21
                           c-7.45,5.61-14.42,11.87-23.08,16.22c19.4,19.67,42.44,32.23,67.82,40.96c2.42,0.83,3.49-0.03,4.75-2
                           c2.69-4.22,4.06-8.87,5.23-13.64c1.13-4.57,2.15-9.17,3.54-13.66c0.85-2.76,2.09-5.76,5.18-6.62c6.15-1.72,12.26-4.43,18.84-1.02
                           c2.36,1.22,5.16,1.66,7.82,2.2c10.53,2.16,20.28,6.66,30.4,10.05c3.78,1.26,5.35,4.13,5.32,7.96c-0.04,5.45-0.27,10.89-0.19,16.34
                           c0.06,3.74-1.48,7.38-0.67,11.42c0.98,0.05,1.86,0.15,2.74,0.13c3.8-0.11,7.56-0.6,11.34-1.03c20.99-2.41,39.6-11.25,57.83-21.16
                           c1.76-0.96,2.21-2.15,2.07-4.38c-0.2-3.07-0.97-5.69-2.76-8.04c-1.64-2.16-3.29-4.35-5.19-6.28c-4.28-4.34-7.24-9.52-9.84-14.92
                           c-2.44-5.07-1.49-7.75,3.52-10.57c2.78-1.56,4.77-3.85,6.52-6.43c3.38-4.97,5.95-10.39,8.91-15.59
                           c4.74-8.31,13.72-10.96,22.34-6.69c4.08,2.02,7.84,4.56,11.34,7.48c6.11,5.11,11.48,10.97,16.83,16.78
                           c0.52-0.31,0.93-0.42,1.12-0.69c9.44-13.45,16.59-28.08,22.18-43.5c0.59-1.62,0.51-3.17-0.16-4.75c-1.95-4.58-0.87-8.29,4.12-11.3
                           c-4.94-1.66-9.22-3.04-13.45-4.54c-10.26-3.63-15.96-11.44-19.3-21.35c-0.6-1.77-0.41-3.52,0.18-5.32
                           c2.26-6.97,3.04-14.15,2.76-21.46c-0.1-2.54-0.07-5.09,0.02-7.63c0.11-3.05,1.57-5.1,4.63-5.91c3.88-1.02,7.85-1.87,11.81-1.08
                           c2.2,0.44,4.33,0.12,6.48,0.32c0.96,0.6,7.1,2.04,9.5,2.24c0.36,0.01,0.76-0.08,1.08,0.05c4.87,2.03,5.23,1.89,5.41-3.07
                           c0.33-9.07,0.06-18.13-0.78-27.17c-1.01-10.8-2.37-21.55-4.81-32.1c-7.28,0.42-14.07,2.12-20.71,4.35
                           c-5.63,1.89-9.9-0.25-13.59-4.19c-1.09-1.17-1.85-2.69-2.61-4.13c-8.01-15.18-12.06-31.84-17.79-47.86
                           c-1.37-3.84-0.39-5.32,3.17-7.62c6.41-4.14,12.82-8.25,19.18-12.46c3.33-2.21,3.35-2.74,1.04-5.95
                           c-10.67-14.83-25.62-24.2-41.03-32.73c-1.64,0.86-1.85,2.23-2.39,3.33c-4.5,9.11-8.76,18.36-14.69,26.67
                           c-2.31,3.24-4.78,6.41-7.47,9.35c-2.57,2.82-3.85,2.67-7.05,0.73c-2.3-1.39-3.83-3.32-4.84-5.69c-2.13-5.03-5.78-8.68-10.16-11.75
                           c-1.78-1.25-3.61-2.48-5.18-3.97c-4.69-4.49-7.36-9.68-5.95-16.51c1.21-5.85,2.08-11.76,3.59-17.55c0.8-3.04,0.54-3.23-2.77-3.55
                           c-3.6-0.35-7.2-0.8-10.81-0.95c-5.98-0.26-10.24-2.9-12.97-8.28c-0.96-1.89-1.91-3.94-3.8-5.23c-0.03-1.58-0.91-1.71-2.16-1.28
                           c-2.56,0.88-5.16,1.66-7.69,2.6c-3.52,1.3-7.02,1.71-10.53,0.05c-1.9-0.9-3.67-0.7-5.73-0.24c-9,2.03-17.87,4.48-26.31,8.19
                           c-4.33,1.91-8.93,3.45-13.61,6.68C1035.66,375.41,1037.6,377.94,1039.43,380.59z M1691.63,537.78c0.8-0.61,0.64-1.02-0.26-1.29
                           c-5.9-3.55-11.85-7.03-18.06-10.04c-5.73-2.78-10.08-6.94-12.72-12.87c-1.66-3.73-2.11-7.46-0.02-10.97
                           c4.75-7.97,8.77-16.28,12.32-24.84c1.34-3.24,3.9-4.9,7.34-5.82c7.93-2.12,15.82-3.86,24.08-2.14c1.41,0.29,2.89,0.25,4.33,0.38
                           c1.86,0.17,2.94-0.36,3.44-2.46c1.1-4.58,2.75-9.03,3.79-13.61c0.89-3.91,3.16-5.89,6.93-6.62c1.61-0.31,3.19-0.49,4.84-0.46
                           c3.84,0.07,3.87-0.03,3.98-3.95c0.3-10.72-0.23-21.41-1.56-32.03c-0.3-2.42,0.29-5.48-1.63-7.2c-1.81-1.62-4.55-0.07-6.86-0.37
                           c-0.36-0.05-0.72-0.08-1.09-0.09c-8.5-0.23-16.95-1.31-25.43-1.77c-3.66-0.2-5.52-1.66-7.31-4.43c-2.22-3.43-2.94-7.08-2.04-10.91
                           c1.67-7.1,0.45-14.02-0.75-20.99c-0.55-3.2-1.55-6.35-1.41-9.66c0.12-2.86,1.35-5.09,4.23-5.58c7.97-1.35,14.72-5.78,22.57-8.48
                           c-8.88-18.29-20.68-33.97-35.95-46.95c-6.61,10.23-15.89,16.38-26.38,20.89c-6.52,2.81-7.9,2.34-12.74-3.04
                           c-0.61-0.67-1.17-1.39-1.74-2.1c-5.2-6.53-10.35-13.1-15.6-19.58c-2.66-3.28-4.37-7.1-6.34-10.76c-2.06-3.81-1.82-7.59,0.68-11.31
                           c1.36-2.03,3.03-4,3.51-6.71c-16.42-6.1-33.32-9.12-50.44-11.12c-2.26-0.26-3.24,0.42-3.21,2.91c0.15,10.28-3.65,19.45-8.32,28.34
                           c-2.6,4.94-6.62,7.99-12.12,9.23c-3.04,0.69-6.08,1.13-9.15,0.94c-6.9-0.42-13.8-0.48-20.7-0.08c-1.29,0.07-2.54,0.05-3.68-0.64
                           c-4.14-2.47-5.9-6.73-8.05-10.71c-1.42-2.62-1.43-5.11-0.03-7.77c0.46-0.88,0.35-2.15,0.26-3.21c-0.45-5.39-1.25-10.73-2.74-16.45
                           c-28.92,4.98-53.79,18-76.93,35.77c3.57,3.22,6.8,6.08,9.97,9.02c1.33,1.24,2.46,1.95,4.61,1.99c5.46,0.11,7.71,3.02,7.24,8.41
                           c-0.41,4.75-2.09,9.17-4.07,13.46c-5.67,12.27-14.37,22.67-21.04,34.34c-2,3.51-4.42,4.03-8.44,2.58
                           c-5.62-2.03-11.11-4.43-16.69-6.58c-5.94-2.28-10.9-5.58-13.52-11.71c-0.6-1.4-1.62-2.61-2.74-4.36
                           c-11.05,15.11-19.33,30.92-25.2,48.01c-0.64,1.85,0.24,2.56,1.77,3.25c5.61,2.55,11.17,5.23,16.76,7.84
                           c5.37,2.52,10.41,5.59,16.94,4.7c3.94-0.53,6.36,2.19,5.62,5.42c-1.07,4.72-2.35,9.44-6.2,12.96c-5.15,4.72-7.07,15.38-4.07,21.95
                           c0.81,1.77,0.71,3.61,0.49,5.35c-0.73,5.6-3.26,10.6-5.83,15.52c-1.11,2.13-3.18,2.68-5.65,1.83c-9.25-3.18-19.13-1.94-28.81-4.62
                           c1.43,23.34,5.68,45.34,14.55,66.37c2.28-0.59,3.55-1.96,4.92-3.1c5.46-4.5,11.03-8.89,16.22-13.69c2.56-2.37,5.39-3.53,8.61-4.18
                           c5.35-1.08,8.64,0.66,10.8,5.72c1.78,4.17,3.28,8.47,5.27,12.53c3.13,6.35,6.31,12.8,12.45,16.89c2.68,1.79,3.2,3.9,2.9,6.91
                           c-0.62,6.18-3.08,11.5-6.73,16.35c-5.21,6.92-10.42,13.85-16.7,19.95c0.54,0.62,0.85,1.05,1.23,1.4
                           c17.2,15.74,37.26,26.27,59.52,32.88c2.53,0.75,3.66,0.18,4.38-2.26c3.09-10.42,6.73-20.66,9.42-31.2c0.32-1.24,0.4-2.26,0.25-3.54
                           c-0.39-3.33,0.42-4.01,3.96-5.18c5.1-1.69,10.22-1.79,15.49-1.02c7.69,1.13,15.36,2.13,22.51,5.54c2.26,1.08,3.24,2.45,3.35,4.97
                           c0.33,7.41,1.24,14.82,1.28,22.23c0.04,6.67,2.04,13.31,0.21,20.01c-0.5,1.84,1.12,2,2.36,2.1c4.15,0.32,8.3,0.5,12.45,0.84
                           c5.55,0.45,10.69-0.79,15.87-2.81c12.67-4.95,25.48-9.51,38.24-14.24c1.3-0.48,2.87-0.48,3.69-2.13c-1.3-2.31-2.81-4.6-3.93-7.07
                           c-2.73-5.99-7.69-10.48-10.76-16.22c-2.83-5.3-2.17-8.11,2.9-11.47c7.74-5.13,15.1-10.77,21.78-17.19
                           c4.46-4.29,9.86-5.96,15.55-7.02c7.13-1.32,11.78,1.11,14.99,7.65c3.05,6.22,6.33,12.32,10.95,17.48c4.3,4.79,5.68,9.9,3.51,15.97
                           c-0.08,0.22,0.25,0.58,0.5,1.14c4.17-1.81,8.08-4.07,11.51-7.06c13.26-11.56,24.2-25.01,32.79-40.39c1.46-2.61,2.69-4.9,0.21-7.75
                           C1689.82,537.93,1690.73,537.85,1691.63,537.78z M42.69,569.35c-0.21,5.04-0.21,5.05,4.96,6.02c2.13,0.4,4.29,0.69,6.42,1.08
                           c15.69,2.87,31.09,7.02,46.66,10.39c37.47,8.11,74.08,19.01,109.62,33.47c55.8,22.69,112.18,43.8,169.59,62.07
                           c47.91,15.24,94.78,33.22,140.9,53.19c40.11,17.37,79.85,35.6,120.11,52.63c34.42,14.57,69.1,28.21,106.5,33.23
                           c1.6,0.22,2.38-0.01,2.82-1.44c0.26-0.86,0.42-1.76,0.64-2.64c5.2-20.73,9.18-41.73,13.79-62.59
                           c7.27-32.92,15.43-65.59,24.19-98.12c5.89-21.88,13.76-43.17,19.3-65.15c6.41-25.47,14.74-50.4,20.79-76
                           c9.24-39.13,18.96-78.15,28.11-117.31c1.98-8.47,3.5-17.01,4.94-25.58c0.42-2.52,0.09-4-3.03-4.31c-4.17-0.41-7.47-3.05-9.97-6.11
                           c-1.72-2.11-3.75-2.74-5.99-3.13c-16.29-2.83-32.2-7.19-47.94-12.07c-51.45-15.94-103.77-28.65-155.94-41.88
                           c-22.66-5.74-45.66-10.22-67.8-17.9c-46.6-16.16-93.45-31.56-140.67-45.8c-25.85-7.8-51.66-15.76-78.26-20.75
                           c-21.37-4.01-42.61-8.62-63.65-14.15c-28.91-7.59-57.68-15.76-87-21.71c-8.52-1.73-17.12-2.89-25.75-3.91
                           c-2.25-0.27-2.95,0.39-3.76,2.51c-1.62,4.22-3.65,8.32-5.92,12.24c-7.08,12.22-11.36,25.46-14.75,39.05
                           c-3.77,15.12-7.33,30.29-11.4,45.32c-7.68,28.4-18.67,55.7-28.34,83.44c-5.18,14.87-11.97,29.09-15.91,44.48
                           c-7.23,28.29-15.57,56.29-25.97,83.61c-6.52,17.12-13.5,34.06-19.96,51.21C46.76,551.36,43.32,559.99,42.69,569.35z M786.96,189.09
                           c5.95,3.43,11.94,4.6,17.26,7.23c19.04,9.43,39.25,16.05,58.66,24.61c15.47,6.83,30.35,14.7,45.15,22.77
                           c12.91,7.04,25.86,13.98,39.42,19.73c7.63,3.23,15.15,4.31,22.55-0.63c0.88-0.59,2.02-0.78,3.02-1.21
                           c5.99-2.58,12.47-4.23,17.94-7.8c14.86-9.7,31.57-15.45,47.56-22.68c11.88-5.37,24.23-9.68,36.11-15.11
                           c11.86-5.43,23.87-10.56,35.96-15.48c23.83-9.7,47.92-18.76,72.01-27.79c20.71-7.76,41.76-14.42,63.11-20.17
                           c4.97-1.34,10.13-2.21,15.32-4.95c-9.25-4.78-18.46-8.15-27.77-10.97c-15.46-4.69-30.57-10.26-45.66-15.96
                           c-12.2-4.61-24.4-9.28-37-12.7c-18.25-4.96-35.99-11.21-52.88-19.74c-9.75-4.92-19.87-8.88-30.29-12.06
                           c-6.51-1.99-12.59-1.58-18.68,2.29c-18.43,11.71-38.28,20.71-58.2,29.51c-11.44,5.05-23.36,8.98-34.45,14.86
                           c-4.31,2.28-8.95,3.94-13.46,5.85c-10.01,4.25-20,8.54-30.04,12.71c-12.05,5.01-24.11,9.97-36.22,14.84
                           c-9.58,3.85-19.37,7.16-28.75,11.56c-9.35,4.38-18.88,8.36-28.82,11.32C808.42,182.23,798.1,185.6,786.96,189.09z M888.29,33.67
                           c-2.77,0.4-5.44-1.08-8.2-0.96c-9.82,0.42-19.53-1.13-29.32-1.35c-8.13-0.18-16.25-1.26-24.41-1.03c-0.54,0.02-1.09-0.07-1.62-0.2
                           c-6.28-1.56-12.71-1.16-18.96-0.55c-10.24,1-20.52,1.52-30.74,2.83c-6.44,0.82-12.88,1.58-19.18,3.07
                           c-16.51,3.91-32.84,8.51-49.23,12.9c-11.18,2.99-22.42,5.71-33.38,9.45c-2.57,0.88-5.01,2.18-7.63,2.86
                           c-11.69,3.05-23.45,5.86-35.14,8.91c-11.17,2.91-22.37,5.79-33.59,8.35c-22.45,5.12-44.2,12.46-66.06,19.42
                           c-13.64,4.34-27.25,8.73-41.15,12.19c-14.75,3.67-29.47,7.42-44.31,10.7c-10.04,2.22-20.26,3.6-30.38,5.51
                           c-19.92,3.75-39.52,8.9-59.13,13.98c-13.32,3.45-26.48,7.45-38.19,15.26c-6.21,4.14-9.34,10.36-13.13,16.22
                           c-0.85,1.31-0.64,2.42,0.98,2.98c0.85,0.3,1.7,0.65,2.58,0.83c11.28,2.33,22.56,4.68,33.86,6.94c10.19,2.04,20.55,2.97,30.73,5.27
                           c8.77,1.98,17.62,3.71,26.39,5.76c6.89,1.61,7.04,1.5,6.9-5.5c-0.04-2.02,0.25-4.35-2.32-4.88c-5.73-1.2-5.64-5.89-6.33-10.1
                           c-0.35-2.15,0.56-3.65,2.49-4.96c5.42-3.67,11.53-5.42,17.82-6.12c6.51-0.72,12.86-1.96,19.14-3.65c7.87-2.12,15.6-4.76,23.51-6.65
                           c6.65-1.59,13.51-2.35,20.24-3.64c13.31-2.56,26.44-5.91,39.8-8.31c13.5-2.43,26.84-5.73,39.94-10.02
                           c5.62-1.84,11.37-3.53,17.16-4.88c9.14-2.13,18.18-4.65,27.19-7.25c13.86-4.01,27.58-8.53,41.54-12.14
                           c10.16-2.63,20.2-5.48,30.21-8.64c15.66-4.95,31.83-8.25,47.41-13.54c7.71-2.61,15.42-5.22,23.11-7.88
                           c8.37-2.9,16.73-5.83,25.08-8.8c6.63-2.35,13.38-4.44,19.81-7.25c6.35-2.77,13.02-4.47,19.58-6.34c11.27-3.2,22.83-5.39,34.25-8.07
                           c3.87-0.91,7.65-2.23,11.54-3.02c10.06-2.03,20.16-3.87,30.24-5.82C887.9,35.43,888.35,35,888.29,33.67z M1487.6,639.22
                           c-8.9-4.04-18.05-6.26-27.14-8.64c-2.39-0.63-3.44,0.87-3.96,3.27c-1.08,4.96-5.23,7.17-10.13,5.64
                           c-6.93-2.17-13.63-4.95-20.23-7.96c-9.94-4.53-19.22-10.19-27.93-16.77c-2.05-1.55-3.66-2.22-5.42,0.25
                           c-1.41,1.97-3.49,2.3-5.81,2.28c-4.86-0.04-9.3-1.49-13.43-3.87c-2.74-1.58-5.13-1.64-8.18-0.35
                           c-22.05,9.31-44.31,18.07-66.82,26.2c-7.15,2.58-14.41,4.92-21.37,8.07c-1.99,0.9-3.5,1.93-3.85,4.1
                           c-0.71,4.36-2.76,8.24-4.2,12.34c-6.6,18.79-16.1,36.06-27.57,52.29c-0.69,0.98-2.07,1.64-1.48,3.4c1.48,0.65,3.02,0.3,4.63-0.02
                           c8.34-1.67,16.51-4.05,24.74-6.18c12.44-3.23,25.06-5.91,37.15-10.26c14.66-5.27,28.76-12.02,43.49-17.16
                           c10.78-3.76,21.67-7.06,32.77-9.78c9.5-2.32,19.16-3.74,28.66-5.88c10.22-2.31,20.19-5.77,30.23-8.85
                           c11.78-3.62,23.51-7.36,35.26-11.06c1.16-0.36,2.8-0.31,2.87-1.97C1480.1,643.5,1484.11,642.1,1487.6,639.22z M769.7,830.96
                           c5.57-0.86,10.47-0.94,15.34-0.68c2.96,0.16,4.04-1.07,4.74-3.72c3.08-11.55,6.57-23,9.47-34.6c3.78-15.11,9.33-29.74,12.17-45.11
                           c2.17-11.75,4.76-23.41,7.54-35.04c4.59-19.2,10.2-38.15,14.15-57.5c3.04-14.89,5.6-29.88,8.65-44.77
                           c3.5-17.06,8.96-33.6,13.69-50.34c7.44-26.33,13.99-52.91,22.9-78.82c6.9-20.06,14.31-39.94,20.27-60.31
                           c3.66-12.52,6.89-25.16,9.86-37.86c0.49-2.1,0.92-3.98-2.01-4.53c-6.69-1.25-13.37-2.53-20.33-3.85c-0.4,3.78-0.76,6.99-1.08,10.2
                           c-1.01,10.08-2.03,20.15-4.31,30.04c-2.28,9.87-4.86,19.69-6.7,29.65c-3.32,17.97-6.06,36.03-10.99,53.68
                           c-5.75,20.58-9.87,41.62-17.55,61.66c-3.18,8.3-5.16,16.86-6.89,25.62c-6.06,30.72-12.98,61.23-21.23,91.48
                           c-8.93,32.74-18.76,65.18-31.07,96.74C779.04,791.57,774.63,810.84,769.7,830.96z M1354.79,603.5c-0.09-0.61-0.03-1.03-0.21-1.28
                           c-0.43-0.57-0.91-1.17-1.5-1.56c-8.04-5.38-14.82-12.13-21.25-19.28c-1.33-1.47-2.72-2.87-4.59-3.77
                           c-4.23-2.04-7.34-5.25-9.26-9.57c-0.95-2.14-2.92-4.06-2.75-6.41c0.17-2.38,3.32-2.5,4.57-4.31c3.6-5.2,9.14-7.38,14.78-9.4
                           c1.53-0.55,2.95-1.32,4.61-1.59c2.51-0.41,2.81-1.88,2.48-4.38c-0.63-4.63-2.96-6.82-7.46-7.73c-11.34-2.31-22.57-5.37-34.32-4.32
                           c-0.36,0.03-0.73-0.03-1.09,0.02c-2.37,0.38-3.64-0.81-4.61-2.86c-2.81-5.9-5.75-11.75-8.69-17.59c-0.5-0.99-0.57-2.5-2.27-2.51
                           c-0.43,1.68-0.19,3.3,0.08,4.91c1.66,9.81,2.98,19.65,3.05,29.62c0.01,1.63-0.19,3.34,0.2,4.89c1.58,6.29,0.44,12.66,0.78,18.99
                           c0.13,2.37-1.02,3.54-3.32,4.2c-2.33,0.68-4.65,0.66-7,0.77c-7.22,0.34-14.55-0.84-21.65,1.23c-2.66,0.78-5.31,0.98-8.05,0.99
                           c-3.67,0.02-7.23,0.77-10.89,2.55c4.12-0.34,6.49,2.41,9.03,4.5c3.66,3.01,7.5,5.69,11.64,7.99c4.59,2.56,9.28,4.99,13.68,7.84
                           c7.69,4.97,14.72,10.38,11.34,21.43c-0.89,2.92,0.24,3.77,3.51,3.75c1.08-0.01,2.18-0.1,3.25-0.31
                           c19.92-3.76,39.59-8.58,59.05-14.25C1350.26,605.41,1352.8,604.96,1354.79,603.5z M768.21,198.96c0,5.32,0.16,10.54-0.06,15.75
                           c-0.13,3.16,0.89,5.12,3.84,6.38c3.84,1.64,7.61,3.48,10.95,6.03c3.67,2.8,7.66,4.66,12.21,5.62c3.34,0.71,6.64,1.85,9.77,3.23
                           c6.18,2.72,12.74,4.15,19.14,6.12c8.65,2.66,17.49,4.62,25.95,8.01c12.96,5.18,26.05,10.04,39.22,14.65
                           c15.93,5.57,31.82,11.18,46.97,18.69c3.72,1.85,7.69,3.04,11.8,3.93c2.77,0.6,4.28-0.36,5.27-2.47c0.57-1.2,1.43-2.57,0.7-4.27
                           c-15.05-3.44-29.11-9.65-42.85-16.72c-15.34-7.9-30.63-15.91-46.09-23.57c-9.59-4.75-19.22-9.55-29.23-13.29
                           c-20.25-7.57-39.39-17.64-59.42-25.65C773.9,200.39,771.6,198.86,768.21,198.96z M911.4,667.64c0.72,3.19,2.99,4.9,4.58,7.01
                           c5.34,7.08,10.87,14.04,16.47,20.92c1.62,1.99,3.12,4.67,6.63,3.36c1.64-0.61,2.64,0.83,3.71,1.75c1.34,1.16,1.96,3.06,4.02,3.74
                           c5.66-6.26,10.77-13.01,15.57-19.87c-0.87-1.79-2.38-2.56-3.67-3.52c-4.3-3.21-7.46-7.36-10.24-11.87
                           c-2.07-3.35-3.29-7.22-6.16-10.08c-3.68,1.47-7.47,2.72-11.01,4.48c-3.01,1.49-6.3,2.17-9.18,4.23c-2.94,2.11-6.55-0.94-9.93-0.31
                           C912.02,667.51,911.84,667.55,911.4,667.64z M1218.3,697.29c-6.05-6.08-12.87-11.06-20.36-15.14c-1.57-0.86-3.3-1.47-5.02-2.02
                           c-4.49-1.43-5.29-1.1-6.94,3.15c-2.02,5.22-3.99,10.48-6.72,15.37c-1.16,2.07-0.58,3.23,0.87,4.65
                           c4.81,4.72,8.83,10.06,11.98,16.01c0.97,1.82,1.78,2.54,3.61,0.94C1203.77,713.23,1211.64,706.05,1218.3,697.29z M1045.32,756.61
                           c9.77,2.03,19.23,3.49,28.82,3.73c4.35,0.11,8.61,1.14,13,0.85c2.23-0.15,3.05-1.13,2.62-3.04c-1.13-5.02-0.38-10.15-0.97-15.2
                           c-0.22-1.86-0.83-2.59-2.65-2.45c-3.49,0.26-6.91-0.43-10.22-1.3c-7.59-2-15.34-2.62-23.1-3.35c-1.62-0.15-3.18-0.26-3.1,1.74
                           C1049.97,744.1,1047.18,749.9,1045.32,756.61z M927.26,506.48c-6.43,14.2-11.98,28.38-15.24,43.81c7.18-1.31,13.63-1.97,20.13-1.9
                           c2.54,0.03,5.08-0.01,7.62-0.01c1.34,0,2.05-0.64,1.89-1.98c-0.88-7.37,0.1-14.45,3.13-21.24c0.47-1.05,0.48-2.07-0.77-2.76
                           C937.16,518.61,930.87,514.19,927.26,506.48z M1166.16,370.56c-4.43,0-8.83,0.5-13.06-0.14c-4.39-0.66-8.6-0.48-12.89,0.16
                           c-1.72,0.26-6.34,4.2-6.38,5.55c-0.15,5.6-0.26,11.21-0.35,16.82c-0.04,2.81,1.05,4.59,3.96,5.64c3.37,1.22,6.61,2.98,9.66,4.89
                           c2.27,1.42,3.38,1.04,4.68-1.15c4.27-7.16,8.09-14.54,11.32-22.21C1164.35,377.2,1166.36,374.48,1166.16,370.56z M1443.69,248.92
                           c-0.94-0.57-1.86-0.48-2.73-0.32c-10.11,1.84-20.26,3.51-30.32,5.63c-10.25,2.16-20.48,4.45-30.4,7.91
                           c-1.08,0.38-2.88,0.21-2.96,1.85c-0.08,1.56,1.51,1.73,2.66,2.22c6.33,2.68,12.75,5.19,18.91,8.23c3,1.48,4.97,0.86,7.29-1.04
                           c10.23-8.43,21.3-15.6,33.12-21.62C1440.8,250.99,1442.69,250.63,1443.69,248.92z M1613.39,578.11
                           c-7.8,4.61-14.74,9.86-22.54,13.66c-1.64,0.8-1.14,1.89-0.61,3.16c1.6,3.84,3.24,7.67,4.59,11.59c0.61,1.79,1.36,2.3,3.12,1.8
                           c3.13-0.88,6.32-1.55,9.43-2.47c6.33-1.88,12.68-3.75,19.08-6.41C1621.79,592.31,1617.18,585.62,1613.39,578.11z M1394.59,543.69
                           c-4.97-7.85-8.09-15.5-11.19-23.19c-7.83,3.25-14.91,6.9-22.47,9.41c-0.64,0.21-1.69,0.09-1.74,0.97
                           c-0.17,2.88-2.74,2.39-4.34,3.24c-1.21,0.64-2.95-0.04-3.98,1.64c2.33,3.06,7.01,3.95,7.98,8.31c0.05,0.2,1,0.29,1.53,0.29
                           C1371.39,544.3,1382.41,544.77,1394.59,543.69z M1719.97,365.74c-4.79,1.82-9.21,3.99-14,4.99c-2.06,0.43-2,1.74-1.96,3.19
                           c0.11,4.95-0.82,9.75-2.55,14.31c-1.05,2.78,0.14,3.56,2.32,4.15c6.8,1.84,13.59,3.72,20.52,5.03c1.23,0.23,2.4,0.87,3.66-0.3
                           C1725.92,386.6,1723.63,376.07,1719.97,365.74z M1696.07,528.01c3.67-10.24,6.03-20.21,8.22-30.42c-4.5-1.27-8.76-1.6-13.11-1.64
                           c-2.31-0.02-3.62,0.81-4.73,2.77c-2.23,3.94-4.53,7.86-7.13,11.55c-1.42,2.01-1.08,2.97,0.71,4.36
                           C1685.31,518.74,1690.68,522.75,1696.07,528.01z M1668.59,289.84c-8.68-6.77-17.69-12.02-27.01-16.79
                           c-0.83-0.42-1.61-0.75-2.45,0.04c-2.27,2.15-2.83,6.39-1.1,9.21c3.4,5.55,7.04,10.97,9.16,17.18c0.42,1.22,0.9,1.99,2.24,1.55
                           C1656.49,298.69,1663.03,295.49,1668.59,289.84z M1505.18,252.22c1.95,5,3.78,9.49,5.43,14.04c0.62,1.71,1.5,2.27,3.24,1.76
                           c4.17-1.21,8.46-1.67,12.76-2.26c6.66-0.9,9.37-5.6,7.63-12.09c-0.8-3-2.32-4.14-5.38-3.87
                           C1521.13,250.46,1513.37,250.69,1505.18,252.22z M1155.76,86.86c5.17,1.47,10.07,2.73,14.88,4.25c10.85,3.44,21.66,7,32.47,10.53
                           c1.53,0.5,3.03,1.45,4.58,0.14c2-1.69,4.32-3.05,5.85-5.58c-1.03-0.24-1.71-0.45-2.41-0.56c-12.74-1.99-25.46-4.73-36.51-11.39
                           C1167.16,79.76,1161.81,80.38,1155.76,86.86z M1333.59,433.84c0.1-0.28,0.21-0.57,0.31-0.85c-2.43-1.52-4.84-3.06-7.28-4.55
                           c-0.91-0.56-1.87-1.21-3.02-0.83c-3.58,1.2-7.14,2.46-10.92,3.76c1.99,2.44,4.58,3.04,6.61,4.49c0.74,0.53,2.06,0.79,2.29-0.25
                           c0.8-3.56,3.2-1.8,5.11-1.78C1329,433.86,1331.29,433.84,1333.59,433.84z M1374.24,595.13c-4.25-6.68-8.38-13.64-17.92-12.43
                           c-0.15,0.02-0.3,0.09-1.3,0.39C1361.32,587.91,1367.38,592.07,1374.24,595.13z M1191.44,301.21c-0.12,0.08-0.3,0.13-0.34,0.24
                           c-0.03,0.07,0.12,0.23,0.19,0.34c0.18-0.14,0.36-0.28,0.55-0.42C1191.7,301.32,1191.57,301.26,1191.44,301.21z"/>
                        <path class="st12" d="M1307.01,149.4c-1.42-0.55-2.95-0.92-4.23-1.7c-0.93-0.57-1.96-1.67-0.24-2.73
                           C1303.58,146.91,1306.79,146.65,1307.01,149.4z"/>
                        <path class="st12" d="M1308.12,150.33c-0.77,0.14-1.13-0.2-1.13-0.97C1307.65,149.36,1307.83,149.91,1308.12,150.33z"/>
                        <path class="st13" d="M42.69,569.35c0.64-9.36,4.07-18,7.32-26.61c6.46-17.14,13.44-34.09,19.96-51.21
                           c10.4-27.32,18.74-55.32,25.97-83.61c3.94-15.39,10.72-29.62,15.91-44.48c9.67-27.74,20.66-55.03,28.34-83.44
                           c4.07-15.04,7.63-30.21,11.4-45.32c3.39-13.6,7.67-26.84,14.75-39.05c2.27-3.91,4.3-8.02,5.92-12.24c0.81-2.12,1.51-2.77,3.76-2.51
                           c8.63,1.02,17.23,2.18,25.75,3.91c29.32,5.94,58.09,14.11,87,21.71c21.04,5.53,42.28,10.14,63.65,14.15
                           c26.6,4.99,52.41,12.95,78.26,20.75c47.22,14.24,94.07,29.64,140.67,45.8c22.14,7.68,45.14,12.16,67.8,17.9
                           c52.18,13.23,104.49,25.94,155.94,41.88c15.75,4.88,31.66,9.24,47.94,12.07c2.24,0.39,4.27,1.02,5.99,3.13
                           c2.5,3.06,5.81,5.71,9.97,6.11c3.12,0.3,3.45,1.79,3.03,4.31c-1.44,8.57-2.96,17.11-4.94,25.58
                           c-9.15,39.16-18.87,78.18-28.11,117.31c-6.05,25.6-14.38,50.53-20.79,76c-5.53,21.98-13.41,43.28-19.3,65.15
                           c-8.76,32.53-16.92,65.2-24.19,98.12c-4.61,20.86-8.59,41.86-13.79,62.59c-0.22,0.88-0.37,1.78-0.64,2.64
                           c-0.44,1.43-1.21,1.66-2.82,1.44c-37.4-5.02-72.08-18.66-106.5-33.23c-40.26-17.04-80-35.26-120.11-52.63
                           c-46.12-19.98-92.99-37.95-140.9-53.19c-57.41-18.27-113.8-39.38-169.59-62.07c-35.54-14.45-72.15-25.36-109.62-33.47
                           c-15.58-3.37-30.98-7.52-46.66-10.39c-2.14-0.39-4.29-0.68-6.42-1.08C42.47,574.4,42.48,574.39,42.69,569.35z M228.15,262.23
                           c-0.1,6.01,0.85,11.95,2.24,17.71c4.47,18.65,14.51,32.97,32.8,40.57c9.02,3.75,16.89,2.27,23.91-4.56
                           c6.5-6.33,12.11-13.45,18.34-20.01c5.51-5.81,8.43-12.98,10.2-20.7c1.89-8.26,0.26-15.89-4.44-22.74
                           c-4.45-6.48-10-11.96-16.98-15.77c-12.6-6.89-26.16-9.03-40.33-7.95c-7.44,0.57-13.49,3.89-18.23,9.61
                           C229.91,245.31,228.34,253.56,228.15,262.23z M749.51,394.62c-0.04-11.36-2.74-19.57-8.8-26.65
                           c-11.67-13.62-26.89-21.13-43.84-25.69c-4.54-1.22-9.28-1.92-13.92-1.71c-8.26,0.38-13.55,5.58-17.09,12.56
                           c-6.59,12.98-10.29,26.68-9.06,41.38c0.58,6.93,2.47,13.45,6.41,19.37c7.34,11.04,17.19,19,29.09,24.58
                           c9.21,4.32,18.1,5.13,26.31-2.21c0.99-0.89,1.87-1.58,3.17-0.22c2.57,2.71,5.03,1.24,7.12-0.68
                           C741.47,423.82,748.45,409.57,749.51,394.62z"/>
                        <path class="st14" d="M1691.63,537.78c-0.9,0.07-1.8,0.15-3.3,0.27c2.49,2.85,1.25,5.14-0.21,7.75
                           c-8.6,15.38-19.53,28.83-32.79,40.39c-3.43,2.99-7.34,5.24-11.51,7.06c-0.26-0.56-0.58-0.92-0.5-1.14
                           c2.17-6.07,0.79-11.18-3.51-15.97c-4.63-5.15-7.9-11.26-10.95-17.48c-3.21-6.54-7.86-8.97-14.99-7.65
                           c-5.69,1.06-11.09,2.73-15.55,7.02c-6.68,6.42-14.04,12.05-21.78,17.19c-5.07,3.36-5.72,6.17-2.9,11.47
                           c3.07,5.74,8.03,10.23,10.76,16.22c1.12,2.46,2.63,4.75,3.93,7.07c-0.82,1.65-2.39,1.65-3.69,2.13
                           c-12.75,4.73-25.57,9.29-38.24,14.24c-5.18,2.02-10.32,3.26-15.87,2.81c-4.15-0.34-8.3-0.52-12.45-0.84
                           c-1.24-0.1-2.86-0.26-2.36-2.1c1.83-6.7-0.17-13.34-0.21-20.01c-0.04-7.41-0.95-14.81-1.28-22.23c-0.11-2.52-1.1-3.89-3.35-4.97
                           c-7.14-3.41-14.82-4.41-22.51-5.54c-5.27-0.77-10.39-0.67-15.49,1.02c-3.54,1.17-4.35,1.85-3.96,5.18
                           c0.15,1.28,0.07,2.31-0.25,3.54c-2.7,10.54-6.34,20.79-9.42,31.2c-0.72,2.43-1.86,3.01-4.38,2.26
                           c-22.26-6.6-42.33-17.13-59.52-32.88c-0.38-0.35-0.69-0.78-1.23-1.4c6.28-6.11,11.49-13.03,16.7-19.95
                           c3.65-4.85,6.11-10.18,6.73-16.35c0.3-3.01-0.22-5.12-2.9-6.91c-6.14-4.09-9.32-10.53-12.45-16.89c-2-4.06-3.5-8.36-5.27-12.53
                           c-2.16-5.06-5.44-6.8-10.8-5.72c-3.22,0.65-6.05,1.81-8.61,4.18c-5.19,4.8-10.76,9.19-16.22,13.69c-1.38,1.13-2.64,2.5-4.92,3.1
                           c-8.87-21.03-13.12-43.03-14.55-66.37c9.67,2.68,19.56,1.45,28.81,4.62c2.46,0.85,4.53,0.3,5.65-1.83
                           c2.57-4.92,5.1-9.92,5.83-15.52c0.23-1.74,0.32-3.57-0.49-5.35c-3-6.57-1.08-17.23,4.07-21.95c3.84-3.53,5.13-8.24,6.2-12.96
                           c0.73-3.23-1.68-5.95-5.62-5.42c-6.53,0.88-11.57-2.19-16.94-4.7c-5.59-2.62-11.15-5.29-16.76-7.84c-1.53-0.69-2.4-1.4-1.77-3.25
                           c5.87-17.09,14.15-32.9,25.2-48.01c1.11,1.75,2.14,2.96,2.74,4.36c2.61,6.13,7.58,9.43,13.52,11.71
                           c5.58,2.14,11.07,4.54,16.69,6.58c4.02,1.45,6.44,0.93,8.44-2.58c6.66-11.67,15.37-22.07,21.04-34.34
                           c1.98-4.29,3.66-8.71,4.07-13.46c0.46-5.39-1.78-8.31-7.24-8.41c-2.15-0.04-3.28-0.75-4.61-1.99c-3.16-2.94-6.4-5.8-9.97-9.02
                           c23.13-17.77,48-30.79,76.93-35.77c1.49,5.72,2.28,11.06,2.74,16.45c0.09,1.07,0.2,2.34-0.26,3.21c-1.4,2.66-1.38,5.15,0.03,7.77
                           c2.15,3.98,3.91,8.23,8.05,10.71c1.14,0.68,2.39,0.71,3.68,0.64c6.9-0.39,13.8-0.33,20.7,0.08c3.07,0.19,6.12-0.25,9.15-0.94
                           c5.5-1.24,9.52-4.29,12.12-9.23c4.67-8.88,8.47-18.06,8.32-28.34c-0.04-2.49,0.95-3.17,3.21-2.91c17.12,2,34.02,5.02,50.44,11.12
                           c-0.48,2.7-2.15,4.68-3.51,6.71c-2.5,3.72-2.74,7.5-0.68,11.31c1.97,3.66,3.68,7.48,6.34,10.76c5.25,6.48,10.4,13.05,15.6,19.58
                           c0.56,0.71,1.13,1.42,1.74,2.1c4.85,5.38,6.22,5.85,12.74,3.04c10.49-4.52,19.78-10.66,26.38-20.89
                           c15.27,12.98,27.08,28.66,35.95,46.95c-7.85,2.7-14.59,7.13-22.57,8.48c-2.87,0.49-4.1,2.71-4.23,5.58
                           c-0.14,3.31,0.86,6.46,1.41,9.66c1.2,6.97,2.42,13.89,0.75,20.99c-0.9,3.83-0.18,7.48,2.04,10.91c1.79,2.77,3.65,4.23,7.31,4.43
                           c8.48,0.46,16.92,1.54,25.43,1.77c0.36,0.01,0.73,0.05,1.09,0.09c2.31,0.29,5.06-1.25,6.86,0.37c1.92,1.72,1.33,4.77,1.63,7.2
                           c1.33,10.62,1.86,21.31,1.56,32.03c-0.11,3.92-0.14,4.02-3.98,3.95c-1.66-0.03-3.23,0.15-4.84,0.46c-3.77,0.72-6.05,2.71-6.93,6.62
                           c-1.04,4.59-2.69,9.04-3.79,13.61c-0.5,2.09-1.59,2.62-3.44,2.46c-1.45-0.13-2.92-0.09-4.33-0.38c-8.26-1.72-16.15,0.02-24.08,2.14
                           c-3.44,0.92-5.99,2.58-7.34,5.82c-3.55,8.56-7.58,16.86-12.32,24.84c-2.09,3.51-1.64,7.24,0.02,10.97
                           c2.64,5.93,6.99,10.09,12.72,12.87c6.21,3.01,12.16,6.48,18.06,10.04C1691.45,536.92,1691.54,537.35,1691.63,537.78z"/>
                        <path class="st14" d="M1244.04,562.35c-2.15-0.2-4.28,0.12-6.48-0.32c-3.96-0.79-7.93,0.06-11.81,1.08
                           c-3.06,0.81-4.52,2.86-4.63,5.91c-0.09,2.54-0.11,5.09-0.02,7.63c0.28,7.31-0.5,14.49-2.76,21.46c-0.58,1.8-0.77,3.55-0.18,5.32
                           c3.34,9.9,9.04,17.71,19.3,21.35c4.24,1.5,8.52,2.88,13.45,4.54c-4.98,3.01-6.06,6.72-4.12,11.3c0.67,1.58,0.75,3.13,0.16,4.75
                           c-5.6,15.42-12.74,30.05-22.18,43.5c-0.19,0.27-0.6,0.38-1.12,0.69c-5.34-5.81-10.72-11.67-16.83-16.78
                           c-3.49-2.92-7.25-5.45-11.34-7.48c-8.62-4.27-17.61-1.62-22.34,6.69c-2.96,5.2-5.53,10.62-8.91,15.59
                           c-1.76,2.58-3.75,4.87-6.52,6.43c-5.01,2.82-5.96,5.5-3.52,10.57c2.6,5.4,5.56,10.58,9.84,14.92c1.9,1.93,3.54,4.12,5.19,6.28
                           c1.79,2.36,2.56,4.97,2.76,8.04c0.15,2.22-0.31,3.42-2.07,4.38c-18.23,9.92-36.84,18.75-57.83,21.16
                           c-3.78,0.43-7.54,0.92-11.34,1.03c-0.88,0.03-1.76-0.08-2.74-0.13c-0.81-4.04,0.72-7.68,0.67-11.42
                           c-0.08-5.44,0.15-10.89,0.19-16.34c0.03-3.83-1.54-6.69-5.32-7.96c-10.12-3.38-19.87-7.89-30.4-10.05
                           c-2.65-0.54-5.46-0.98-7.82-2.2c-6.58-3.41-12.69-0.7-18.84,1.02c-3.09,0.86-4.33,3.86-5.18,6.62c-1.39,4.49-2.41,9.1-3.54,13.66
                           c-1.18,4.77-2.54,9.42-5.23,13.64c-1.26,1.97-2.32,2.84-4.75,2c-25.38-8.73-48.42-21.29-67.82-40.96
                           c8.66-4.35,15.63-10.61,23.08-16.22c1.17-0.88,2.27-1.51,3.96-1.21c2.62,0.47,4.4-0.98,5.59-3.32c1.9-3.72,3.31-7.63,4.41-11.63
                           c1.1-4,0.18-5.83-3.42-8.27c-2.7-1.83-5.6-3.4-8.15-5.42c-7.51-5.95-11.67-13.73-12.11-23.38c-0.06-1.27,0.06-2.56-0.12-3.81
                           c-0.26-1.79-0.54-3.99-2.09-4.86c-4.14-2.31-8-5.18-13.48-4.12c-10.02,1.94-19.69,4.79-29.04,8.84c-1.95,0.84-3.79,2.07-6.22,2.16
                           c-1.69-3.67-2.05-7.65-2.82-11.52c-4.16-20.86-3.81-41.75-0.39-62.65c0.61-3.71,0.71-3.79,4.8-3.56
                           c12.69,0.7,25.25,2.09,37.15,7.01c2.94,1.21,4.3,0.77,5.84-1.87c2.86-4.9,5.3-10.13,5.06-15.84c-0.18-4.43,1.59-7.72,3.97-10.92
                           c4.71-6.32,8.13-13.28,9.91-20.89c2.35-10.06,0.67-12.41-6.81-16.56c-6.97-3.87-14.08-7.51-20.96-11.55
                           c-3.62-2.12-7.3-2.93-12.16-2.02c13.5-26.56,28.19-51.43,47.21-73.56c0.67,0.01,1.34,0.02,2.02,0.03
                           c5.81,11.86,13.37,22.36,23.94,30.47c4.78,3.67,6.67,3.58,11.63-0.05c2.05-1.5,4.07-3.05,6.09-4.59c3.37-2.58,6.82-4.67,11.43-4.1
                           c2.92,0.36,5.38-1.15,6.77-3.72c3.33-6.19,6.28-12.61,7.53-19.56c0.98-5.45,0.17-10.76-2.78-15.7c-3.17-5.31-6.53-10.47-10.38-15.3
                           c0.15-1.55,1.34-2.01,2.55-2.46c3.39-1.27,6.73-2.69,10.17-3.79c10-3.19,20.04-6.24,30.06-9.37c5.36-1.68,10.57-3.73,15.39-6.65
                           c1.89,1.28,2.84,3.33,3.8,5.23c2.73,5.38,6.99,8.02,12.97,8.28c3.61,0.16,7.21,0.6,10.81,0.95c3.31,0.32,3.57,0.51,2.77,3.55
                           c-1.52,5.79-2.38,11.71-3.59,17.55c-1.42,6.83,1.26,12.02,5.95,16.51c1.56,1.5,3.4,2.73,5.18,3.97c4.38,3.07,8.04,6.72,10.16,11.75
                           c1.01,2.38,2.54,4.3,4.84,5.69c3.2,1.94,4.48,2.09,7.05-0.73c2.68-2.94,5.15-6.1,7.47-9.35c5.93-8.31,10.19-17.56,14.69-26.67
                           c0.54-1.1,0.75-2.47,2.39-3.33c15.42,8.53,30.37,17.9,41.03,32.73c2.31,3.21,2.29,3.74-1.04,5.95
                           c-6.36,4.21-12.77,8.33-19.18,12.46c-3.56,2.3-4.55,3.78-3.17,7.62c5.73,16.03,9.78,32.68,17.79,47.86
                           c0.76,1.44,1.52,2.96,2.61,4.13c3.69,3.94,7.95,6.09,13.59,4.19c6.64-2.23,13.43-3.93,20.71-4.35c2.44,10.55,3.8,21.31,4.81,32.1
                           c0.85,9.03,1.12,18.1,0.78,27.17c-0.18,4.95-0.54,5.09-5.41,3.07c-0.31-0.13-0.72-0.04-1.07-0.06
                           C1251.09,560.79,1247.67,561.13,1244.04,562.35z M983.01,416.49c-0.52,0.44-1.08,0.88-0.62,1.67c0.04,0.07,0.34,0.08,0.35,0.05
                           c0.21-0.46,0.38-0.93,0.57-1.4c0.42-0.17,0.95-0.48,0.53-0.89C983.39,415.5,983.16,416.09,983.01,416.49z"/>
                        <path class="st12" d="M464.86,169.78c0.69-0.11,1.39-0.23,2.08-0.34c0.92,0.38,1.69,0.15,2.32-0.6
                           c25.72-4.21,51.57-7.81,77.14-12.81c26.68-5.21,53.09-11.77,79.62-17.73c30.42-6.83,60.82-13.7,91.26-20.44
                           c13.84-3.06,27.21-7.65,40.76-11.72c21.41-6.42,41.83-15.56,63.09-22.37c31.79-10.18,63.44-20.77,94.72-32.47
                           c11.4-4.26,22.97-8.11,34.45-12.14c0.86-0.3,1.69-0.68,2.57-0.9c3.04-0.78,6.33-4.06,8.66-2.71c2.3,1.34,3.06,5.43,4.33,8.39
                           c2.4,5.57,6.04,9.52,12.01,11.65c10.42,3.71,20.65,7.98,30.96,12.02c2.14,0.84,4.26,1.73,6.66,2.72c-1.48,1.94-3.49,2.38-5.23,3.22
                           c-13.25,6.38-26.92,11.79-40.41,17.64c-25.48,11.05-50.69,22.7-75.87,34.41c-17.12,7.95-34.72,14.89-51.3,23.98
                           c-21.29,11.68-44.01,19.73-67.1,26.89c-3.64,1.13-7.29,2.23-10.86,3.57c-6.44,2.42-8.92,9.85-4.83,15.45
                           c1.37,1.88,1.72,3.28,1.23,5.35c-1.46,6.16-1.9,12.5-3.33,18.7c-0.9,3.9,1.32,7.76,3.96,10.88c1.99,2.36,4.35,4.36,6.93,6.12
                           c1.11,0.75,2.82,1.13,2.78,3.03c-1.27,0.57-2.44,0.05-3.64-0.3c-58.43-16.73-117.85-29.28-177.33-41.48
                           c-41.7-8.55-83.53-16.48-125.17-25.37c-0.53-0.11-1.09-0.1-1.63-0.15C463.34,171.09,464.41,170.58,464.86,169.78z"/>
                        <path class="st15" d="M786.96,189.09c11.13-3.49,21.46-6.86,31.86-9.96c9.94-2.96,19.47-6.94,28.82-11.32
                           c9.38-4.39,19.17-7.71,28.75-11.56c12.11-4.86,24.17-9.83,36.22-14.84c10.04-4.17,20.04-8.46,30.04-12.71
                           c4.5-1.91,9.15-3.57,13.46-5.85c11.1-5.88,23.02-9.81,34.45-14.86c19.92-8.8,39.77-17.8,58.2-29.51
                           c6.09-3.87,12.18-4.28,18.68-2.29c10.42,3.18,20.54,7.14,30.29,12.06c16.89,8.53,34.63,14.79,52.88,19.74
                           c12.6,3.42,24.79,8.09,37,12.7c15.09,5.7,30.2,11.27,45.66,15.96c9.3,2.82,18.51,6.19,27.77,10.97c-5.2,2.73-10.35,3.61-15.32,4.95
                           c-21.35,5.75-42.4,12.41-63.11,20.17c-24.09,9.03-48.18,18.09-72.01,27.79c-12.08,4.92-24.09,10.05-35.96,15.48
                           c-11.88,5.43-24.23,9.74-36.11,15.11c-16,7.23-32.71,12.98-47.56,22.68c-5.47,3.57-11.94,5.22-17.94,7.8
                           c-1,0.43-2.14,0.62-3.02,1.21c-7.4,4.94-14.92,3.87-22.55,0.63c-13.56-5.74-26.51-12.68-39.42-19.73
                           c-14.8-8.08-29.68-15.94-45.15-22.77c-19.41-8.57-39.62-15.18-58.66-24.61C798.9,193.69,792.91,192.53,786.96,189.09z
                            M971.52,135.18c-5.48,0.99-11,1.44-15.55,5.54c-6.77,6.1-14.64,10.69-22.92,14.45c-13.89,6.31-27.84,12.49-41.25,19.74
                           c-9.61,5.19-18.36,11.69-25.7,19.89c-3.13,3.5-2.72,6.5,1.25,8.96c1.08,0.67,2.27,1.15,3.4,1.74c6.75,3.52,13.87,6.23,20.48,10.1
                           c15.07,8.83,29.18,18.88,42.12,30.61c8.02,7.27,16.84,11.47,28.44,10.29c14.63-1.49,27.18-7.15,38.98-15.26
                           c7.02-4.82,13.78-9.96,20.37-15.38c10.24-8.42,21.35-15.59,33.6-20.87c2.58-1.11,4.86-2.95,4.59-6.14
                           c-0.66-7.86-2.98-15.11-10.07-19.53c-9.69-6.04-18.69-13.09-28.4-19.12c-10.88-6.75-22.7-11.89-32.95-19.75
                           C983.23,136.86,977.3,135.97,971.52,135.18z"/>
                        <path class="st12" d="M546.79,234.28c-10.32-2.73-20.64-5.48-30.89-8.51c-6.44-1.9-11.96-6.09-18.74-7.04
                           c-5.59-0.78-11.17-2.01-16.35-4.12c-11.23-4.58-23.35-5.81-34.71-9.81c-0.22-0.08-0.61,0.31-0.92,0.47c-0.68-1.23-1.35-1.21-2,0.02
                           c-6.35-2.03-12.42-4.91-19.13-5.89c-4.36-0.64-4.3-0.95-4.82-5c-0.37-2.86-0.88-5.7-1.37-8.81c5.98-0.77,11.65,1.01,17.39,0.78
                           c15.41-0.61,29.63,4.85,43.99,9.1c32.73,9.68,66.06,16.87,99.28,24.45c30.77,7.02,61.28,15.07,91.96,22.43
                           c36.19,8.68,71.49,20.4,107.27,30.48c23.09,6.5,45.49,14.93,68.06,22.9c1.51,0.53,2.99,1.01,3.68,2.86
                           c1.21,3.27,3.93,5.26,6.99,6.53c18.44,7.63,36.24,16.73,54.84,23.99c6.84,2.67,13.86,4.23,21.28,3.67
                           c3.62-0.27,7.27-0.09,10.88-0.43c4.32-0.4,8.41-1.36,12.24-3.87c8.24-5.39,17.62-8.57,26.52-12.69c4.78-2.21,9.53-4.45,14.18-6.95
                           c3.83-2.06,7.8-4.11,11.96-5.22c9.9-2.64,19.11-6.92,28.37-11.1c8.46-3.82,17.09-7.13,26.04-9.61c8.42-2.33,16.54-5.46,24.47-9.15
                           c24.71-11.5,50.11-21.4,74.94-32.62c26.5-11.97,52.28-25.44,77.19-40.49c10.92-6.6,22.29-12.29,34.16-16.87
                           c5.09-1.97,9.22-4.93,12.93-8.73c2.53-2.6,5.03-5.25,7.54-7.87c2.62,2.92,6.52,3.36,9.78,5.03c3.36,2.53,7.4,2.71,11.32,3.23
                           c5.47,0.73,10.5,2.37,14.67,6.37c-1.3,1.6-3.18,1.82-4.82,2.44c-20.37,7.68-40.91,14.93-61.08,23.09
                           c-19.33,7.82-38.62,15.83-57.11,25.55c-20.72,10.9-41.38,21.93-62.01,33c-14.72,7.9-29.79,15.11-44.89,22.25
                           c-13.47,6.37-26.53,13.51-39.76,20.32c-12.27,6.32-24.9,11.86-37.36,17.77c-12.95,6.14-25.8,12.52-38.83,18.49
                           c-11.71,5.36-23.82,9.87-35.33,15.69c-2.94,1.49-5.7,1.99-8.83,0.59c-2.74-1.23-6.19-1.32-6.97-5.18c-0.2-1.01-1.07-1.4-2.04-1.46
                           c-0.72-0.05-1.48-0.17-2.18-0.03c-6.86,1.3-12.71-1.56-18.62-4.36c-2.92-1.39-5.89-2.94-9.36-2.32c-1.33,0.24-2.46-0.48-3.66-0.88
                           c-45.04-14.93-89.55-31.35-134.09-47.68c-43.09-15.8-87.29-28.26-131.66-40.03c-1.57-0.42-3.2-0.59-4.8-0.87
                           c-0.45-0.27-0.86-0.68-1.34-0.8c-24.73-6.06-49.12-13.25-72.95-22.26C550.4,234.5,548.64,234.03,546.79,234.28z"/>
                        <path class="st15" d="M888.29,33.67c0.06,1.33-0.39,1.76-0.89,1.86c-10.08,1.95-20.18,3.79-30.24,5.82
                           c-3.89,0.79-7.67,2.11-11.54,3.02c-11.42,2.68-22.98,4.87-34.25,8.07c-6.56,1.87-13.24,3.57-19.58,6.34
                           c-6.43,2.81-13.18,4.9-19.81,7.25c-8.35,2.96-16.71,5.9-25.08,8.8c-7.69,2.66-15.4,5.26-23.11,7.88
                           c-15.59,5.29-31.75,8.59-47.41,13.54c-10.01,3.16-20.05,6.01-30.21,8.64c-13.96,3.61-27.68,8.13-41.54,12.14
                           c-9.01,2.61-18.05,5.12-27.19,7.25c-5.78,1.35-11.54,3.04-17.16,4.88c-13.1,4.29-26.44,7.59-39.94,10.02
                           c-13.35,2.41-26.49,5.75-39.8,8.31c-6.73,1.3-13.58,2.05-20.24,3.64c-7.91,1.9-15.65,4.54-23.51,6.65
                           c-6.28,1.69-12.63,2.93-19.14,3.65c-6.29,0.69-12.4,2.45-17.82,6.12c-1.93,1.31-2.84,2.81-2.49,4.96c0.69,4.21,0.6,8.9,6.33,10.1
                           c2.57,0.54,2.28,2.87,2.32,4.88c0.14,7-0.01,7.11-6.9,5.5c-8.77-2.05-17.61-3.78-26.39-5.76c-10.18-2.29-20.54-3.22-30.73-5.27
                           c-11.3-2.26-22.58-4.61-33.86-6.94c-0.88-0.18-1.73-0.53-2.58-0.83c-1.61-0.56-1.83-1.67-0.98-2.98
                           c3.79-5.87,6.92-12.08,13.13-16.22c11.71-7.81,24.87-11.81,38.19-15.26c19.6-5.07,39.21-10.22,59.13-13.98
                           c10.11-1.91,20.34-3.29,30.38-5.51c14.83-3.28,29.56-7.03,44.31-10.7c13.89-3.46,27.51-7.84,41.15-12.19
                           c21.87-6.96,43.61-14.3,66.06-19.42c11.22-2.56,22.42-5.44,33.59-8.35c11.69-3.04,23.45-5.86,35.14-8.91
                           c2.61-0.68,5.06-1.98,7.63-2.86c10.96-3.74,22.2-6.46,33.38-9.45c16.39-4.39,32.72-8.99,49.23-12.9
                           c6.31-1.49,12.74-2.24,19.18-3.07c10.22-1.31,20.5-1.83,30.74-2.83c6.25-0.61,12.68-1.02,18.96,0.55c0.52,0.13,1.08,0.21,1.62,0.2
                           c8.17-0.23,16.28,0.85,24.41,1.03c9.79,0.22,19.5,1.77,29.32,1.35C882.86,32.59,885.52,34.07,888.29,33.67z"/>
                        <path class="st15" d="M1215.39,445.93c9.65-11.33,21.05-20.64,33.46-28.74c-4.69-8.18-10.43-15.22-16.88-21.92
                           c-9.82-10.19-21.69-17.26-33.68-24.21c-4.21-2.44-8.03-5.46-12.5-7.53c-4.11-1.9-8.3-3.5-12.53-5.07c-0.89-0.33-1.86-0.77-2.3,0.34
                           c-1.51,3.85-4.8,2.36-7,1.82c-7.34-1.8-14.52-4.25-21.79-6.32c-1.99-0.57-2.99-2.64-5.06-2.96c-0.14-0.15-0.28-0.29-0.43-0.43
                           c0-2.23,1.1-4.87-2.94-5.76c5.64-2.9,11.2-3.99,16.52-5.54c12.54-3.65,24.94-7.7,37.34-11.75c24.11-7.88,48.58-14.53,72.88-21.76
                           c19.78-5.88,39.68-11.69,58.46-20.51c2.14-1.01,4.43-1.54,6.59-2.34c5.77-2.13,11.12-5.08,16.7-7.55c4.07-1.8,4.27-1.53,5.39,2.66
                           c1.05,3.91,2.55,7.26,7.05,8.85c4.09,1.44,7.04,4.99,10.29,7.86c0.89,0.79,1.27,1.91,0.25,2.85c-2.87,2.66-5.09,6.39-9.69,6.39
                           c-1.81,0-3.31,0.69-4.11,2.21c-1.55,2.94-3.24,2.07-5.24,0.58c-3.74-2.81-8.02-4.8-11.16-8.56c-2.5-3-6.32-2.06-9.74-1.53
                           c-1.06,0.17-2.09,0.56-3.14,0.84l0.11,0.12c-1.24-3.53-5.01-4.19-7.44-6.38c-0.88-0.79-2.17,1.04-2.86,2
                           c-2.74,3.84-5.62,7.62-7.91,11.72c-8.23,14.75-16.2,29.64-22.24,45.45c-3.05,7.98-4.59,16.37-6.18,24.73
                           c-0.3,1.56-0.32,3.37,0.18,4.84c0.66,1.96,2.9,0.87,4.32,1.49c0.5,0.22,1.08,0.33,1.49,0.65c4.98,3.97,10.79,4.35,16.89,4.79
                           c7.17,0.51,14.4,1.16,21.46,2.94c2.65,0.66,3.6,1.89,3.61,4.47c0.05,7.26-0.36,14.48-1.14,21.7c-0.2,1.89-1.25,2.57-2.9,2.43
                           c-5.29-0.46-10.45,0.94-15.7,1.05c-3.62,0.08-7.2,0.3-10.44-2.03c-1.42-1.02-3.33-1.2-5.21-1.21c-4.15-0.03-8.32,0.5-12.42-0.92
                           c-2.15-0.74-3.48,0.35-3.4,2.8c0.39,11.05-0.72,22.1,0.62,33.18c0.73,6.04,2.52,12.12,1.03,18.75
                           c-4.72-6.59-11.81-8.65-19.09-10.03c-7.29-1.38-14.46-2.66-21.3-6c-4.72-2.3-10.2-3.75-15.72-1.73
                           C1216,450.83,1216.03,448.25,1215.39,445.93z"/>
                        <path class="st15" d="M1487.6,639.22c-3.49,2.88-7.5,4.28-7.71,9.07c-0.07,1.66-1.71,1.6-2.87,1.97
                           c-11.75,3.7-23.48,7.45-35.26,11.06c-10.04,3.08-20.01,6.54-30.23,8.85c-9.5,2.15-19.16,3.56-28.66,5.88
                           c-11.1,2.71-22,6.01-32.77,9.78c-14.73,5.14-28.83,11.89-43.49,17.16c-12.08,4.35-24.71,7.03-37.15,10.26
                           c-8.23,2.14-16.39,4.51-24.74,6.18c-1.61,0.32-3.14,0.67-4.63,0.02c-0.58-1.76,0.79-2.42,1.48-3.4
                           c11.47-16.23,20.97-33.5,27.57-52.29c1.44-4.1,3.49-7.98,4.2-12.34c0.35-2.17,1.86-3.2,3.85-4.1c6.96-3.15,14.22-5.49,21.37-8.07
                           c22.51-8.13,44.77-16.89,66.82-26.2c3.05-1.29,5.44-1.23,8.18,0.35c4.13,2.39,8.57,3.84,13.43,3.87c2.31,0.02,4.4-0.31,5.81-2.28
                           c1.77-2.46,3.37-1.79,5.42-0.25c8.71,6.58,17.99,12.24,27.93,16.77c6.6,3.01,13.3,5.79,20.23,7.96c4.9,1.53,9.04-0.67,10.13-5.64
                           c0.52-2.4,1.58-3.9,3.96-3.27C1469.54,632.96,1478.7,635.18,1487.6,639.22z"/>
                        <path class="st13" d="M769.7,830.96c4.93-20.12,9.34-39.39,16.63-58.07c12.31-31.57,22.15-64.01,31.07-96.74
                           c8.25-30.24,15.17-60.76,21.23-91.48c1.73-8.76,3.7-17.32,6.89-25.62c7.68-20.03,11.8-41.08,17.55-61.66
                           c4.93-17.65,7.67-35.71,10.99-53.68c1.84-9.96,4.42-19.78,6.7-29.65c2.28-9.9,3.31-19.97,4.31-30.04c0.32-3.21,0.68-6.42,1.08-10.2
                           c6.96,1.32,13.64,2.6,20.33,3.85c2.93,0.55,2.5,2.43,2.01,4.53c-2.98,12.7-6.2,25.34-9.86,37.86
                           c-5.96,20.37-13.37,40.25-20.27,60.31c-8.91,25.9-15.45,52.49-22.9,78.82c-4.73,16.74-10.19,33.28-13.69,50.34
                           c-3.06,14.89-5.61,29.88-8.65,44.77c-3.95,19.35-9.56,38.3-14.15,57.5c-2.78,11.62-5.37,23.29-7.54,35.04
                           c-2.84,15.36-8.39,29.99-12.17,45.11c-2.9,11.6-6.39,23.05-9.47,34.6c-0.71,2.64-1.78,3.88-4.74,3.72
                           C780.17,830.02,775.27,830.1,769.7,830.96z"/>
                        <path class="st15" d="M1354.79,603.5c-1.99,1.46-4.53,1.91-6.88,2.59c-19.46,5.67-39.13,10.49-59.05,14.25
                           c-1.06,0.2-2.16,0.3-3.25,0.31c-3.27,0.02-4.4-0.83-3.51-3.75c3.38-11.05-3.65-16.45-11.34-21.43c-4.41-2.85-9.09-5.28-13.68-7.84
                           c-4.13-2.3-7.97-4.97-11.64-7.99c-2.54-2.09-4.92-4.84-9.03-4.5c3.67-1.78,7.22-2.54,10.89-2.55c2.73-0.01,5.38-0.22,8.05-0.99
                           c7.1-2.07,14.43-0.89,21.65-1.23c2.35-0.11,4.66-0.09,7-0.77c2.31-0.67,3.45-1.84,3.32-4.2c-0.34-6.32,0.8-12.69-0.78-18.99
                           c-0.39-1.55-0.19-3.25-0.2-4.89c-0.07-9.97-1.4-19.81-3.05-29.62c-0.27-1.61-0.51-3.23-0.08-4.91c1.7,0,1.77,1.52,2.27,2.51
                           c2.95,5.84,5.88,11.68,8.69,17.59c0.98,2.05,2.24,3.24,4.61,2.86c0.35-0.06,0.73,0.01,1.09-0.02c11.76-1.05,22.98,2.01,34.32,4.32
                           c4.5,0.91,6.83,3.1,7.46,7.73c0.34,2.49,0.03,3.96-2.48,4.38c-1.66,0.27-3.08,1.04-4.61,1.59c-5.65,2.02-11.18,4.2-14.78,9.4
                           c-1.25,1.81-4.4,1.93-4.57,4.31c-0.17,2.35,1.8,4.27,2.75,6.41c1.92,4.32,5.03,7.53,9.26,9.57c1.88,0.9,3.27,2.3,4.59,3.77
                           c6.43,7.15,13.21,13.9,21.25,19.28c0.59,0.39,1.06,0.99,1.5,1.56C1354.76,602.47,1354.7,602.89,1354.79,603.5z"/>
                        <path class="st12" d="M967.3,379.75c-3.41,0.88-6.2,2.98-9.13,4.78c-2.61,1.6-4.98,1.94-7.28-0.52c-0.74-0.79-1.64-1.43-2.49-2.12
                           c-4.68-3.82-4.62-6.24,0.37-9.65c1.03-0.7,2.29-1.09,3.47-1.55c33.31-12.95,66.25-26.82,99.8-39.14
                           c18.23-6.69,35.34-16.07,53.31-23.4c24.9-10.15,49.11-21.78,73.21-33.63c15-7.38,29.42-15.83,44.13-23.73
                           c8.47-4.55,17.15-8.72,25.71-13.12c30.68-15.77,61.37-31.51,91.98-47.43c2.76-1.43,4.72-1.52,7.46-0.12
                           c4.66,2.37,9.58,4.24,14.08,7.56c-3.6,2.87-7.6,4.19-11.37,5.75c-50.39,20.78-99.04,45.23-147.65,69.78
                           c-32.24,16.28-65.34,30.75-98.49,45.08c-19.66,8.5-39.09,17.5-58.28,27.04c-6.32,3.14-13.13,5.25-19.24,8.85
                           c-2.11-0.34-3.58,0.69-4.84,2.22c-3.13,1.28-6.26,2.56-9.39,3.84c-0.89,0.51-2.14,0.44-2.65,1.58c-7.47,3.31-14.94,6.62-22.41,9.93
                           c-7.24,0.75-13.75,3.61-20.04,7.06C967.37,378.92,967.39,379.43,967.3,379.75z"/>
                        <path class="st15" d="M1464.88,230.13c-3.84-0.45-7.58,0.68-11.29,1.2c-11.11,1.53-22.33,1.61-33.46,2.87
                           c-13.66,1.55-27.22,3.57-40.58,6.72c-20.3,4.79-40.29,10.74-59.32,19.29c-14.93,6.7-30.27,12.15-45.78,17.22
                           c-20.31,6.64-40.87,12.47-61.47,18.12c-5.41,1.49-10.74,3.26-16.11,4.91c-0.85,0.26-1.67,0.68-2.53-0.1
                           c0.58-1.84,2.42-2.05,3.79-2.74c22.74-11.4,45.41-22.92,68.27-34.07c21.2-10.34,42.54-20.41,63.94-30.33
                           c14.31-6.63,29.08-12.23,43.11-19.51c1.48-0.77,3.15-1.71,3.54,1.12c0.22,1.6,1.26,2.06,2.69,2.05c1.09,0,2.19,0.08,3.27,0.01
                           c12.63-0.8,24.94,0.76,36.97,4.7c6.94,2.27,14.22,2.71,21.42,2.85c8.23,0.15,16.1,2.16,24.11,3.49
                           C1465.25,228.68,1465.07,229.4,1464.88,230.13z"/>
                        <path class="st15" d="M1275.43,154.75c-3.24,4.57-7.86,7.55-12.64,10.02c-7.55,3.91-15.36,7.36-23.16,10.77
                           c-9.46,4.14-19.53,6.67-29.01,10.81c-16.6,7.25-33.05,14.67-49.07,23.25c-15.13,8.09-30.07,16.83-46.32,22.75
                           c-1.87,0.68-3.66,1.6-5.43,2.52c-14.33,7.45-29.22,13.69-44.18,19.69c-18.96,7.61-37.82,15.44-56.72,23.19
                           c-3.21,1.32-6.49,2.27-9.81,3.14c-7.06,1.86-13.47,5.32-20.2,7.97c-3.21,1.26-6.47,2.31-9.98,2.28l-0.03-0.03
                           c-0.08-4.93,2.2-9.49,2.28-14.41c0.03-1.78,1.64-2.28,2.92-2.88c3.28-1.53,6.66-2.86,9.91-4.46c5.69-2.81,11.48-5.43,16.85-8.87
                           c1.82-1.17,3.8-2.25,5.86-2.87c14.06-4.27,27.42-10.45,41.42-14.88c24.19-7.66,47.54-17.57,71.14-26.81
                           c14-5.48,28.06-10.79,41.99-16.44c14.77-5.98,29.38-12.37,44.14-18.39c10.23-4.17,20.56-8.1,30.89-12
                           c11.01-4.16,22.18-7.9,32.93-12.73c1.94-0.87,3.98-1.85,6.26-1.59L1275.43,154.75z"/>
                        <path class="st14" d="M1322.14,297.85c-0.54,3.86,1.11,7.08,3.05,10.18c1.18,1.89,2.73,3.39,5.07,3.71
                           c6.93,0.95,12.83,4.84,19.42,6.74c1.14,0.33,1.81,1.1,2.14,2.24c0.3,1.03,0.41,2.34,1.11,3c3.55,3.37,2.34,6.3,0.07,9.91
                           c-9.04,14.33-15.97,29.68-21.34,45.74c-1.34,4.02-1.39,4.03-4.98,2.39c-6.77-3.1-13.74-5.68-20.9-7.71
                           c-4.38-1.24-8.43-3.17-12.4-5.32c-1.63-0.89-2.39-1.84-1.85-4.14c1.84-7.82,4.82-15.19,7.95-22.52
                           c5.48-12.83,10.68-25.8,17.65-37.94c1.32-2.31,2.43-4.94,5.13-6.16C1322.24,297.97,1322.14,297.85,1322.14,297.85z"/>
                        <path class="st15" d="M768.21,198.96c3.39-0.09,5.69,1.44,8.18,2.43c20.04,8.02,39.17,18.08,59.42,25.65
                           c10,3.74,19.64,8.53,29.23,13.29c15.46,7.67,30.75,15.67,46.09,23.57c13.73,7.07,27.8,13.28,42.85,16.72
                           c0.73,1.71-0.13,3.07-0.7,4.27c-1,2.11-2.51,3.07-5.27,2.47c-4.11-0.89-8.08-2.08-11.8-3.93c-15.15-7.52-31.04-13.12-46.97-18.69
                           c-13.17-4.61-26.26-9.48-39.22-14.65c-8.46-3.38-17.3-5.35-25.95-8.01c-6.4-1.97-12.96-3.4-19.14-6.12
                           c-3.13-1.38-6.43-2.52-9.77-3.23c-4.55-0.96-8.54-2.82-12.21-5.62c-3.34-2.55-7.12-4.39-10.95-6.03c-2.95-1.26-3.97-3.22-3.84-6.38
                           C768.37,209.5,768.21,204.27,768.21,198.96z"/>
                        <path class="st14" d="M1292.18,493.05c-0.9-1.17-1.39-2.48-1.74-3.93c-2.48-10.2-4.62-20.43-5.45-30.95
                           c-0.43-5.43-0.56-10.84-0.64-16.27c-0.03-2.2,0.17-4.34,1.36-6.51c1.41,1.44,2.74,2.76,5.06,2.01c1.84-0.59,3.52,0.7,5.14,1.39
                           c7.02,2.98,14.17,5.55,21.42,7.89c4.07,1.32,4,1.35,4.13,5.59c0.67,21.42,3.12,42.57,9.57,63.11c0.69,2.2,1.39,4.39,2.5,7.88
                           c-6.72-3.5-13.44-3.89-18.61-8.57c-2.59-2.34-6.17-2.92-9.62-1.59c-3.04,1.17-4.62,0.14-5.81-2.74c-1.02-2.48-2.56-4.74-2.58-7.55
                           C1297.71,498.41,1295.88,495.28,1292.18,493.05z"/>
                        <path class="st14" d="M1373.64,278.08c0.73-0.02,1.47-0.17,2.17-0.05c7.3,1.21,14.59,2.45,21.88,3.69c0.3,2.06,1.72,1.82,3.16,1.55
                           c4.51,2.41,8.43,5.44,11.93,9.28c2.77,3.03,5.71,5.9,8.3,9.13c1.75,2.19,2.11,4.03,0.3,6.24c-4.48,5.47-8.95,10.94-13.35,16.48
                           c-1.06,1.33-2.12,1.02-3.34,0.53c-2.86-1.14-5.72-2.26-8.58-3.41c-1.96-0.79-3.81-0.91-5.67,0.41c-2.59,1.84-5.43,1.69-8.35,0.86
                           c-3.51-1-6.84-2.41-10.1-4.04c-0.79-0.4-2.11-0.85-1.72-1.78c1.42-3.31,0.07-7.2,2.27-10.29c0.42-0.59,0.76-1.29,1.3-1.74
                           c5.8-4.78,3.57-10.11,0.95-15.32c-1.62-3.23-3.63-6.25-5.47-9.37C1370.91,279.78,1372.57,279.52,1373.64,278.08z"/>
                        <path class="st14" d="M911.4,667.64c0.45-0.09,0.63-0.12,0.8-0.16c3.38-0.63,6.99,2.42,9.93,0.31c2.88-2.07,6.17-2.74,9.18-4.23
                           c3.54-1.76,7.33-3.01,11.01-4.48c2.87,2.86,4.1,6.73,6.16,10.08c2.78,4.51,5.94,8.67,10.24,11.87c1.29,0.96,2.8,1.73,3.67,3.52
                           c-4.81,6.85-9.92,13.61-15.57,19.87c-2.06-0.68-2.69-2.58-4.02-3.74c-1.07-0.92-2.07-2.37-3.71-1.75
                           c-3.51,1.31-5.02-1.38-6.63-3.36c-5.61-6.88-11.13-13.84-16.47-20.92C914.39,672.54,912.12,670.82,911.4,667.64z"/>
                        <path class="st15" d="M943.94,393.69c1.05-0.11,1.83,0.38,2.12,1.31c1.24,3.99,4.27,4.13,7.78,4.22c4.92,0.12,9.63-0.77,14.55-2.04
                           c-17.43,20.43-32.58,42.15-45.37,65.91c-0.65-2.76-0.45-5.72,0.44-10.03c2.84-13.61,5.05-27.32,7.43-41.01
                           c0.69-3.98,1.14-8.14,3.11-11.84C937.49,398.3,939.8,394.6,943.94,393.69z"/>
                        <path class="st14" d="M1341.83,391.7c3.95-0.31,7.5,0.73,10.82,2.91c5.76,3.77,11.58,7.43,17.6,11.27
                           c-4.86,6.96-7.69,14.35-9.36,22.17c-0.41,1.91-0.87,2.82-3.1,2.57c-8.36-0.95-16.3-3.27-23.99-6.61c-1.94-0.84-2.7-1.63-1.82-4.01
                           c1.43-3.89,2.35-7.98,3.29-12.04c1.02-4.42,1.82-8.86,4.9-12.49c0.64-0.75,0.64-2.03,0.93-3.07
                           C1341.34,392.17,1341.58,391.93,1341.83,391.7z"/>
                        <path class="st14" d="M1218.3,697.29c-6.66,8.77-14.53,15.95-22.57,22.96c-1.83,1.6-2.64,0.88-3.61-0.94
                           c-3.16-5.95-7.18-11.29-11.98-16.01c-1.45-1.42-2.03-2.58-0.87-4.65c2.73-4.89,4.7-10.15,6.72-15.37c1.65-4.26,2.45-4.59,6.94-3.15
                           c1.71,0.55,3.44,1.16,5.02,2.02C1205.43,686.23,1212.25,691.21,1218.3,697.29z"/>
                        <path class="st14" d="M1045.32,756.61c1.86-6.71,4.65-12.51,4.4-19.04c-0.08-2,1.48-1.89,3.1-1.74c7.76,0.74,15.51,1.35,23.1,3.35
                           c3.31,0.87,6.73,1.56,10.22,1.3c1.82-0.13,2.43,0.6,2.65,2.45c0.59,5.05-0.16,10.18,0.97,15.2c0.43,1.92-0.39,2.9-2.62,3.04
                           c-4.39,0.29-8.65-0.74-13-0.85C1064.55,760.09,1055.09,758.64,1045.32,756.61z"/>
                        <path class="st14" d="M927.26,506.48c3.61,7.71,9.9,12.13,16.77,15.92c1.25,0.69,1.24,1.71,0.77,2.76
                           c-3.03,6.79-4.01,13.87-3.13,21.24c0.16,1.33-0.56,1.98-1.89,1.98c-2.54,0-5.08,0.03-7.62,0.01c-6.51-0.06-12.95,0.59-20.13,1.9
                           C915.28,534.86,920.83,520.67,927.26,506.48z"/>
                        <path class="st14" d="M1480.43,625.63c-5.45-0.85-10.1-3.77-15.05-5.9c-1.79-0.77-1.8-1.95-1.04-3.47
                           c3.57-7.1,7.16-14.19,10.66-21.32c1.02-2.08,2.23-2.89,4.68-2.27c3.49,0.89,7.1,1.27,10.64,1.94c2.34,0.44,3.4,1.54,3.62,4.32
                           c0.65,8.25,0.17,16.59,1.78,24.77c0.63,3.2-2.27,5.63-1.72,8.98c-3.65-0.2-5.3-3.24-7.95-4.5
                           C1484.68,626.23,1482.73,625.54,1480.43,625.63z"/>
                        <path class="st14" d="M1166.16,370.56c0.2,3.91-1.81,6.63-3.05,9.57c-3.23,7.67-7.05,15.06-11.32,22.21
                           c-1.31,2.19-2.42,2.57-4.68,1.15c-3.05-1.92-6.28-3.67-9.66-4.89c-2.92-1.05-4.01-2.83-3.96-5.64c0.09-5.61,0.19-11.21,0.35-16.82
                           c0.04-1.35,4.66-5.29,6.38-5.55c4.29-0.65,8.5-0.83,12.89-0.16C1157.33,371.06,1161.74,370.56,1166.16,370.56z"/>
                        <path class="st15" d="M546.79,234.28c1.85-0.25,3.61,0.22,5.3,0.86c23.83,9.01,48.22,16.2,72.95,22.26c0.48,0.12,0.9,0.53,1.34,0.8
                           c-1.57,2.19-4.04,1.08-6.06,1.56c-13.3,3.14-26.39,2.46-39.49-1.66c-10.46-3.29-20.06-7.92-28.98-14.34
                           C548.32,241.21,546.9,238.28,546.79,234.28z"/>
                        <path class="st15" d="M1443.69,248.92c-1,1.71-2.89,2.07-4.42,2.85c-11.82,6.02-22.89,13.19-33.12,21.62
                           c-2.32,1.91-4.29,2.52-7.29,1.04c-6.16-3.04-12.58-5.54-18.91-8.23c-1.15-0.49-2.73-0.66-2.66-2.22c0.08-1.64,1.88-1.47,2.96-1.85
                           c9.91-3.46,20.15-5.75,30.4-7.91c10.05-2.12,20.2-3.79,30.32-5.63C1441.83,248.44,1442.75,248.35,1443.69,248.92z"/>
                        <path class="st14" d="M1613.39,578.11c3.79,7.51,8.4,14.2,13.08,21.33c-6.41,2.66-12.75,4.53-19.08,6.41
                           c-3.11,0.92-6.3,1.59-9.43,2.47c-1.76,0.49-2.51-0.02-3.12-1.8c-1.34-3.93-2.99-7.76-4.59-11.59c-0.53-1.26-1.03-2.36,0.61-3.16
                           C1598.65,587.96,1605.59,582.71,1613.39,578.11z"/>
                        <path class="st14" d="M1394.59,543.69c-12.18,1.09-23.2,0.61-34.2,0.68c-0.53,0-1.49-0.09-1.53-0.29c-0.97-4.36-5.65-5.25-7.98-8.31
                           c1.03-1.68,2.77-0.99,3.98-1.64c1.6-0.85,4.17-0.37,4.34-3.24c0.05-0.87,1.1-0.76,1.74-0.97c7.56-2.51,14.64-6.17,22.47-9.41
                           C1386.5,528.19,1389.62,535.83,1394.59,543.69z"/>
                        <path class="st14" d="M1009.4,392.85c3.54,4.78,5.67,10.48,9.72,14.94c1.01,1.12,0.89,2.09-0.18,3.23c-4.34,4.6-7.9,9.8-11.61,15.22
                           c-5.2-2.97-9.32-6.95-13.34-11.05c-2.01-2.05-3.95-4.19-6.79-5.14c-0.06-0.42-0.12-0.83-0.19-1.25c4.2-4.42,8.14-9.13,13.42-12.39
                           C1003.91,396.47,1006.52,394.31,1009.4,392.85z"/>
                        <path class="st14" d="M1719.97,365.74c3.66,10.33,5.95,20.86,7.98,31.38c-1.26,1.18-2.43,0.54-3.66,0.3
                           c-6.93-1.31-13.72-3.18-20.52-5.03c-2.18-0.59-3.37-1.38-2.32-4.15c1.73-4.56,2.67-9.37,2.55-14.31c-0.03-1.45-0.1-2.76,1.96-3.19
                           C1710.75,369.73,1715.17,367.57,1719.97,365.74z"/>
                        <path class="st14" d="M1696.07,528.01c-5.39-5.27-10.76-9.27-16.04-13.38c-1.79-1.39-2.12-2.35-0.71-4.36
                           c2.6-3.69,4.9-7.61,7.13-11.55c1.11-1.96,2.42-2.79,4.73-2.77c4.35,0.04,8.61,0.37,13.11,1.64
                           C1702.1,507.8,1699.74,517.78,1696.07,528.01z"/>
                        <path class="st14" d="M1668.59,289.84c-5.56,5.65-12.1,8.85-19.15,11.18c-1.34,0.44-1.83-0.33-2.24-1.55
                           c-2.13-6.21-5.77-11.63-9.16-17.18c-1.73-2.82-1.17-7.05,1.1-9.21c0.84-0.79,1.62-0.47,2.45-0.04
                           C1650.9,277.81,1659.91,283.06,1668.59,289.84z"/>
                        <path class="st15" d="M1097.59,358.3c-4.82,2.93-10.03,4.98-15.39,6.65c-10.02,3.13-20.06,6.18-30.06,9.37
                           c-3.44,1.1-6.78,2.52-10.17,3.79c-1.21,0.45-2.4,0.91-2.55,2.46c-1.82-2.65-3.76-5.17-7.86-6.29c4.69-3.23,9.28-4.77,13.61-6.68
                           c8.44-3.71,17.31-6.16,26.31-8.19c2.06-0.46,3.83-0.66,5.73,0.24c3.51,1.66,7.01,1.25,10.53-0.05c2.54-0.94,5.13-1.72,7.69-2.6
                           C1096.69,356.59,1097.56,356.72,1097.59,358.3z"/>
                        <path class="st14" d="M1505.18,252.22c8.18-1.53,15.95-1.76,23.67-2.42c3.07-0.26,4.58,0.88,5.38,3.87
                           c1.74,6.48-0.98,11.18-7.63,12.09c-4.29,0.58-8.59,1.04-12.76,2.26c-1.74,0.51-2.61-0.05-3.24-1.76
                           C1508.96,261.71,1507.13,257.22,1505.18,252.22z"/>
                        <path class="st14" d="M1155.76,86.86c6.06-6.48,11.41-7.1,18.86-2.6c11.05,6.66,23.76,9.4,36.51,11.39c0.7,0.11,1.38,0.32,2.41,0.56
                           c-1.53,2.53-3.85,3.89-5.85,5.58c-1.55,1.31-3.05,0.36-4.58-0.14c-10.82-3.53-21.63-7.09-32.47-10.53
                           C1165.82,89.59,1160.93,88.33,1155.76,86.86z"/>
                        <path class="st14" d="M1388.85,553.65c-2.32,2.28-4.52,4.71-7,6.8c-1.81,1.52-3.76,3.5-6.53,1.21c-0.79-0.65-2.15-0.28-3.12,0.25
                           c-2.24,1.21-4.63,1.03-6.92,0.54c-6.76-1.46-13.67-1.24-20.48-2.02c-1.78-0.2-3.65,0.08-5.29-0.93c0.19-0.3,0.23-0.61,0.11-0.94
                           c3.87-3.6,8.3-3.24,12.81-1.67c1.66,0.58,2.81,0.41,4.44-0.51c3.73-2.11,8.07-1.06,12.14-1.43c6.41-0.59,12.89-0.37,19.2-1.91
                           C1388.31,553.37,1388.52,553.57,1388.85,553.65z"/>
                        <path class="st14" d="M1253.52,476.52c-2.63,0.62-5.27,1.22-7.9,1.86c-2.59,0.63-4.99,1.76-7.91,1.02c-2.09-0.53-4.11,1.1-6.05,2.01
                           c-1.52,0.72-2.64,0.95-3.5-0.9c-1.72-3.73-4.01-7.21-5.16-11.35c5.49-1.62,10.02,1.78,14.99,2.08c5.03,0.3,10.04,0.87,15.05,1.32
                           C1253.29,473.87,1254.41,475.07,1253.52,476.52z"/>
                        <path class="st14" d="M1333.59,433.84c-2.3,0-4.59,0.02-6.89-0.01c-1.91-0.02-4.31-1.78-5.11,1.78c-0.23,1.04-1.55,0.78-2.29,0.25
                           c-2.03-1.45-4.62-2.06-6.61-4.49c3.77-1.3,7.34-2.56,10.92-3.76c1.15-0.39,2.1,0.27,3.02,0.83c2.44,1.49,4.86,3.03,7.28,4.55
                           C1333.8,433.27,1333.69,433.55,1333.59,433.84z"/>
                        <path class="st14" d="M1256.85,602.37c-5.74,0.17-11.33-1.21-16.98-1.86c-3.22-0.37-3.24-0.95-2.34-7.12
                           c6.57,2.59,13.05,5.14,19.53,7.7C1256.99,601.51,1256.92,601.94,1256.85,602.37z"/>
                        <path class="st14" d="M1374.24,595.13c-6.86-3.06-12.93-7.22-19.22-12.04c1-0.31,1.14-0.38,1.3-0.39
                           C1365.86,581.49,1369.99,588.45,1374.24,595.13z"/>
                        <path class="st13" d="M943.94,393.69c-4.15,0.9-6.46,4.6-9.94,6.52c-0.06-4.53,1.66-8.73,2.45-13.11c0.43-2.41,1.98-2.69,3.62-0.63
                           C941.77,388.61,944.58,390.27,943.94,393.69z"/>
                        <path class="st15" d="M967.3,379.75c0.09-0.32,0.07-0.83,0.28-0.94c6.29-3.45,12.79-6.31,20.04-7.06c-1.79,2.34-4.68,2.56-7.13,3.48
                           C976.14,376.88,972.04,379.26,967.3,379.75z"/>
                        <path class="st15" d="M1303.8,172.21c-3.27-1.67-7.16-2.11-9.78-5.03c0.26-0.44,0.52-1.25,0.78-1.25c3.69-0.05,7.1,1.28,10.12,3.09
                           C1307.16,170.37,1304.17,171.1,1303.8,172.21z"/>
                        <path class="st15" d="M1009.4,392.85c-2.88,1.46-5.49,3.62-8.97,3.56c0.67-3.27,3.71-4.23,5.98-5.74
                           C1008.26,389.43,1009.32,390.83,1009.4,392.85z"/>
                        <path class="st12" d="M1215.39,445.93c0.64,2.32,0.61,4.9,2.52,6.75c-0.27,0.83-0.31,2.1-0.87,2.41c-1.43,0.78-1.59-0.81-2.1-1.61
                           c-0.48-0.75-0.82-1.6-1.33-2.33C1211.75,448.55,1212.55,446.9,1215.39,445.93z"/>
                        <path class="st12" d="M1256.85,602.37c0.07-0.43,0.14-0.85,0.21-1.28c3.89,0.55,7.38,2.05,11.38,4.69
                           C1263.76,605.18,1260.18,604.2,1256.85,602.37z"/>
                        <path class="st12" d="M1292.18,493.05c3.71,2.22,5.54,5.36,4.73,9.77C1294.34,500.04,1292.88,496.73,1292.18,493.05z"/>
                        <path class="st12" d="M1244.04,562.35c3.63-1.23,7.05-1.56,9.5,2.24C1251.13,564.39,1245,562.95,1244.04,562.35z"/>
                        <path class="st15" d="M1373.64,278.08c-1.07,1.44-2.73,1.71-4.3,2.16c-1.65-0.66-2.37-1.98-2.7-4.02
                           C1369.38,275.55,1371.61,276.34,1373.64,278.08z"/>
                        <path class="st15" d="M464.86,169.78c-0.44,0.8-1.52,1.31-1.16,2.48c-2.09,0.4-3.72-0.79-6.02-1.77
                           C460.38,169.85,462.36,167.91,464.86,169.78z"/>
                        <path class="st15" d="M1253.52,476.52c0.9-1.45-0.22-2.65-0.47-3.96c0.71-0.09,1.42-0.26,2.13-0.24c1.14,0.03,2.22,0.45,2.43,1.68
                           c0.24,1.42-1.14,1.66-2.03,2.11C1254.97,476.4,1254.21,476.39,1253.52,476.52z"/>
                        <path class="st12" d="M1464.88,230.13c0.18-0.73,0.37-1.46,0.55-2.18c1.65,0.41,3.3,0.82,4.94,1.22c-0.02,0.22-0.04,0.44-0.06,0.66
                           C1468.51,229.93,1466.7,230.03,1464.88,230.13z"/>
                        <path class="st15" d="M1480.43,625.63c2.3-0.09,4.25,0.6,5.62,2.55C1483.73,628.3,1481.7,627.8,1480.43,625.63z"/>
                        <path class="st15" d="M1022.06,356.4c1.25-1.52,2.73-2.56,4.84-2.22C1025.7,355.84,1024.08,356.56,1022.06,356.4z"/>
                        <path class="st12" d="M1400.86,283.26c-1.44,0.28-2.87,0.52-3.16-1.55C1399.11,281.49,1400.15,282.04,1400.86,283.26z"/>
                        <path class="st12" d="M985.2,413.14c-0.67-0.01-1.35-0.02-2.02-0.03c0.24-0.93,0.85-1.79,1.76-1.66
                           C985.67,411.56,985.83,412.45,985.2,413.14z"/>
                        <path class="st15" d="M443.18,205.3c0.65-1.23,1.32-1.25,2-0.02C444.52,206.38,443.86,206.39,443.18,205.3z"/>
                        <path class="st15" d="M1010.02,361.83c0.51-1.15,1.76-1.07,2.65-1.58C1012.37,361.75,1011.41,362.15,1010.02,361.83z"/>
                        <path class="st15" d="M469.26,168.83c-0.63,0.75-1.4,0.98-2.32,0.6C467.43,168.16,468.07,167.44,469.26,168.83z"/>
                        <path class="st15" d="M1191.44,301.21c0.13,0.06,0.26,0.11,0.39,0.17c-0.18,0.14-0.36,0.28-0.55,0.42
                           c-0.07-0.12-0.22-0.27-0.19-0.34C1191.14,301.34,1191.32,301.29,1191.44,301.21z"/>
                        <path class="st12" d="M987.01,408.8c0.06,0.42,0.13,0.83,0.19,1.25c-0.27-0.09-0.68-0.11-0.76-0.28
                           C986.2,409.26,986.53,408.96,987.01,408.8z"/>
                        <path class="st12" d="M1339.61,558.58c0.12,0.33,0.08,0.65-0.11,0.94c-0.42,0.09-0.74-0.11-0.64-0.51
                           C1338.91,558.82,1339.35,558.72,1339.61,558.58z"/>
                        <path class="st15" d="M1388.2,553.05c0.58-0.2,0.86-0.07,0.66,0.6C1388.52,553.57,1388.31,553.37,1388.2,553.05z"/>
                        <path class="st15" d="M1691.63,537.78c-0.09-0.43-0.17-0.86-0.26-1.29C1692.26,536.76,1692.42,537.17,1691.63,537.78z"/>
                        <path class="st12" d="M1341.83,391.7c-0.25,0.24-0.49,0.47-0.74,0.7C1340.93,391.74,1341.15,391.48,1341.83,391.7z"/>
                        <path class="st15" d="M1275.46,154.78c0.08-0.16,0.18-0.46,0.22-0.45c0.38,0.08,0.29,0.25-0.25,0.42
                           C1275.43,154.75,1275.46,154.78,1275.46,154.78z"/>
                        <path class="st15" d="M968.91,291.14c-0.16,0.14-0.32,0.28-0.48,0.43c0.02-0.1,0.02-0.23,0.08-0.29c0.1-0.08,0.25-0.11,0.37-0.17
                           C968.89,291.11,968.91,291.14,968.91,291.14z"/>
                        <path class="st15" d="M1137.1,351.34c-0.24,0.1-0.48,0.2-0.73,0.31c0.1-0.24,0.2-0.49,0.3-0.73
                           C1136.82,351.05,1136.96,351.19,1137.1,351.34z"/>
                        <path class="st1" d="M228.15,262.23c0.19-8.67,1.76-16.92,7.5-23.85c4.74-5.72,10.8-9.04,18.23-9.61
                           c14.17-1.08,27.73,1.06,40.33,7.95c6.98,3.82,12.53,9.29,16.98,15.77c4.7,6.86,6.34,14.48,4.44,22.74
                           c-1.77,7.72-4.69,14.88-10.2,20.7c-6.23,6.57-11.84,13.69-18.34,20.01c-7.02,6.83-14.89,8.31-23.91,4.56
                           c-18.28-7.61-28.33-21.93-32.8-40.57C229,274.18,228.05,268.24,228.15,262.23z M264.09,253.77c-3.67-0.03-7.26,0.14-10.78,1.27
                           c-1.92,0.62-2.91,1.55-3.25,3.71c-1.72,10.93,2.84,29.99,17.45,36.9c5.51,2.61,6.27,3.07,11.04-1.2c4.01-3.59,8.54-5.51,13.73-5.52
                           c3.19-0.01,4.58-1.53,5.44-4.12c0.57-1.71,0.98-3.47,1.55-5.19c1.75-5.25,0.3-9.45-3.74-13.15
                           C286.59,258.31,276.09,254.21,264.09,253.77z"/>
                        <path class="st1" d="M749.51,394.62c-1.07,14.95-8.04,29.2-20.61,40.75c-2.09,1.93-4.55,3.39-7.12,0.68
                           c-1.29-1.36-2.17-0.67-3.17,0.22c-8.22,7.34-17.11,6.53-26.31,2.21c-11.9-5.59-21.75-13.54-29.09-24.58
                           c-3.94-5.93-5.83-12.44-6.41-19.37c-1.23-14.7,2.47-28.39,9.06-41.38c3.54-6.98,8.83-12.18,17.09-12.56
                           c4.63-0.21,9.37,0.49,13.92,1.71c16.95,4.56,32.17,12.07,43.84,25.69C746.77,375.05,749.47,383.26,749.51,394.62z M734.8,408.27
                           c0.24-0.54,0.34-0.69,0.38-0.87c0.22-1.06,0.42-2.13,0.63-3.2c1.84-9.34,0.09-17.56-7.18-24.27
                           c-11.04-10.19-24.25-16.37-38.3-21.01c-1.36-0.45-2.83-0.58-4.26-0.78c-4.6-0.64-7.38,0.88-9.69,5.03
                           c-3.12,5.61-4.81,11.68-6.26,17.88c-3.03,13.04,1.06,23.54,11.29,31.82c5.39,4.36,11.4,7.63,17.92,10.08
                           c3.6,1.35,6.66,0.73,9.73-1.2c3.94-2.47,6.91-5.98,9.33-9.77c3.44-5.38,7.89-6.4,13.54-4.45
                           C732.78,407.82,733.67,407.98,734.8,408.27z"/>
                        <path class="st12" d="M983.31,416.82c-0.19,0.47-0.36,0.94-0.57,1.39c-0.02,0.03-0.31,0.02-0.35-0.05c-0.46-0.8,0.1-1.23,0.62-1.67
                           C983.01,416.49,983.31,416.82,983.31,416.82z"/>
                        <path class="st12" d="M983.01,416.49c0.14-0.41,0.37-0.99,0.82-0.57c0.43,0.4-0.11,0.72-0.53,0.89
                           C983.31,416.82,983.01,416.49,983.01,416.49z"/>
                        <path class="st1" d="M971.52,135.17c5.78,0.8,11.7,1.69,16.39,5.28c10.25,7.86,22.07,13,32.95,19.75
                           c9.71,6.03,18.71,13.07,28.4,19.12c7.09,4.42,9.41,11.67,10.07,19.53c0.27,3.18-2.01,5.02-4.59,6.14
                           c-12.25,5.28-23.37,12.45-33.6,20.87c-6.59,5.42-13.35,10.56-20.37,15.38c-11.8,8.1-24.35,13.77-38.98,15.26
                           c-11.6,1.18-20.42-3.02-28.44-10.29c-12.95-11.73-27.05-21.78-42.12-30.61c-6.62-3.88-13.73-6.58-20.48-10.1
                           c-1.13-0.59-2.32-1.07-3.4-1.74c-3.97-2.46-4.38-5.47-1.25-8.96c7.35-8.2,16.09-14.7,25.7-19.89
                           c13.42-7.25,27.37-13.43,41.25-19.74c8.28-3.76,16.15-8.35,22.92-14.45C960.52,136.62,966.04,136.16,971.52,135.17z M961.29,242.09
                           c1.95,0.2,3.88,0.35,5.52-1.06c2.22-0.11,4.24-0.93,6.29-1.68c10.73-3.92,19.78-10.59,28.47-17.74
                           c11.32-9.33,22.01-19.43,34.47-27.32c0.37-0.23,1.04-0.47,0.35-1.78c0.08,0.06-0.34-0.29-0.78-0.6
                           c-12.31-8.67-24.64-17.3-37.32-25.42c-1.36-0.87-3.1-1.67-3.8-2.97c-2.11-3.86-5.88-5.07-9.41-6.81
                           c-7.14-3.49-13.59-2.74-19.59,2.61c-5.87,5.24-12.7,8.98-19.88,12.14c-12.11,5.33-24.21,10.67-36.25,16.14
                           c-7.23,3.29-14.42,6.69-21.22,11.31c1,0.64,1.73,1.18,2.52,1.61c17.6,9.52,34.16,20.53,48.92,34.15c3.04,2.8,6.24,5.57,10.34,6.87
                           c3.68,2.76,7.53,2.03,11.4,0.52L961.29,242.09z"/>
                        <path class="st13" d="M264.09,253.77c12,0.44,22.5,4.54,31.44,12.72c4.04,3.7,5.5,7.9,3.74,13.15c-0.57,1.71-0.99,3.47-1.55,5.19
                           c-0.86,2.6-2.25,4.12-5.44,4.12c-5.19,0.01-9.72,1.94-13.73,5.52c-4.77,4.26-5.52,3.8-11.04,1.2
                           c-14.61-6.91-19.17-25.97-17.45-36.9c0.34-2.17,1.33-3.09,3.25-3.71C256.83,253.91,260.41,253.74,264.09,253.77z"/>
                        <path class="st13" d="M734.8,408.27c-1.13-0.29-2.02-0.45-2.87-0.74c-5.65-1.95-10.09-0.93-13.54,4.45
                           c-2.42,3.79-5.39,7.3-9.33,9.77c-3.08,1.93-6.13,2.55-9.73,1.2c-6.52-2.44-12.53-5.72-17.92-10.08
                           c-10.24-8.28-14.32-18.78-11.29-31.82c1.44-6.19,3.13-12.27,6.26-17.88c2.31-4.15,5.08-5.67,9.69-5.03c1.43,0.2,2.9,0.33,4.26,0.78
                           c14.06,4.64,27.26,10.82,38.3,21.01c7.27,6.71,9.02,14.93,7.18,24.27c-0.21,1.07-0.41,2.13-0.63,3.2
                           C735.14,407.57,735.03,407.73,734.8,408.27z"/>
                        <path class="st13" d="M949.91,241.56c-4.1-1.3-7.3-4.07-10.34-6.87c-14.76-13.62-31.31-24.63-48.92-34.15
                           c-0.79-0.43-1.52-0.97-2.52-1.61c6.8-4.63,13.99-8.03,21.22-11.31c12.04-5.47,24.14-10.82,36.25-16.14
                           c7.18-3.16,14-6.9,19.88-12.14c6-5.35,12.45-6.1,19.59-2.61c3.54,1.73,7.31,2.95,9.41,6.81c0.71,1.3,2.44,2.1,3.8,2.97
                           c12.68,8.12,25.02,16.75,37.32,25.42c0.44,0.31,0.85,0.65,0.78,0.6c0.69,1.3,0.02,1.55-0.35,1.78
                           c-12.46,7.89-23.15,17.99-34.47,27.32c-8.69,7.16-17.74,13.83-28.47,17.74c-2.04,0.75-4.07,1.57-6.29,1.68
                           c-1.95-0.2-3.89-0.38-5.52,1.06c0,0,0.02-0.01,0.02-0.01C957.51,241.9,953.71,241.73,949.91,241.56z"/>
                        <path class="st12" d="M949.91,241.56c3.8,0.17,7.6,0.35,11.4,0.52C957.44,243.59,953.59,244.31,949.91,241.56z"/>
                        <path class="st12" d="M961.29,242.09c1.63-1.45,3.57-1.26,5.52-1.06C965.17,242.43,963.24,242.28,961.29,242.09z"/>
                     </g>
                     </svg>
                     

                    </div>
                </div>
            </div>

            <div class="outerButtonContainer">
                <div class="buttonContainerAction">
                    <div class="btn actionBtn Digit1">
                        <svg class="material-symbols-rounded toggleBtn1 toggle Digit1" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit1" d="M5.95 41.25q-1.4 0-2.05-1.225Q3.25 38.8 4 37.6L22.1 8.8q.65-1.15 1.95-1.15 1.3 0 1.95 1.15l18 28.8q.7 1.2.075 2.425-.625 1.225-2.025 1.225Zm4.2-4.7h27.7L24.05 14.6Zm13.9-11.25Z"/></svg>
                    </div>
                    <div class="btn actionBtn Digit2">
                        <svg class="material-symbols-rounded toggleBtn1 toggle Digit2" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit2" d="M24 45.25Q19.6 45.25 15.725 43.6Q11.85 41.95 8.95 39.05Q6.05 36.15 4.4 32.3Q2.75 28.45 2.75 24Q2.75 19.55 4.4 15.675Q6.05 11.8 8.95 8.925Q11.85 6.05 15.7 4.375Q19.55 2.7 24 2.7Q28.45 2.7 32.325 4.375Q36.2 6.05 39.075 8.925Q41.95 11.8 43.625 15.675Q45.3 19.55 45.3 24Q45.3 28.45 43.625 32.3Q41.95 36.15 39.075 39.025Q36.2 41.9 32.325 43.575Q28.45 45.25 24 45.25ZM24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24Q24 24 24 24ZM24 40.55Q30.95 40.55 35.75 35.725Q40.55 30.9 40.55 24Q40.55 17.05 35.75 12.25Q30.95 7.45 24.05 7.45Q17.1 7.45 12.275 12.25Q7.45 17.05 7.45 23.95Q7.45 30.9 12.275 35.725Q17.1 40.55 24 40.55Z"/></svg>
                    </div>
                    <div class="btn actionBtn Digit3">
                        <svg class="material-symbols-rounded toggleBtn2 toggle Digit3" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="Digit3" d="M9.45 43.25Q7.5 43.25 6.125 41.875Q4.75 40.5 4.75 38.55V9.45Q4.75 7.5 6.125 6.1Q7.5 4.7 9.45 4.7H38.55Q40.5 4.7 41.9 6.1Q43.3 7.5 43.3 9.45V38.55Q43.3 40.5 41.9 41.875Q40.5 43.25 38.55 43.25ZM9.45 38.55H38.55Q38.55 38.55 38.55 38.55Q38.55 38.55 38.55 38.55V9.45Q38.55 9.45 38.55 9.45Q38.55 9.45 38.55 9.45H9.45Q9.45 9.45 9.45 9.45Q9.45 9.45 9.45 9.45V38.55Q9.45 38.55 9.45 38.55Q9.45 38.55 9.45 38.55Z"/><svg>
                    </div>
                </div>
                <div class="buttonContainerDrive">
                    <div class="btn driveBtn KeyQ">
                        <svg class="material-symbols-rounded arrow KeyQ" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="KeyQ" d="M36.25 39.55 13.85 17.15V28.3Q13.85 29.3 13.175 29.975Q12.5 30.65 11.5 30.65Q10.5 30.65 9.825 29.975Q9.15 29.3 9.15 28.3V11.5Q9.15 10.5 9.825 9.825Q10.5 9.15 11.5 9.15H28.3Q29.3 9.15 29.975 9.825Q30.65 10.5 30.65 11.5Q30.65 12.5 29.975 13.175Q29.3 13.85 28.3 13.85H17.15L39.55 36.25Q40.25 36.95 40.25 37.9Q40.25 38.85 39.55 39.55Q38.85 40.25 37.9 40.25Q36.95 40.25 36.25 39.55Z"/></svg>
                    </div>
                    <div class="btn driveBtn KeyW">
                        <svg class="material-symbols-rounded arrow KeyW" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path class="KeyW" d="M24 40.55Q23 40.55 22.325 39.875Q21.65 39.2 21.65 38.2V16.45L12.45 25.7Q11.75 26.4 10.8 26.4Q9.85 26.4 9.15 25.7Q8.4 25 8.4 24Q8.4 23 9.15 22.3L22.35 9.1Q22.65 8.7 23.1 8.525Q23.55 8.35 24.05 8.35Q24.45 8.35 24.875 8.525Q25.3 8.7 25.65 9.1L38.9 22.3Q39.6 23 39.6 24Q39.6 25 38.9 25.7Q38.15 26.4 37.225 26.4Q36.3 26.4 35.6 25.7L26.35 16.45V38.2Q26.35 39.2 25.675 39.875Q25 40.55 24 40.55Z"/></svg>
                    </div>
                    <div class="btn driveBtn KeyE">
                        <svg class="material-symbols-rounded arrow KeyE" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyE" d="M8.45 39.55Q7.75 38.85 7.75 37.9Q7.75 36.95 8.45 36.25L30.85 13.85H19.7Q18.7 13.85 18.025 13.175Q17.35 12.5 17.35 11.5Q17.35 10.5 18.025 9.825Q18.7 9.15 19.7 9.15H36.5Q37.5 9.15 38.175 9.825Q38.85 10.5 38.85 11.5V28.3Q38.85 29.3 38.175 29.975Q37.5 30.65 36.5 30.65Q35.5 30.65 34.825 29.975Q34.15 29.3 34.15 28.3V17.15L11.8 39.55Q11.1 40.25 10.125 40.25Q9.15 40.25 8.45 39.55Z"/></svg>
                    </div>
                </div>
                <div class="buttonContainerDrive">
                    <div class="btn driveBtn KeyA">
                        <svg class="material-symbols-rounded arrow KeyA" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyA" d="M21.4 38.85 8.15 25.65Q7.8 25.3 7.625 24.875Q7.45 24.45 7.45 24Q7.45 23.55 7.625 23.125Q7.8 22.7 8.15 22.35L21.45 9.05Q22.15 8.35 23.1 8.375Q24.05 8.4 24.75 9.1Q25.45 9.85 25.45 10.8Q25.45 11.75 24.75 12.45L15.6 21.65H37.3Q38.3 21.65 38.975 22.325Q39.65 23 39.65 24Q39.65 25 38.975 25.675Q38.3 26.35 37.3 26.35H15.6L24.8 35.6Q25.5 36.3 25.475 37.225Q25.45 38.15 24.75 38.85Q24 39.6 23.05 39.6Q22.1 39.6 21.4 38.85Z"/></svg>
                    </div>
                    <div class="btn driveBtn KeyS">
                        <svg class="material-symbols-rounded arrow KeyS" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyS" d="M24 39.6Q23.55 39.6 23.125 39.425Q22.7 39.25 22.35 38.9L9.15 25.7Q8.4 25 8.4 24.025Q8.4 23.05 9.15 22.35Q9.85 21.65 10.8 21.65Q11.75 21.65 12.45 22.35L21.65 31.5V9.8Q21.65 8.8 22.325 8.125Q23 7.45 24 7.45Q25 7.45 25.675 8.125Q26.35 8.8 26.35 9.8V31.5L35.55 22.35Q36.25 21.65 37.2 21.65Q38.15 21.65 38.9 22.35Q39.6 23.05 39.6 24.025Q39.6 25 38.9 25.7L25.65 38.9Q25.3 39.25 24.875 39.425Q24.45 39.6 24 39.6Z"></svg>
                    </div>
                    <div class="btn driveBtn KeyD">
                        <svg class="material-symbols-rounded arrow KeyD" xmlns="http://www.w3.org/2000/svg" height="48" width="48"><path  class="KeyD" d="M22.35 38.8Q21.65 38.15 21.65 37.175Q21.65 36.2 22.35 35.5L31.5 26.35H9.8Q8.8 26.35 8.125 25.675Q7.45 25 7.45 24Q7.45 23 8.125 22.325Q8.8 21.65 9.8 21.65H31.5L22.35 12.45Q21.65 11.8 21.65 10.8Q21.65 9.8 22.35 9.1Q23.05 8.45 24.025 8.45Q25 8.45 25.7 9.1L38.95 22.35Q39.3 22.7 39.475 23.125Q39.65 23.55 39.65 24Q39.65 24.45 39.475 24.875Q39.3 25.3 38.95 25.65L25.7 38.9Q25 39.6 24.025 39.55Q23.05 39.5 22.35 38.8Z"/></svg>
                    </div>
                </div>
                <div class="logoLandscape">
                  <!-- Generator: Adobe Illustrator 27.7.0, SVG Export Plug-In . SVG Version: 6.00 Build 0)  -->
                  <svg style="height: 80px" version="1.1" id="Layer_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
                     viewBox="0 0 1669.66 737.7" style="enable-background:new 0 0 1669.66 737.7;" xml:space="preserve">
                  <g>
                     <path d="M1161.44,218.97c-5.54-1.23-10.47-2.44-15.45-3.4c-6.59-1.27-13.25-2.22-19.64-4.36c-3.16-1.06-6.43-1.07-9.68-1.26
                        c-9.96-0.6-19.88-1.54-29.89-1.44c-19.07,0.19-38.14,0.07-57.21,0.05c-11.63-0.01-23.17,1.39-34.77,1.95
                        c-24.68,1.21-48.9,6.18-73.31,9.58c-10.58,1.47-20.97,4.29-31.59,5.68c-7.54,0.99-15.19,1.16-22.65,2.87
                        c-2.12,0.49-4.26,0.92-6.36,1.49c-2.26,0.61-3.96,1.58-3.39,4.52c0.64,3.32-1.24,5.45-3.9,7.12c-5.99,3.76-11.9,7.67-17.94,11.36
                        c-5.12,3.13-10.55,5.6-16.38,7.23c-7.86,2.2-15.64,4.67-23.44,7.04c-3.06,0.93-6.09,1.95-8.32,4.55
                        c10.61,5.36,22.42,8.04,32.13,15.17c0.31,1.64-1.7,1.75-2.06,3.36c3.63,2.99,7.42,5.26,12.5,2.78c1.49-0.73,3.17-0.73,4.77-0.03
                        c5.32,2.33,10.8,4.29,15.82,7.26c4.31,2.55,8.02,6,10.27,10.29c1.97,3.76,4.51,4.59,8.24,4.69c8.34,0.21,16.72,0.21,24.98,1.51
                        c7.13,1.13,14.44,1.65,20.7,6.02c2.22,1.55,5.05,1.78,7.82,2.02c16.65,1.46,32.93,4.11,48.64,10.6c9.64,3.98,20.17,6.02,29.94,9.87
                        c15.09,5.94,30.75,10.78,44.17,20.34c10.43,7.42,19.48,16.01,26.07,27.34c9.22,15.85,18.21,31.69,22.95,49.58
                        c4.2,15.83,4.43,31.88,3.18,48.06c-0.64,8.33-1.43,16.67-3.56,24.73c-3.24,12.24-6.17,24.61-12,36.04
                        c-4.05,7.93-9.36,14.63-16.66,19.78c-3.56,2.51-7.07,5.11-10.44,7.88c-7.81,6.42-16.41,11.19-26.1,14.28
                        c-5.85,1.86-11.35,4.8-17.06,7.12c-5.9,2.39-11.98,4.21-18.23,5.45c-3.02,0.6-5.91,1.63-8.81,2.73
                        c-27.81,10.6-55.72,20.91-84.08,30c-22.63,7.25-44.84,15.7-67.08,24.06c-24.8,9.31-48.87,20.45-73.81,29.45
                        c-3.56,1.29-7,3.07-10.27,4.99c-11.76,6.93-24.56,9.51-38.04,9.91c-9.24,0.27-18.47,1.12-27.71,1.71c-0.36,0.02-0.8-0.06-1.08,0.11
                        c-6.92,4.18-14.14,1.32-21.16,0.64c-6.84-0.67-13.6-2.23-20.38-3.44c-1.43-0.25-2.89-0.51-4.22-1.04
                        c-16.33-6.5-33.69-10.18-49.46-18.21c-7.77-3.95-15.99-6.9-24.14-9.96c-2.47-0.93-4.89-1.67-4.74-5.02
                        c0.04-0.97-0.57-1.63-1.34-2.22c-6.47-4.95-12.91-9.94-19.64-15.13c-1.24,1.31-1.56,2.89-2.05,4.36
                        c-5.38,16.18-10.72,32.37-15.4,48.78c-2.44,8.54-4.99,17.07-8.83,25.13c-0.39,0.82-0.74,1.67-1.24,2.42
                        c-1.47,2.19-3.07,3.02-5.94,1.79c-7-3-14.27-5.32-21.59-7.45c-1.9-0.55-3.76-1.39-5.83-0.78c-0.51,0.15-1.22,0.32-1.6,0.09
                        c-8.36-5.04-17.99-5.28-27.17-6.85c-19.62-3.36-38.34-9.61-56.88-16.52c-25.68-9.57-51.27-19.35-76.92-28.99
                        c-25.67-9.65-51.77-17.92-78.2-25.22c-32.9-9.1-65.4-19.49-97.26-31.74c-28.02-10.77-56.72-19.09-85.93-25.84
                        c-11.49-2.65-22.85-5.85-34.44-8.07c-5.7-1.09-9.5-4.58-12.48-9.56c-4.04-6.77-5.89-13.92-5.9-21.72c0-2.99,0.75-5.74,1.65-8.49
                        c4.34-13.33,10.36-25.96,16.64-38.45c9.89-19.66,17.68-40.18,25.5-60.7c6.91-18.15,13.91-36.26,21.02-54.33
                        c5.4-13.71,9.87-27.67,12.49-42.19c3.05-16.9,9.11-32.83,15.72-48.58c3.57-8.51,8.35-11.09,17.76-10.53
                        c20.06,1.21,39.36,6.4,58.77,11.02c2.26,0.54,4.52,1.11,6.94,1.7c3.56-16.04,13.33-25.94,28.7-30.53c2.61-0.78,5.19-1.64,7.82-2.35
                        c19.45-5.25,39.03-9.81,58.9-13.28c15.53-2.71,30.87-6.66,45.88-11.59c26.93-8.85,54.38-15.66,82.02-21.82
                        c11.71-2.61,22.81-7.27,34.42-10.23c13.18-3.36,26.19-7.47,39.47-10.37c17.79-3.87,35.83-5.34,54.12-4.1
                        c11.56,0.79,23.19,0.97,34.75,1.67c6.25,0.38,12.6,1.31,18.92,1.58c6.82,0.29,11.37,4.5,15.82,8.67c1.45,1.35,2.48,1.76,4.13,1.49
                        c6.87-1.14,13.42,0.63,19.76,2.72c16.02,5.28,32.09,10.5,47.79,16.64c9.92,3.88,20.03,7.37,29.66,12.03
                        c4.58,2.21,3.84,2.8,7.19-2.16c2.94-4.36,5.58-8.92,8.39-13.38c1.55-2.45,3-5,4.79-7.26c2.53-3.19,5.41-5.94,10.1-4.99
                        c1.92,0.39,3.42-0.49,4.85-1.84c4-3.78,8.83-6.28,13.65-8.85c10.27-5.46,20.23-11.5,29.8-18.06c7.84-5.38,15.79-6.4,24.77-4.23
                        c8.65,2.09,17.19,4.49,25.69,7.09c3.47,1.06,6.91,2.41,10.47,2.91c6.67,0.95,11.08,4.73,14.2,10.29c0.87,1.55,1.83,1.9,3.45,1.87
                        c2.12-0.04,3.8-1.12,5.63-1.87c37.53-15.54,76.2-26.91,116.6-32.15c18.72-2.43,37.46-4.08,56.34-4.78
                        c25.68-0.95,51.1,1.08,76.47,4.52c28.66,3.88,56.72,10.32,84.11,19.65c2.3,0.78,4.7,1.55,6.53-0.67
                        c6.55-7.93,15.63-12.36,24.25-17.28c12.28-7.02,24.79-13.67,37.35-20.17c26.86-13.92,55.06-24.26,84.51-31.24
                        c17.15-4.06,33.89-9.44,50.05-16.51c1.98-0.87,3.93-1.82,6.31-2.93c-3.72-4.95-2.58-9.86-0.4-14.82c1.97-4.47,4.2-8.82,4.32-13.92
                        c0.06-2.45,3.66-5.47,6.74-5.14c9.99,1.05,18.14-4.33,26.73-7.61c9.82-3.76,19.36-8.19,29.7-10.5c4.25-0.95,8.41-2.25,12.27-4.38
                        c2.45-1.35,4.97-1.62,7.83-0.96c4.38,1.01,8.47,3.1,13.36,3.63c-0.24-5.57,3.36-7.99,7.43-10.46
                        c17.37-10.56,34.94-20.84,51.09-33.27c1.58-1.22,3.33-2.2,4.96-3.35c4.43-3.13,9.26-3.75,14.51-2.64
                        c12.66,2.68,23.94,8.26,34.27,15.95c11.53,8.59,23.6,16.27,36.94,21.84c1.7,0.71,4.51,1.33,3.78,3.76
                        c-0.79,2.63-3.68,1.96-5.7,1.53c-12-2.58-23.08-7.55-33.83-13.32c-7.83-4.2-15.44-8.88-24.03-11.47
                        c-5.06-1.53-10.29-2.16-15.53-2.65c-2.04-0.19-3.99,0.04-5.72,1.28c-3.82,2.73-7.65,5.45-11.91,8.49c5.6,2.46,10.7,4.68,15.79,6.94
                        c1.32,0.59,2.67,1.17,3.9,1.92c2.15,1.3,4.25,2.71,1.34,5.33c-0.09,6.95-5.88,8.86-10.51,11.69c-3.05,1.86-6.46,2.18-10,1.48
                        c-5.37-1.05-10.49-2.83-15.56-4.82c-3.93-1.54-7.78-3.06-5-9.75c-9.75,5.09-18.17,9.49-27.58,14.4c6.2,1.82,11.42,3.51,16.71,4.88
                        c20.9,5.42,41.34,12.35,61.88,18.93c1.3,0.42,2.28,0.81,3.5-0.04c14.52-10.16,31.07-16.48,46.59-24.74c2.55-1.36,5-2.97,7.3-4.72
                        c4.31-3.27,8.84-2.5,11.48,2.38c1.37,2.54,2.5,5.26,3.37,8.01c2.37,7.43,4.43,14.98,5.31,22.74c0.83,7.3-1.13,13.31-7.66,17.89
                        c-14.7,10.31-30.55,18.13-47.52,23.83c-6.19,2.08-12.29,4.41-18.5,6.42c-2.75,0.89-4.21,2.31-4.49,5.32
                        c-0.24,2.49-1.54,4.9-1.71,7.38c-0.32,4.59-3.08,6.27-7.06,6.76c-10.25,1.25-20.44,3.03-30.78,3.59
                        c-8.52,0.46-17.02,0.97-25.55,1.14c-2.5,0.05-4.98,0.89-7.46,1.42c-1.06,0.23-2.09,0.61-3.15,0.87c-3.43,0.84-7.15-0.68-10.19,0.17
                        c-3.03,0.85-6.02,1.68-9.13,1.91c-2.29,0.17-4.08-1.11-5.75-2.66c-10.51-9.77-23.76-14.33-36.87-19.12
                        c-2.01-0.73-3.91-0.08-5.86,0.39c-60.13,14.68-118.01,35.71-174.23,61.48c-8.58,3.93-17.09,8-25.62,12.05
                        c-1.24,0.59-2.79,0.83-3.42,2.33c0.62,1.42,2.01,1.52,3.09,2.02c27.31,12.79,54.27,26.23,78.8,44
                        c14.75,10.68,28.61,22.35,40.59,36.12c6.72,7.72,12.43,16.15,15.49,26c2.32,7.47,3.77,15.16,1.38,22.99
                        c-1.92,6.28-5.71,11.21-10.82,15.3c-10.61,8.5-22.96,13.09-36.03,15.88c-20.21,4.31-40.67,4.46-61.23,3.51
                        c-23.04-1.06-45.94-3.3-68.73-6.72c-22.51-3.37-44.53-8.53-65.38-18.02c-9.49-4.32-18.01-10.14-26.32-16.31
                        c-2.07-1.54-3.75-3.54-4.5-6.03c-2.54-8.43-7.25-15.81-11.26-23.53c-2.21-4.25-3.49-8.75-4.18-13.41
                        c-0.57-3.83-0.01-7.6,1.93-11.05c6.66-11.85,15.34-21.94,26.09-30.32c12.44-9.68,25.43-18.69,36.72-29.78
                        C1160.56,220.46,1160.79,219.95,1161.44,218.97z M830.2,385.64c3.91-1.62,7.28-1.42,10.16,2.26c1.17,1.5,3.19,2.35,4.88,3.41
                        c0.58,0.37,1.71,0.88,1.9,0.68c2.93-3.08,8.49-2.46,10.31-7.53c-1.89-2.24-4.18-4.34-6.94-5.67c-2.36-1.14-3.73-2.71-4.22-5.21
                        c-0.2-1.04-0.47-2.12-1.56-2.6c-2.78,0.54-4.93,2.37-7.41,3.39c-17.94,7.41-36.2,13.95-54.98,18.94
                        c-22.45,5.95-44.25,14.01-66.59,20.3c-3.03,0.85-2.34,2.38-2.13,4.28c0.18,1.66,1.71,1.93,2.74,2.27
                        c4.99,1.63,10.05,3.06,15.11,4.48c1.02,0.29,2.61,0.73,3.09-0.17c1.26-2.35,2.72-1.1,4.04-0.48c10.19,4.8,20.15,10.02,29.08,17
                        c6.79,5.31,12.22,11.76,16.65,19.38c-1.42,0.94-2.61,1.74-3.81,2.53c-6.73,4.4-12.43,9.97-17.94,15.77
                        c-1.43,1.5-0.68,2.57,0.03,3.83c0.69,1.21,1.41,0.96,2.63,0.47c3.64-1.48,7.18-0.19,10.46,1.33c2.67,1.25,5.39,2.21,8.26,2.6
                        c5.45,0.75,10.66,2.07,15.66,6.05c1.23-5.95-0.7-11.19-0.75-16.45c-0.05-5.61,0.25-11.19,0.77-17.03
                        c3.78,0.78,7.91-0.41,10.83,0.92c5.8,2.64,11.43,0.91,17.11,1.2c1.71,0.09,2.57-0.59,2.79-2.47c0.4-3.43,0.66-6.85,0.65-10.3
                        c0-4.76,0.03-4.65-4.38-5.69c-4.98-1.18-10.09-1.1-15.13-1.73c-3.9-0.48-7.49-2.3-10.18-4.4c-2.05-1.6,0.52-5.72,0.8-8.74
                        c0.02-0.18,0.1-0.35,0.15-0.52c3.98-15.69,11.75-29.6,20.32-43.13c0.73-1.16,1.31-2.6,2.97-3.06c1.54,1.44,3.62,2.29,4.76,4.22
                        c-2.7,0.97-3.33,3.63-4.46,5.74c-3.86,7.19-7.04,14.72-10.16,22.26c-1.6,3.85-3.02,7.75-4.33,11.71c-0.98,2.96-0.01,4.28,2.5,5.45
                        c6.87,3.21,14.38,4.58,21.31,8.35c4-11.79,8.71-22.55,15.06-32.54c0.6-0.94,1.16-1.97,0.47-3.03c-1.62-2.47-2.35-5.62-6.06-6.36
                        c-2.62-0.52-5.04-2.03-7.62-2.87C831.83,392.79,830.76,391.5,830.2,385.64z M112.62,312.39c-1.72,0.12-3.44-0.81-4.65,1.6
                        c-5.19,10.39-10.56,20.69-12.96,32.2c-6.16,29.59-16.4,57.92-26.99,86.13c-2.42,6.44-5.22,12.71-7,19.42
                        c-6.23,23.51-13.27,46.77-22.55,69.3c-2.97,7.21-5.79,14.49-8.44,21.83c-1.48,4.08-2.79,8.22-3.29,12.61
                        c-0.32,2.81,0.55,4.04,3.3,4.37c7.58,0.91,14.93,2.99,22.38,4.6c25.56,5.54,50.86,12,75.22,21.71
                        c13.82,5.51,27.64,11.03,41.51,16.39c27.26,10.54,55.01,19.65,82.77,28.75c37.14,12.16,72.88,27.8,108.52,43.69
                        c18.56,8.28,37.2,16.38,55.98,24.15c13.29,5.5,27.02,9.58,40.91,13.12c13.57,3.45,13.58,3.1,16.37-10.16
                        c4.88-23.25,9.85-46.48,15.83-69.49c8.03-30.9,18.13-61.22,26.24-92.09c6.73-25.6,13.19-51.29,18.8-77.17
                        c2.03-9.38,4.71-18.62,6.28-28.11c0.7-4.25,0.68-4.19-3.05-6.01c-1.45-0.71-2.96-1.53-4.05-2.68c-1.75-1.83-3.82-2.45-6.2-2.96
                        c-6.73-1.46-13.49-2.91-20.07-4.92c-34.37-10.5-69.19-19.36-104.02-28.15c-16.53-4.17-33.25-7.59-49.39-13.25
                        c-33.39-11.71-67.12-22.37-101.05-32.4c-15.52-4.59-31.36-7.65-47.17-10.89c-20.81-4.26-41.12-10.55-61.76-15.5
                        C133.66,316,123.26,313.44,112.62,312.39z M1031.48,570.57c2.47-0.23,3.69-1.06,4.86-1.9c10.34-7.51,18.05-17.3,24.04-28.46
                        c1.89-3.51,1.07-5.38-2.32-7.29c-3.32-1.87-6.83-3.44-9.99-5.54c-6.41-4.26-7.51-9.64-3.77-16.27c1.42-2.53,3.18-5.02,3.88-7.76
                        c1.78-7.03,6.69-9.34,13.18-9.9c2.18-0.19,4.33-0.43,6.51-0.2c8.15,0.84,6.37,0.73,8.61-6.17c0.06-0.17,0.1-0.35,0.12-0.53
                        c0.65-4.46,2.75-7.4,7.69-7.51c2.2-0.05,3.06-1.14,3.09-3.45c0.12-6.92-0.55-13.78-1.23-20.64c-0.25-2.54-1.55-3.09-4.01-3.14
                        c-5.61-0.1-11.23-0.58-16.83-1.07c-4.57-0.4-7.57-3.33-6.92-7.81c0.94-6.45,0.09-12.62-1.1-18.88c-0.72-3.84,0.14-4.9,4.25-6.08
                        c3.52-1.01,6.71-2.75,10.08-4.07c1.84-0.72,2.12-1.7,1.14-3.31c-1.89-3.1-3.58-6.33-5.6-9.33c-4.36-6.47-9.43-12.33-15.63-17.57
                        c-4.64,6.01-10.21,10.14-16.8,13.03c-3.23,1.41-5.67,0.83-7.7-1.73c-4.4-5.54-9.06-10.87-13.04-16.75
                        c-3.07-4.52-3.97-8.87-0.21-13.42c0.31-0.38,0.33-1,0.57-1.77c-9.79-3.71-19.91-5.58-30.19-6.79c-2.75-0.32-3.35,0.91-3.43,3.4
                        c-0.14,4.78-2.01,9.11-3.81,13.51c-2.86,7.01-8.28,9.13-15.21,8.99c-3.63-0.08-7.26-0.21-10.89-0.19
                        c-5.27,0.02-10.56-5.74-9.19-10.84c1.02-3.81-0.48-7.14-0.67-10.68c-0.1-1.9-1.19-2.95-3.34-2.25c-1.03,0.33-2.13,0.42-3.19,0.68
                        c-14.52,3.49-27.49,10.22-39.45,19.02c-0.95,0.7-2.35,1.17-2.21,2.95c1.95,1.74,3.94,3.59,6.02,5.34c0.51,0.43,1.3,0.54,1.97,0.76
                        c4.96,1.66,5.62,2.77,4.49,7.91c-0.31,1.41-0.81,2.79-1.35,4.13c-3.44,8.49-9.49,15.44-13.98,23.31c-0.83,1.45-2.38,2.6-4.13,1.96
                        c-6.1-2.23-12.61-3.71-17.62-8.18c-1.66-1.48-2.68-3.68-4.02-5.59c-5.42,5.45-14.87,23.09-15.88,29.15
                        c-0.19,1.12,0.04,1.89,0.93,2.18c7.12,2.38,12.9,8.18,21.07,8c3.12-0.07,4.2,1.71,3.31,4.77c-0.75,2.59-1.77,5.06-3.83,7.08
                        c-3.27,3.19-4.26,8.04-2.99,11.58c1.82,5.06,0.06,8.83-1.65,12.91c-1.46,3.49-2,3.57-5.88,2.76c-5.46-1.14-11-1.47-16.59-2.03
                        c1.8,20,5,33.78,9.48,40.84c1.27-0.23,2.17-1.17,3.11-1.95c3.36-2.77,6.64-5.65,10.02-8.4c5.59-4.53,10.1-3.39,12.72,3.15
                        c0.4,1.01,0.72,2.06,1.17,3.05c2.08,4.65,3.99,9.55,8.19,12.67c3.15,2.34,3.17,4.95,2.17,8.09c-0.89,2.78-2.12,5.4-3.98,7.68
                        c-2.63,3.24-5.01,6.74-7.96,9.66c-2.28,2.26-1.59,3.47,0.42,5.1c3.39,2.76,6.88,5.35,10.55,7.72c7.37,4.76,15.35,8.19,23.73,10.71
                        c1.64,0.49,3.32,1.03,4.01-1.22c2.11-6.92,4.98-13.67,6.07-20.83c0.41-2.69,1.1-3.75,3.63-4.33c6.66-1.54,12.98,0.23,19.25,1.89
                        c5.18,1.37,5.45,1.85,5.64,7.11c0.31,8.26,1.43,16.47,1.14,24.66c8.23,1.53,15.83,1.29,23.2-2.32c3.4-1.67,7.13-2.67,10.7-3.98
                        c3.06-1.13,6.12-2.29,9.18-3.4c1.73-0.63,2.32-1.58,1.17-3.26c-0.61-0.89-1.21-1.83-1.63-2.83c-1.55-3.75-4.78-6.37-6.57-9.96
                        c-1.17-2.34-1.65-4.76,0.77-6.33c6.27-4.08,11.42-9.68,17.69-13.57c6.15-3.82,13.79-4.76,17.38,4.6c1.24,3.24,3.43,5.98,5.58,8.67
                        C1031.84,563.03,1033.86,566,1031.48,570.57z M596.93,643.06c1.07,2.05,2.69,3.23,4.17,4.52c10.53,9.21,22.54,15.83,35.72,20.42
                        c4.28,1.49,4.53,1.41,6.54-2.83c1.81-3.81,2.23-8.02,3.4-12.02c1.95-6.72,7.38-9.95,14.08-8.07c7.85,2.2,15.69,4.46,23.35,7.28
                        c5.05,1.85,5.86,2.81,5.86,8.4c0,3.62-0.32,7.25-0.52,10.87c-0.24,4.22-0.24,4.28,4.03,4.06c14.72-0.76,27.77-6.59,40.49-13.41
                        c2.24-1.2,2.41-2.84,1.66-5.01c-0.98-2.84-2.85-5.06-4.86-7.14c-2.57-2.66-4.47-5.73-5.97-9.04c-1.5-3.32-1.09-4.95,1.9-6.81
                        c2.26-1.41,3.8-3.37,5.12-5.53c1.52-2.47,2.81-5.08,4.25-7.61c3.56-6.29,9.34-7.9,15.67-4.32c3.98,2.25,7.49,5.11,10.64,8.43
                        c1.93,2.03,3.94,3.98,6.16,6.21c6.36-8.86,10.73-17.98,14.19-27.57c0.29-0.81,0.53-1.97,0.17-2.63c-1.64-3.02-0.1-5.45,1.61-7.93
                        c-2.62-0.92-4.8-1.82-7.06-2.46c-2.71-0.77-5.04-2.22-6.95-4.14c-3.24-3.26-6.54-7.19-5.6-11.82c1.23-6.11,1.96-12.15,1.77-18.33
                        c-0.09-2.93,1.46-4.26,4.11-4.81c3.63-0.75,7.23-0.42,10.83,0.13c2.96,0.45,5.92,0.95,8.89,1.43c1.19-4.21,0.43-8.03,0.45-11.81
                        c0.05-8.19-1.37-16.25-2.56-24.33c-0.35-2.37-1.53-3.27-4.08-2.99c-3.29,0.37-6.35,1.52-9.52,2.25c-4.6,1.05-7.15,0.04-9.73-3.91
                        c-0.99-1.51-1.95-3.11-2.56-4.79c-3.08-8.53-5.99-17.12-9.09-25.65c-1.02-2.79-0.09-4.43,2.26-5.85c3.57-2.17,7.06-4.46,10.53-6.79
                        c3.28-2.2,3.25-2.27,0.93-5.41c-6.09-8.24-14.45-13.65-23.17-18.63c-1.74-1-2.62-0.53-3.35,1.1c-0.52,1.16-1.13,2.28-1.68,3.42
                        c-3.03,6.21-6.23,12.32-10.81,17.58c-3.45,3.95-5.85,4.01-8.27-0.65c-2.2-4.25-5.47-7.12-9.13-9.84c-4.2-3.13-5.79-7.28-4.67-12.44
                        c0.65-3.01,1.21-6.05,1.9-9.05c0.48-2.1-0.19-3.08-2.4-3.06c-1.08,0.01-2.17-0.33-3.25-0.32c-5.35,0.05-9.6-1.7-11.76-6.99
                        c-0.95-2.32-2.42-2.69-4.77-1.77c-2.5,0.98-5.25,2.33-7.91,1.34c-3.39-1.26-6.4-0.22-9.51,0.55c-6.9,1.72-13.41,4.46-19.94,7.72
                        c4.48,3.99,7.52,8.92,10.54,13.88c2.34,3.84,2.56,7.93,1.34,12.07c-0.87,2.93-2.2,5.73-3.34,8.58c-1.05,2.61-2.88,4.21-5.82,4.01
                        c-2.58-0.17-4.53,1.05-6.43,2.5c-1.45,1.1-2.9,2.18-4.36,3.27c-2.16,1.62-4.25,1.65-6.48-0.01c-2.8-2.08-5.18-4.55-7.43-7.17
                        c-3.3-3.83-5.79-8.22-8.61-12.93c-12.25,14.13-21.49,29.63-30.29,47.03c3.81-1.4,6.08,0.26,8.44,1.49
                        c4.19,2.18,8.32,4.47,12.4,6.84c4.97,2.89,5.95,5.26,4.25,10.87c-1.27,4.16-2.93,8.19-5.56,11.74c-1.74,2.34-3.06,4.73-3.07,7.92
                        c-0.01,3.25-1.3,6.36-2.93,9.25c-1.06,1.88-2.31,2.43-4.47,1.5c-6.77-2.9-14.03-3.58-21.27-4.19c-4.01-0.34-4.13-0.11-4.81,3.95
                        c-1.55,9.19-1.71,18.46-0.91,27.69c0.49,5.7,0.98,11.52,3.44,17.3c2.03-0.84,3.83-1.61,5.66-2.34c5.24-2.09,10.56-3.91,16.2-4.6
                        c5.75-0.71,9.05,1.55,9.61,7.23c0.79,8.09,4.69,13.95,11.62,17.96c0.63,0.36,1.25,0.75,1.85,1.15c1.53,1.04,2.27,2.68,1.65,4.27
                        c-1.59,4.07-1.05,9.87-7.73,10.15c-0.62,0.03-1.25,0.7-1.82,1.15C605.91,636.96,601.58,640.22,596.93,643.06z M637.88,243.08
                        c-2.52-1.13-3.93-1.84-5.4-2.42c-5.23-2.07-10.4-4.31-15.72-6.09c-5.31-1.77-9.1-4.7-11.19-10.11c-1.5-3.9-1.89-3.8-5.97-2.36
                        c-15.39,5.44-30.78,10.88-46.14,16.4c-20.31,7.3-41.04,13.34-61.22,21.05c-14.72,5.63-29.78,10.41-45.24,13.76
                        c-17.55,3.8-35.03,7.88-52.57,11.71c-25.68,5.62-51.13,12.27-77.27,15.8c-9.65,1.3-19.33,2.71-28.99,4.73
                        c65.29,14.38,131.26,25.45,195.86,43.22c-1.14-1.48-2.5-2.55-3.78-3.7c-3.46-3.12-5.37-6.66-3.81-11.57
                        c0.81-2.56,0.88-5.36,1.32-8.05c0.24-1.45,0.16-2.7-0.52-4.15c-2.57-5.54-1.37-8.24,4.49-10.25c6.52-2.24,13.11-4.26,19.64-6.44
                        c12.78-4.27,24.46-10.99,36.65-16.56c27.55-12.58,54.86-25.72,82.91-37.2C626.28,248.68,631.46,246.05,637.88,243.08z
                        M1210.06,228.2c4.88,2.88,9.95,4.26,15.07,5.42c23.88,5.43,43.4,18.83,61.98,33.88c6.2,5.02,11.9,10.64,18,15.78
                        c12.36,10.4,24.75,20.66,34.03,34.22c3.98,5.82,5.98,11.91,6.58,18.65c0.36,4.06-1.02,7.41-4.75,9.66
                        c-5.07,3.06-10.34,5.01-16.41,5c-19.06-0.04-38.12,0.05-57.16-1.22c-5.45-0.36-10.8-1.25-16.12-2.47
                        c-2.53-0.58-5.26-1.42-6.74-3.31c-2.46-3.15-5.73-3.34-9.05-3.89c-1.79-0.3-3.58-0.56-5.35-0.94c-15.07-3.25-30.11-6.63-45.21-9.74
                        c-5.02-1.03-9.81-2.55-14.42-4.74c-3.6-1.71-7.2-3.44-10.81-5.14c-5.43-2.55-10.82-5.16-15.61-8.83
                        c-6.17-4.73-7.75-9.79-5.57-17.23c0.77-2.61,1.86-5.19,2.12-7.85c0.37-3.8,2.05-6.84,4.05-9.92c8.69-13.4,20.9-23.64,31.45-35.37
                        c2.68-2.98,5.82-5.44,9.15-7.69c11.13-7.53,22.22-15.12,32.6-23.69c4.16-3.43,8.05-7.35,13.43-9.07c0.98-0.31,1.93-1.1,2.62-1.91
                        c2.43-2.86,5.74-4.37,8.93-6.08c12.8-6.85,25.88-13.14,39.07-19.2c28.69-13.18,57.83-25.24,87.66-35.63
                        c24.85-8.66,50.15-15.81,75.59-22.45c1.69-0.44,3.62-0.36,5.03-2.19c-3.2-3.35-9.79-1.82-10.94-8.01
                        c-7.96,3.22-15.7,5.92-23.06,9.4c-21.24,10.03-43.16,17.99-66.04,23.38c-20.17,4.75-39.89,10.92-58.75,19.64
                        c-22.35,10.34-44.97,20.16-65.82,33.45c-9.32,5.94-19.22,10.84-28.18,17.49c-15.57,11.55-31.67,22.45-46.69,34.7
                        c-13.18,10.75-25.97,22.09-35.65,36.37c-4.93,7.27-7.68,14.76-3.2,23.29c1.35,2.57,2.54,5.22,3.94,7.77
                        c1.85,3.36,3.26,6.84,4.27,10.56c2,7.31,5.08,13.91,12.74,17.13c2.66,1.12,5.11,2.76,7.72,4c19.04,9.06,39.3,13.96,60.02,16.86
                        c29.86,4.18,59.9,5.98,90.07,5.63c12.38-0.14,24.65-1,36.78-3.43c12.54-2.51,24.66-6.28,35.14-13.94
                        c7.64-5.58,10.38-14.68,7.54-23.71c-2.34-7.43-6.74-13.62-11.66-19.48c-8.22-9.77-17.86-18.06-27.82-25.96
                        c-31.34-24.86-67.38-41.16-103.77-56.82c-1.26-0.54-2.35-0.74-3.6-0.05C1218.92,222.95,1214.33,225.04,1210.06,228.2z
                        M494.58,317.51c8.94,3.89,17.41,8.06,26.22,11.31c19.3,7.12,37.63,16.17,55.57,26.16c7.28,4.05,14.66,7.98,22.77,10.24
                        c1.91,0.54,3.81,1.17,5.82,0.23c7.21-3.39,14.92-5.67,21.7-10.05c2.58-1.66,5.39-3,8.22-4.21c11.33-4.85,22.72-9.57,34.07-14.38
                        c14.52-6.15,28.87-12.73,43.61-18.37c24.9-9.53,49.69-19.34,75.67-25.7c1.03-0.25,2-0.79,3.31-1.33
                        c-3.54-2.53-7.35-3.72-11.09-4.97c-13.42-4.49-26.82-8.99-40-14.16c-6.08-2.38-12.31-4.35-18.6-6.1
                        c-12.08-3.37-23.78-7.76-34.99-13.4c-5.03-2.53-10.27-4.57-15.66-6.18c-4.71-1.41-9.11-1.23-13.5,1.62
                        c-6.85,4.44-14.17,8.1-21.59,11.5c-25.22,11.56-50.67,22.64-76.41,32.95c-20.84,8.35-41.14,18.24-63.09,23.66
                        C495.96,316.48,495.42,317,494.58,317.51z M1206.82,234.02c0.23,4.01-3.13,5.18-6.11,6.85c-9.53,5.32-18.74,10.97-24.94,20.48
                        c-3.37,5.17-7.85,9.55-12.51,13.58c-5.44,4.7-9.02,10.3-10.28,17.39c-0.22,1.24-0.67,2.45-1.08,3.65c-1.5,4.38-1.55,4.52,2.34,6.97
                        c6.15,3.88,12.89,6.65,19.3,10.04c3.7,1.96,7.56,3.42,11.62,4.53c13.11,3.6,26.29,6.98,39.21,11.2c9.62,3.14,19.68,4.45,29.16,8.26
                        c6.92,2.78,14.74,1.25,22.1,1.97c15.96,1.54,31.92,0.47,47.87,0.93c3.01,0.09,5.65-1.09,8.32-2.27c2-0.88,2.63-2.23,2.24-4.33
                        c-0.27-1.46-0.69-2.91-1.6-4c-5.21-6.27-9.67-13.17-15.81-18.64c-13.27-11.81-27.04-23.05-40.47-34.67
                        C1255.63,258.21,1232.56,244.18,1206.82,234.02z M262.46,314.81c0.13,1.18,0.19,1.88,0.29,2.58c0.72,5.28,0.77,5.15,5.91,6.73
                        c7.95,2.45,16.12,4.02,24.09,6.34c9.73,2.83,19.55,5.27,29.07,8.99c9.41,3.69,19.52,5.56,29.2,8.62
                        c10.21,3.23,20.27,6.91,30.68,9.48c34.38,8.47,68.34,18.35,101.67,30.29c19.64,7.04,38.98,14.91,58.85,21.34
                        c11.52,3.72,23.26,6.82,34.47,11.44c1.67,0.69,3.21,0.17,4.8,0.25c1.57,0.08,3.01-0.11,4.39,1.42c3.4,3.77,5.95,4.13,10.52,2.1
                        c26.85-11.96,53.61-24.13,79.72-37.66c18.85-9.76,38.14-18.66,56.87-28.68c12.15-6.5,24.1-13.41,36.67-19.14
                        c19.67-8.97,39.95-16.35,60.16-23.93c1.59-0.6,3.39-0.85,4.63-2.35c-3.07-3.38-6.96-3.63-10.67-4.26
                        c-2.12-0.36-3.94-0.72-5.49-2.73c-2.31-3-5.1-2.96-7.64-0.09c-4.07,4.6-8.93,7.79-14.69,9.93c-6.13,2.28-11.81,5.55-17.48,8.83
                        c-8.01,4.64-16.17,9.04-24.26,13.54c-19.41,10.79-40.22,18.52-60.44,27.54c-7.95,3.55-15.67,7.76-24.12,10.01
                        c-14.11,3.75-27.11,10.35-40.58,15.67c-10.39,4.1-20.77,8.68-30.46,14.47c-1.28,0.76-2.64,1.24-4.1,1.38
                        c-8.37,0.83-16.61,1.06-24.57-2.64c-9.04-4.2-18.25-8.05-27.38-12.07c-3.62-1.59-7.63-2.6-9.5-6.73c-0.48-1.06-1.78-1.21-2.78-1.55
                        c-12.86-4.43-25.58-9.21-38.62-13.18c-34.21-10.41-68.65-19.91-103.41-28.28c-34.22-8.24-68.74-15.22-102.47-25.46
                        C278.33,314.75,270.38,315.66,262.46,314.81z M556.84,220.58c-1.86-1.72-3.75-1.36-5.51-1.46c-7.25-0.41-14.51-0.71-21.75-1.23
                        c-20.42-1.45-40.72-0.77-60.6,4.39c-17.38,4.51-34.87,8.64-51.89,14.48c-4.62,1.59-9.4,2.77-14.16,3.9
                        c-23.12,5.51-46.28,10.91-68.8,18.65c-17.71,6.09-35.87,10.57-54.12,14.56c-14.88,3.25-29.99,5.45-44.75,9.31
                        c-9.82,2.57-19.79,4.63-29.14,8.79c-5.64,2.51-10.12,6.35-13.34,11.64c-2.2,3.6-2.1,3.78,2.17,4.8c13.07,3.12,26.4,4.91,39.57,7.5
                        c6.51,1.28,12.98,2.79,19.47,4.19c0.92-4.97,0.92-4.97-2.15-7.56c-3.33-2.82-2.81-7.72,1.07-9.77c2.25-1.19,4.59-2.11,7.18-2.41
                        c7.96-0.92,15.66-2.96,23.3-5.35c2.76-0.86,5.6-1.52,8.44-2.08c18.87-3.71,37.83-7.01,56.38-12.15
                        c19.23-5.33,38.46-10.68,57.59-16.34c22.43-6.64,45.23-12.06,67.15-20.42c22.41-8.55,45.28-15.58,68.84-20.26
                        C546.73,222.76,551.62,221.68,556.84,220.58z M778.28,649.9c1.08,0.86,2,0.6,2.81,0.39c17.71-4.58,35.71-8.14,52.57-15.66
                        c11.1-4.96,22.67-8.71,34.48-11.69c10.54-2.66,21.42-3.86,31.74-7.5c6.32-2.23,12.71-4.4,19.22-5.95
                        c6.06-1.45,11.08-3.91,14.14-9.84c-4.17-2.44-9.02-3.17-13.59-4.68c-2.42-0.8-4.2-0.83-5.5,2.3c-1.35,3.26-3.08,3.47-6.66,2.35
                        c-0.86-0.27-1.72-0.57-2.58-0.87c-9.47-3.35-18.25-8.02-26.43-13.84c-1.05-0.75-2.08-2.37-3.68-0.74c-3.01,3.09-6.85,2.12-9.61,0.6
                        c-4.48-2.48-8.19-1.69-12.23,0.43c-1.76,0.92-3.68,1.52-5.53,2.28c-13.94,5.69-28.03,11-42.22,16.02c-3.36,1.19-5.48,2.96-6.49,6.5
                        c-1.69,5.94-4.35,11.52-6.99,17.1C787.94,635.1,783.44,642.71,778.28,649.9z M1180.99,204.76c-0.4-1.39-1.24-1.3-1.85-1.49
                        c-35.83-11.18-72.58-17.61-109.95-20.3c-16.64-1.2-33.32-1.55-50.06-0.72c-22.3,1.11-44.45,3.3-66.53,6.54
                        c-27.54,4.05-54.3,11.39-80.93,19.21c-5.24,1.54-9.9,4.48-14.71,7c-1.27,0.66-2.12,1.71-1.29,3.04c0.76,1.21,1.91,0.29,2.91-0.02
                        c4.34-1.34,8.71-2.58,13.25-2.97c13.95-1.21,27.55-4.3,41.24-7.07c20.62-4.17,41.65-5.7,62.44-8.79c9.56-1.42,19.2-0.75,28.79-1.46
                        c8.13-0.6,16.33-1.42,24.44-0.99c12.34,0.64,24.67,0.13,37.01,0.76c14.84,0.76,29.75,0.1,44.59,1.68
                        c7.75,0.83,15.37,1.71,22.95,3.95c10.77,3.19,21.49,6.59,32.33,9.56c1.38,0.38,2.77,1.12,4.17,0.11
                        C1173.57,210.11,1177.35,207.38,1180.99,204.76z M1444.48,75.02c15.13,7.14,29.35,13.93,43.93,19.91
                        c8.58,3.52,17.12,7.35,24.22,13.33c3.81,3.21,6.49,2.63,10,0.33c9.13-5.97,18.9-10.74,28.83-15.21c4.72-2.12,9.6-4,13.93-6.97
                        c-0.92-1.37-2.2-1.64-3.38-2.07c-6.47-2.36-12.92-4.76-19.42-7.03c-17.95-6.26-36.26-11.57-53.26-20.33
                        c-1.43-0.74-2.61-0.86-4.07-0.15c-6.21,3.04-12.92,4.77-19.4,7.09C1458.53,66.56,1451.76,70.29,1444.48,75.02z M483.15,719.86
                        c3.18,0,5.54-0.17,7.87,0.04c3.07,0.28,4.5-0.84,5.29-3.93c4.86-18.96,11.07-37.57,14.81-56.83c3.73-19.24,10.03-37.89,13.41-57.2
                        c2.86-16.28,6.65-32.29,11.3-48.16c6.68-22.8,12.4-45.88,20.69-68.19c4.49-12.08,8.23-24.41,11.43-36.9
                        c0.85-3.33,1.68-6.67,2.4-10.03c0.25-1.16,0.7-2.62-1.24-2.98c-3.56-0.67-7.12-1.38-10.68-2.03c-1.26-0.23-2.06,0.23-2.2,1.65
                        c-0.2,1.98-0.58,3.95-0.73,5.94c-0.66,8.16-2.09,16.17-4.02,24.12c-1.37,5.63-2.71,11.29-3.67,17
                        c-3.77,22.59-9.56,44.66-16.74,66.37c-1.88,5.69-3.5,11.38-4.65,17.29c-8.24,42.46-19.46,84.1-35.29,124.4
                        C487.45,699.79,486.36,709.71,483.15,719.86z M854.82,322.84c-2.22-2.43-5.14-3.1-7.62-4.51c-2.27-1.3-4.25-1.14-6.54,0.1
                        c-6.21,3.38-12.54,6.56-18.83,9.8c-19.05,9.79-38.29,19.22-57.11,29.43c-21.23,11.53-42.69,22.54-64.98,31.86
                        c-17.4,7.27-34.31,15.67-52.09,22.13c-16.53,6.01-32.74,12.91-49.11,19.37c-1.91,0.75-3.65,1.58-4.75,3.41
                        c-0.51,0.85-0.61,1.56,0.05,2.45c2.31,3.11,5.26,3.97,8.98,2.41c9.03-3.8,18.08-7.54,27.05-11.46
                        c23.45-10.25,46.08-22.28,69.68-32.21c24.77-10.42,48.96-22.06,72.92-34.21c22.66-11.49,45.57-22.47,68.94-32.44
                        C845.85,327.06,850.49,325.56,854.82,322.84z M805.27,515.66c0.52,3.86,0.93,6.87,1.33,9.89c1.17,9,1.68,18.03,1.62,27.11
                        c-0.02,2.73-0.98,4.04-3.75,4.07c-3.45,0.05-6.9,0.12-10.34,0.38c-5.5,0.42-10.99,1.01-16.94,1.57
                        c6.69,5.66,13.58,9.58,20.48,13.51c1.56,0.89,3.01,2.04,4.33,3.27c2.61,2.42,4.21,5.07,3.29,9.07c-0.9,3.89-0.38,4.11,3.47,3.44
                        c13.42-2.35,26.56-5.82,39.64-9.56c0.87-0.25,1.71-0.51,2.32-1.56c-3.13-2.64-6.4-5.21-9.44-8.02c-3.57-3.3-6.46-7.32-10.8-9.82
                        c-2.31-1.33-2.97-4.04-4.28-6.19c-0.8-1.32-0.17-2.19,0.89-3.23c3.52-3.47,7.37-6.31,12.19-7.74c1.38-0.41,3.48-0.31,3.12-2.83
                        c-0.32-2.23-0.73-4.43-3.43-4.84c-7.13-1.1-14-4.28-21.38-3.21c-3.44,0.5-4.86-0.82-6.06-3.73
                        C809.97,523.45,808.38,519.6,805.27,515.66z M1651.86,58.94c-1.62-0.37-2.45,0.5-3.33,1.04c-6.18,3.79-12.61,7.12-19.13,10.28
                        c-10.28,4.98-20.19,10.56-29.67,16.96c-3.65,2.47-6.14,4.64-5.02,9.39c0.36,1.53-0.04,3.24-0.14,4.87
                        c-0.33,5.2-0.68,10.39-1.07,16.21c4.97-2.13,9.41-4.06,13.87-5.94c16.38-6.88,32.59-14.04,46.64-25.27
                        c2.26-1.81,3.29-3.52,2.97-6.34C1656.16,72.78,1654.31,65.7,1651.86,58.94z M920.33,342.43c-3.58-1.82-7.48-2.29-11.41-2.66
                        c-6.13-0.56-12.38-0.47-18.31-2.31c-7.01-2.18-14.09-3.32-21.42-3.07c-1.35,0.04-3.15,0.71-4.02-0.78
                        c-1.07-1.82-2.15-1.42-3.56-0.66c-7.51,4.05-15.5,7.08-23.23,10.65c-26.81,12.39-53.4,25.26-79.72,38.67
                        c-3.18,1.62-6.69,2.67-9.65,4.97c1.09,0.65,1.89,0.16,2.75-0.1c8.17-2.38,16.37-4.68,24.54-7.09c16.34-4.83,32.74-9.48,48.4-16.29
                        c20.23-8.8,41.14-15.06,63.1-17.74C898.6,344.7,909.51,344.64,920.33,342.43z M1508.4,140.58c2.2,1.05,4.14,0.32,5.86-0.55
                        c4.33-2.18,8.97-2.67,13.69-2.93c15.55-0.87,31.04-2.19,46.31-5.43c2.12-0.45,3.7-1.21,4.57-3.29c3.93-9.36,5.72-19.25,7.85-29.25
                        c-0.96,0-1.36-0.11-1.66,0.02c-17.95,7.87-37.09,12.38-55.33,19.42c-2.55,0.98-5.18,1.68-7.93,1.69c-1.44,0-2.52,0.38-2.74,1.95
                        c-0.54,3.88-3.35,6.29-5.73,9C1510.91,133.92,1508.7,136.75,1508.4,140.58z M799.54,296.78c-1.22-0.69-1.91-0.35-2.56-0.09
                        c-18.48,7.5-37.31,14.08-55.68,21.87c-25.87,10.98-52.08,21.11-78.46,30.77c-14.96,5.47-30.08,10.35-44.4,17.6
                        c-6.15,3.11-9.94,6.43-10.23,13.27c-0.01,0.28,0.27,0.58,0.48,1c2.73,0.05,5.24-1.01,7.71-2.04c12.36-5.18,24.99-9.68,37.42-14.68
                        c23.23-9.35,46.04-19.49,68.43-30.66c7.79-3.88,15.12-8.63,23.18-11.98c9.37-3.89,18.62-8.11,28.27-11.3
                        c6.56-2.17,12.6-5.55,18.9-8.33C795.22,301.06,797.58,299.33,799.54,296.78z M743.72,219.75c0.06,0.35,0.12,0.71,0.18,1.06
                        c1.21,0.33,2.42,0.73,3.65,0.99c9.2,1.98,18.46,3.72,27.58,6.01c3.41,0.86,6.29,1.06,9.28-0.86c1.21-0.77,2.61-1.24,3.92-1.85
                        c15.13-7.03,29.3-15.84,44.14-23.42c0.47-0.24,0.86-0.56,0.6-1.37c-12.84-1.55-25.62-4.18-38.62-5.28
                        c-3.4-0.29-6.38,0.59-9.28,2.35c-7.43,4.51-14.9,8.96-22.44,13.28C756.63,214.16,750.33,217.27,743.72,219.75z M791.26,259.93
                        c0.99,0,1.42,0.13,1.69-0.02c16.35-8.87,33.55-16.24,48.66-27.34c1.61-1.18,1.99-2.35,1.81-4.07c-0.53-5.03-1.01-10.06-1.59-15.09
                        c-0.25-2.15-1.59-2.65-3.5-1.91c-2.19,0.85-4.48,1.52-6.54,2.63c-13.87,7.44-27.38,15.56-41.91,21.71
                        c-2.13,0.9-2.68,2.26-1.97,4.26C790.17,246.47,790.61,253.14,791.26,259.93z M1459.17,96.38c4.64,9.01,4.87,12.54,1,21.61
                        c-1.01,2.36-0.72,4.56-0.68,6.9c0.04,3.14,1.26,4.86,4.59,5.46c5.36,0.97,10.44,3,15.4,5.24c3.63,1.64,7.22,3.4,10.83,5.08
                        c5.32,2.48,6.77,1.96,8-3.57c1.21-5.45,3.66-10.18,7.02-14.55c2.9-3.79,2.86-3.86-1.07-6.4
                        C1490.45,107.23,1474.59,103.09,1459.17,96.38z M482.43,322.83c0,4.39-0.01,7.64,0,10.88c0,1.1,0.05,2.23,1.15,2.87
                        c4.22,2.44,8.23,5.52,12.76,7.12c5.45,1.92,10.85,4.13,16.46,5.55c11.62,2.94,22.85,7.01,34.02,11.3
                        c14.37,5.52,29.18,9.89,43.01,16.8c1.59,0.8,3.44,1.1,5.19,1.55c1.95,0.51,3.15-0.42,3.73-2.21c0.72-2.23-1.14-2.36-2.43-2.68
                        c-10.28-2.61-19.67-7.32-28.97-12.22c-11.22-5.91-22.48-11.74-34.06-16.96c-9.09-4.1-18.51-7.38-27.47-11.78
                        C498.55,329.46,490.96,326.52,482.43,322.83z M837.01,526.72c-0.79-2.93-1.26-4.82-1.81-6.69c-3-10.13-4.64-20.48-5.08-31.02
                        c-0.12-2.88,0.52-6.24-0.74-8.52c-1.45-2.63-5.44-2.3-8.22-3.51c-2.33-1.01-4.68-1.96-7.07-2.82c-1.34-0.48-2.65-0.97-4.15-1.12
                        c-2.5-0.25-3.58,0.29-3.67,3.02c-0.16,4.56,0.39,9.05,0.93,13.53c1.19,9.93,3.16,19.67,8.3,28.5c1.14,1.95,2.12,3.27,4.6,2.52
                        c1.83-0.55,3.7-0.33,5.17,0.89C828.43,524.17,832.41,524.81,837.01,526.72z M763.2,264.84c2.5,0.81,4.47,1.63,6.52,2.06
                        c3.21,0.67,5.22-2.07,7.81-3.17c1.91-0.82,1.01-2.86,1.16-4.38c0.64-6.61-1.63-12.88-2.33-19.33c-0.2-1.86-1.34-2.78-3.18-3.13
                        c-2.49-0.46-4.93-1.17-7.41-1.69c-10.44-2.19-20.99-3.95-30.5-9.27c-1.86-1.04-4.07-1.39-6.22-1.82c-2.71-0.55-4.42,0.18-5.87,2.55
                        c-3.27,5.33-5.03,11.21-6.48,17.19c-0.45,1.84-1.9,3.75-0.3,6.41c0.86-3.47,3-5.24,5.57-6.72c1.72-0.99,3.39-2.15,4.83-3.51
                        c3.9-3.65,7.82-3.67,12.32-0.98c7.52,4.49,15.74,7.29,24.22,9.39c2.46,0.61,4.87,1.36,7.06,2.74c4.9,3.08,4.96,5.07,0.18,8.32
                        C768.27,261.07,765.5,262.05,763.2,264.84z M857.81,371.7c2.1,3.31,3.61,5.54,4.96,7.87c2.09,3.61,3.41,7.23-0.36,10.7
                        c-1.93,1.78-1.36,4.37-1.79,6.61c-0.08,0.43,0.19,1.22,0.53,1.4c3.35,1.74,6.78,4.23,10.66,2.73c2.69-1.04,4.85-0.73,7.25,0.19
                        c4.4,1.69,4.4,1.68,7.43-1.95c8.5-10.17,8.54-10.2-1.35-19.1c-2.7-2.43-5.72-5.13-9.29-5.39
                        C870.08,374.37,864.54,372.84,857.81,371.7z M573,617.73c0.15,0.82,0.09,1.42,0.36,1.81c3.86,5.7,8.19,11.03,12.66,16.25
                        c0.56,0.65,1.5,1.59,2.11,1.48c2.93-0.49,4.25,2.22,6.33,3.33c3.86-4.01,6.87-8.18,10.04-12.8c-5.14-3.17-8.2-7.57-10.78-12.42
                        c-1.81-3.4-1.91-3.23-5.81-1.76C583.11,615.43,578.77,618.87,573,617.73z M579.51,488.14c8.48-14,17.53-27.44,28.74-40.08
                        c-3,0.46-5.28,0.87-7.57,1.14c-3.3,0.39-5.93-0.26-7.44-3.82c-0.85-2-2.06-4.17-4.76-5.15C584.19,456.15,582,472.14,579.51,488.14z
                        M851.91,468.6c1.34,0.25,2.29-0.26,2.67-1.78c1.06-4.23,2.38-8.35,4.87-11.99c0.64-0.94,0.42-1.81-0.41-2.34
                        c-4.1-2.64-8-5.66-12.51-7.58c-2.14-0.91-3.8-0.55-5.28,1.97c-2.94,5-3.19,10.69-4.97,15.97c-0.33,0.98,0.39,1.39,0.97,1.65
                        C841.87,466.62,846.62,468.34,851.91,468.6z M749.5,651.5c5.32-4.13,9.74-8.38,13.73-13.08c0.79-0.93,1.99-1.96,0.62-3.23
                        c-4.41-4.05-9.08-7.77-14.86-9.72c-1.9-0.64-3.49-0.29-4.36,1.93c-1.24,3.2-2.58,6.37-4.09,9.45c-0.7,1.43-0.36,2.36,0.63,3.33
                        C744.41,643.37,746.81,647.19,749.5,651.5z M675.32,675.83c1.99,0.14,3.97,0.3,5.96,0.4c0.9,0.04,1.85-0.01,2.49-0.77
                        c0.56-0.66,0.05-10.5-0.53-11.27c-0.48-0.64-1.19-0.71-1.9-0.82c-4.47-0.71-8.92-1.61-13.41-2.11c-2.49-0.28-5.31-1.73-7.42-0.47
                        c-2.44,1.45-1.41,5-2.58,7.42c-0.39,0.8-0.46,1.76-0.82,2.58c-0.92,2.1-0.04,3.05,1.99,3.32
                        C664.5,674.83,669.85,675.89,675.32,675.83z M582.11,515.96c-4.03,9.54-7.32,18.13-9.4,27.74c5.75-0.26,11.11-1.36,16.52-1.1
                        c1.76,0.08,2.03-1.02,1.94-2.49c-0.24-3.66,0.1-7.27,1.6-10.66c0.7-1.58,0.57-2.63-1.08-3.57
                        C587.86,523.72,584.61,520.9,582.11,515.96z M937.35,595.48c1.52-2.79,1.92-5.14,1.53-7.79c-0.5-3.39-0.55-6.84-0.78-10.27
                        c-0.37-5.53-0.36-5.54-5.75-6.4c-0.71-0.11-1.48-0.01-2.16-0.2c-2.33-0.68-3.74,0.22-4.73,2.34c-1.75,3.77-3.55,7.52-5.47,11.21
                        c-1.01,1.94-0.43,2.95,1.4,3.78C926.66,590.52,931.88,592.96,937.35,595.48z M732.35,431.8c-3.58-1.03-6.68-0.64-9.73-0.77
                        c-9.94-0.45-10.04,0.57-11.12,9.38c-0.7,5.68,0.12,6.99,5.41,9.62c0.97,0.48,1.97,0.92,2.88,1.51c1.53,0.99,2.64,0.75,3.58-0.82
                        C726.91,444.86,730,438.79,732.35,431.8z M864.62,364.87c4.15,1.73,8.39,3.28,12.41,5.27c2.6,1.29,4.46,1.3,6.78-0.69
                        c5.51-4.73,11.78-8.38,18.05-12c0.98-0.56,2.18-0.84,2.58-2.65C890.73,357.06,877.45,359.42,864.62,364.87z M632.38,465.87
                        c2.45-3.13,4.66-6,6.93-8.81c0.75-0.93,1.32-1.81,0.35-2.85c-2.96-3.18-4.05-7.64-7.24-10.84c-4.77,3.61-9,7.41-12.6,11.91
                        C624.2,458.82,627.28,463.26,632.38,465.87z M1021.2,574.91c-1.16-1.83-2.01-3.21-2.89-4.57c-1.77-2.72-3.04-6.94-5.46-7.77
                        c-2.99-1.02-5.84,2.82-8.75,4.52c-6.36,3.71-6.31,3.8-3.37,10.53c0.07,0.17,0.19,0.32,0.23,0.49c0.43,2.03,1.46,2.42,3.53,1.93
                        C1009.96,578.76,1015.29,577.04,1021.2,574.91z M875,539.47c-1.94-4.23-3.79-7.75-5.17-11.44c-0.88-2.36-1.99-2.57-4.01-1.61
                        c-5.73,2.7-11.85,4.63-17.14,8.73c1.3,1.6,3.37,2.32,4.19,4.21c0.31,0.72,0.95,1.04,1.74,1.02
                        C861.23,540.25,867.89,541.04,875,539.47z M1084.74,448.19c-0.37-4.53-1.31-8.36-2.41-12.14c-2.96-10.14-0.72-7.91-10.4-4.96
                        c-1.45,0.44-2.11,1.15-2.05,2.65c0.14,3.46-1.13,6.7-1.84,10.38C1073.33,446,1078.64,447.48,1084.74,448.19z M1439.99,89.7
                        c-6.04-4.11-12.65-5.22-19.09-6.92c-1.27-0.34-2.23,0.17-2.51,1.38c-0.9,3.92-2.79,7.44-4.23,11.15c-0.86,2.22,0.01,3.2,2.31,2.45
                        C1424.35,95.16,1432.16,92.4,1439.99,89.7z M1064.88,529.56c2.01-4.25,2.78-8.32,3.81-12.29c1.76-6.75,0.87-7.69-6.11-7.39
                        c-1.79,0.08-3.06,0.49-3.93,2.2c-0.98,1.93-2.07,3.84-3.4,5.53c-1.58,2-1.46,3.35,0.65,4.86
                        C1058.83,524.57,1061.57,526.92,1064.88,529.56z M1047.51,380.5c-5.03-4.15-10.17-7.07-15.41-9.84c-0.9-0.48-2.02-1.35-2.91-0.25
                        c-0.87,1.07-1.87,2.28-1.47,3.86c0.17,0.67,0.65,1.28,1.03,1.89c1.89,3.06,3.88,6.09,5.16,9.47c0.64,1.7,1.43,2.28,3.2,1.48
                        C1040.71,385.46,1044.36,383.94,1047.51,380.5z M957.93,355.4c-3.23,0.31-6.66,0.63-10.09,0.95c-1.86,0.17-2.43,0.94-1.86,2.89
                        c2.19,7.51,2.36,7.67,10.27,6.49c1.07-0.16,2.16-0.33,3.2-0.63c3.38-1,4.63-3.11,3.98-6.59
                        C962.93,355.8,962.05,355.29,957.93,355.4z M761.13,259.56c-1.44-1.27-2.9-1.32-4.32-1.59c-7.32-1.44-14.37-3.67-20.98-7.22
                        c-4.62-2.48-5.49-2.19-9.31,2.63c9.39,2.35,18.49,5.41,27.53,8.62C757.17,263.09,759.3,262.42,761.13,259.56z M871.12,546.39
                        c-2.55-0.66-4.65,0.36-6.79,0.21c-6.22-0.45-12.28,2.3-18.59,0.8c-1.6-0.38-3.33,0.41-4.12,2.8c7.4-0.06,14.26,1.47,21.39,1.19
                        C867.3,551.21,869.02,549.32,871.12,546.39z M771.92,500.91c5.79-1.68,12.03-1.7,17.43-4.99c-7.03-1.44-14.1-1.51-20.85-3.38
                        c-0.49,1.92,0.26,2.82,0.72,3.76C770,497.91,770.57,499.65,771.92,500.91z M1571.18,38.33c-11.52-4.29-12.11-4.2-16.42,2.08
                        C1563.3,43.45,1566.45,43.09,1571.18,38.33z M836.92,471.08c-4.79-4.88-4.79-4.88-11.91-1.56
                        C828.47,474.44,832.61,469.27,836.92,471.08z M788.63,575.53c-3.79-1.44-7.58-2.88-11.4-4.33c-0.95,2.53-0.87,4.04,2.11,4.37
                        C782.35,575.9,785.32,576.62,788.63,575.53z M862.96,572.35c-5.52-8.24-5.52-8.24-11.37-7.03
                        C855.28,567.62,858.21,570.23,862.96,572.35z"/>
                     <path d="M1597.85,68.51c-6.84-2.16-14.38-4.29-20.34-9.69c-2.25-2.04-1.57-7.35,1.2-9.12c3.39-2.16,6.65-4.42,9.36-7.39
                        c1.63-1.79,3.66-1.63,5.54-0.9c7.97,3.09,16.22,5.22,24.45,7.42c1.72,0.46,3.92,0.97,1.9,3.61c-0.26,0.34-0.33,1.12-0.12,1.49
                        c2.17,3.9-0.6,5.55-3.24,7.23c-5.1,3.24-11.05,4.53-16.44,7.1C1599.69,68.48,1599.08,68.38,1597.85,68.51z M1610.26,51.49
                        c-3.89-0.77-6.85-1.3-9.78-1.94c-7.36-1.59-7.36-1.61-12.49,3.57c-0.21,0.21-0.25,0.57-0.37,0.86
                        C1596.01,58.63,1597.89,58.46,1610.26,51.49z"/>
                     <path d="M164.29,341.93c10.23,0.63,20.18,3,28,11.35c6.48,6.91,7.78,14.42,4.35,23.03c-0.88,2.21-1.88,4.36-3.43,6.14
                        c-4.3,4.9-8.57,9.85-13.12,14.51c-4.44,4.54-9.77,5.04-15.52,2.5c-11.43-5.05-17.59-14.23-20.09-26.05
                        c-1.08-5.1-1.93-10.28-0.72-15.61C146.21,346.89,152.67,341.66,164.29,341.93z M165.9,357.81c-1.57,0.13-3.02,0.18-4.45,0.39
                        c-4,0.59-4.59,1.1-4.59,5.22c0,8.9,2.98,16.24,11.19,20.84c2.4,1.34,4.41,1.37,6.38-0.48c2.47-2.32,5.31-3.67,8.74-3.82
                        c1.05-0.05,2.13-0.34,2.93-1.23c2.67-2.96,2.62-9.53-0.31-12.49C180.32,360.68,173.48,358.24,165.9,357.81z"/>
                     <path d="M412.25,440.23c0.22-5.96,2.38-13.72,6.45-20.97c2.77-4.93,6.81-7.25,12.56-6.66c12.97,1.32,23.99,6.64,33,16.01
                        c5.57,5.8,7.11,12.93,5.87,20.67c-1.36,8.5-5.42,15.68-11.54,21.69c-1.43,1.41-3.01,2.9-5.22,1.46c-1.51-0.98-2.4,0.13-3.33,0.85
                        c-4.4,3.4-9.05,3.11-13.86,1.12c-7.72-3.2-14.08-8.11-19.01-14.9C413.48,454.43,412.21,448.7,412.25,440.23z M457.48,454.09
                        c4.2,0.23,4.48,0.02,4.92-3.67c0.42-3.53,0.09-7.15-2.1-9.88c-7.7-9.6-18.13-14.71-30.01-17.02c-2.17-0.42-4.26,0.27-5.46,2.62
                        c-2.84,5.56-4.7,11.38-4.66,17.67c0.03,3.95,1.53,7.42,4.12,10.38c2.28,2.61,4.94,4.77,7.92,6.56c9.3,5.57,11.82,5.14,18.72-3.34
                        c0.11-0.14,0.23-0.28,0.33-0.43C452.78,454.59,454.82,453.41,457.48,454.09z"/>
                     <path d="M601.57,359.55c-4.93,0.53-8.78-1.46-12.36-4.05c-2.49-1.81-4.81-3.86-7.14-5.88c-10.07-8.75-21.12-15.93-33.4-21.2
                        c-7.82-3.36-8.04-4.89-1.8-10.75c5.21-4.89,11.34-8.44,17.7-11.59c6.01-2.98,12.1-5.81,18.2-8.6c6.29-2.88,12.27-6.18,17.64-10.64
                        c4.6-3.81,9.98-3.9,15.46-2.1c1.2,0.39,2.38,0.93,3.44,1.61c12.94,8.33,26.71,15.32,39.04,24.65c3.94,2.98,5.94,6.58,6.58,11.34
                        c0.29,2.18-0.3,3.61-2.18,4.41c-12.07,5.09-21.59,13.94-31.99,21.5C621.96,354.63,612.55,359.57,601.57,359.55z M651.65,319.98
                        c-5.65-3.92-10.48-7.12-15.15-10.54c-4.64-3.4-9.47-6.47-13.96-10.16c-5.76-4.74-11.16-5.46-16.69-0.45
                        c-4.78,4.33-10.7,6.73-16.49,9.33c-8.26,3.71-16.53,7.4-24.75,11.21c-2.2,1.02-4.5,2.04-6.2,3.8c0.98,1.76,2.46,2.15,3.68,2.84
                        c9.82,5.55,19.08,11.87,27.42,19.49c1.34,1.22,2.8,2.3,4.22,3.43c2.4,1.9,5.01,2.43,8.12,2.09c7.25-0.78,13.53-3.74,19.49-7.71
                        C631.77,336.37,640.04,326.75,651.65,319.98z"/>
                     <path d="M1511.4,83.5c2.78,0.2,4.23-1.64,5.99-2.7c1.55-0.93,2.99-2.1,4.8-2.48c0.94-0.2,1.79,0.17,2.34,1.01
                        c0.58,0.88,0.5,1.87-0.27,2.45c-3.04,2.31-5.18,5.63-8.53,7.56c-3.55,2.05-7.31,2.52-10.82,0.25c-3.05-1.97-5.93-2.4-9.16-0.78
                        c-0.63,0.32-1.41,0.33-2.11,0.52c-1.61,0.42-3.61,1-4.28-0.91c-0.57-1.59,0.89-2.96,2.33-3.86c3.23-2.02,6.38-4.27,10.22-4.92
                        c2.23-0.38,2.82-1.06,2.54-3.56c-0.51-4.6,1.99-7.3,6.32-7.91c2.44-0.34,3.72,0.71,2.81,2.94c-1.49,3.66-0.31,4.03,2.83,3
                        c0.98-0.32,1.76,0.13,2.26,1.02c0.61,1.07-0.18,1.7-0.82,2.29c-1.06,0.99-2.16,1.93-3.3,2.83
                        C1513.47,81.1,1512.25,81.82,1511.4,83.5z"/>
                  </g>
                  </svg>

                </div>
            </div>

        </div>

    </body>

    <script>
      var swiper = new Swiper(".mySwiper", {});

      var gateway = `ws://${window.location.hostname}/ws`;
      var websocket, ctx;

      var isMobile = window.matchMedia("(pointer:coarse)").matches;

      var graphContainer = document.getElementsByClassName("graphSlide")[0];
      var chartLabels = document.getElementsByClassName("chartLabels")[0];
      var labelTickBoxes = document.getElementsByClassName("labelTickBox");
      var graphNames = document.getElementsByClassName("graphName");

      // gives unique localStorage key to each ESP
      var localStorageKey = "%GRAPH_NAME%";
      
      var graph = document.getElementById("chart");
      var ctx = graph.getContext("2d");

      var keyToggle = true;
      var buttonToggle = [false, false, false, false, false, false, false, false, false];
      var graphToggle = [false, false, false];
      var graphColors = ["#4284E6", "#FBAD39", "#E55E97"];
      var fontSize = 10;

      var dataPoints = 250;

      //var graphData = [[0,0,0,0,0,0,0,0,0,0],[1,3,2,4,3,5,4,6,5,7],[1,1,2,3,5,8,13,21,34,25]]; //test
      var graphData = [[], [], []];

      var lastDataTime = [new Date(), new Date(), new Date()];
      var currentDataTime = [0, 0, 0];
      var dataIntervals = [0, 0, 0];

      var dataIntervalContainers = document.getElementsByClassName("dataInterval");

      for (let i = 0; i < 3; i++) {
         for (let j = 0; j < dataPoints; j++) {
            graphData[i].push(0);
         }
      }

      setInterval(updateView, 100);
      window.addEventListener("load", onLoad);

      function setGraph(cb, graph) {
         for (let i = 0; i < dataPoints; i++) {
            updateData(`${graph}${cb(i)}`);
         }
      }

      function updateGraphName(graph) {
         let graphInfo = localStorage.getItem(localStorageKey) 
            ?? JSON.stringify([["", false],["", false],["", false]]);

         graphInfo = JSON.parse(graphInfo);

         graphInfo[graph][0] = graphNames[graph].value;
         localStorage.setItem(localStorageKey, JSON.stringify(graphInfo));
      }

      const graphInfoFromStorage = JSON.parse(localStorage.getItem(localStorageKey) )
      ?? [["", false],["", false],["", false]];

      localStorage.setItem(localStorageKey, JSON.stringify(graphInfoFromStorage));

      for (let i = 0; i<graphNames.length; i++) {
         graphNames[i].value = graphInfoFromStorage[i][0];
         graphToggle[i] = graphInfoFromStorage[i][1];

         if (graphToggle[i]) {
            labelTickBoxes[i].style.backgroundColor = graphColors[i];
         } else {
            labelTickBoxes[i].style.backgroundColor = "transparent";
         }
      }

      function updateView() {
         let vh = window.innerHeight * 0.01;
         document.documentElement.style.setProperty("--vh", `${vh}px`);

         var graphContainerWidth = graphContainer.offsetWidth;
         var graphContainerHeight = graphContainer.offsetHeight;
         var chartLabelsHeight = chartLabels.offsetHeight;

         graph.style.width = `${graphContainerWidth}px`;
         graph.style.height = `${0.95 * graphContainerHeight - chartLabelsHeight}px`;

         graph.width = `${graphContainerWidth}`;
         graph.height = `${0.95 * graphContainerHeight - chartLabelsHeight}`;

         fontSize = 0.26 * chartLabelsHeight;

         updateGraph();

         for (tickBox of labelTickBoxes) {
            tickBox.style.minHeight = `${0.3 * chartLabelsHeight}px`;
            tickBox.style.minWidth = `${0.3 * chartLabelsHeight}px`;
         }

         for (graphName of graphNames) {
            graphName.style.fontSize = `${0.26 * chartLabelsHeight}px`;
            graphName.style.width = `${0.18 * graphContainerWidth}px`;
         }

         if (window.innerHeight > window.innerWidth) {
            swiper.enable();
         } else {
            swiper.disable();
            swiper.activeIndex = 0;
         }
      }

      function updateGraph() {
         ctx.clearRect(0, 0, graph.width, graph.height);

         var canvasWidth = 0.01 * graph.offsetWidth;
         var canvasHeight = 0.01 * graph.offsetHeight;

         var graphTop = 5 * canvasHeight;
         var graphBottom = 95 * canvasHeight;
         var graphLeft = 10 * canvasWidth;
         var graphRight = 90 * canvasWidth;

         var activeData = [];
         var activeDataPos = [];
         var dataIntervalX = (graphRight - (graphLeft + canvasWidth)) / dataPoints;
         var dataIntervalY;
         var activeGraphColors = [];
         var dataTop = 0;
         var dataBottom = 0;

         for (let i = 0; i < 3; i++) {
            if (graphToggle[i]) {
               activeData.push(graphData[i]);
               activeDataPos.push([]);
               activeGraphColors.push(graphColors[i]);
            }
         }

         ctx.roundRect(graphLeft, graphTop + canvasWidth, graphRight - graphLeft, 0.5 * canvasWidth, 10);
         ctx.fillStyle = "rgb(61,61,61,0.05)";
         ctx.fill();

         // ctx.roundRect(graphLeft+1.5*canvasWidth,(graphBottom-graphTop)/2+2.4*canvasWidth,graphRight-graphLeft-1.5*canvasWidth,0.5*canvasWidth,10);;
         // ctx.fillStyle = 'rgb(61,61,61,0.05)';
         // ctx.fill();

         if (activeData.length) {
            var maxRow = activeData.map(function (row) {
               return Math.max.apply(Math, row);
            })
            dataTop = Math.max.apply(null, maxRow);

            var minRow = activeData.map(function (row) {
               return Math.min.apply(Math, row);
            })
            dataBottom = Math.min.apply(null, minRow);

            if (dataTop - dataBottom) {
               dataIntervalY = (graphBottom - graphTop - 2.7 * canvasWidth) / (dataTop - dataBottom);
            } else {
               dataIntervalY = 0;
            }

            if (dataBottom < 0 && dataTop > 0) {
               ctx.roundRect(
                  graphLeft + 1.5 * canvasWidth,
                  graphBottom - dataIntervalY * Math.abs(dataBottom) - 1.5 * canvasWidth - 1.5,
                  graphRight - graphLeft - 1.5 * canvasWidth,
                  0.5 * canvasWidth,
                  10
               );
               ctx.fillStyle = "rgb(61,61,61,0.3)";
               ctx.fill();
            }

            for (let i = 0; i < activeData.length; i++) {
               for (let j = 0; j < dataPoints; j++) {
                  activeDataPos[i].push([
                     j * dataIntervalX + graphLeft + 1.5 * canvasWidth,
                     graphBottom - (activeData[i][j] - dataBottom) * dataIntervalY - 1.5 * canvasWidth,
                  ]);
               }
            }

            for (let i = 0; i < activeData.length; i++) {
               for (let j = 0; j < activeDataPos[i].length - 1; j++) {
                  ctx.beginPath();
                  ctx.moveTo(activeDataPos[i][j][0], activeDataPos[i][j][1]);
                  ctx.lineTo(activeDataPos[i][j + 1][0], activeDataPos[i][j + 1][1]);
                  ctx.lineWidth = 3;
                  ctx.strokeStyle = activeGraphColors[i];
                  ctx.stroke();
               }
            }

            ctx.fillStyle = "black";

            if (dataTop - dataBottom) {
               ctx.font = `${fontSize}px Helvetica`;
               ctx.textAlign = "right";
               ctx.fillText(
                  Math.round(dataTop * 100) / 100,
                  graphLeft - canvasWidth,
                  graphTop + 0.75 * canvasWidth + fontSize / 2
               );
            }

            ctx.font = `${fontSize}px Helvetica`;
            ctx.textAlign = "right";
            ctx.fillText(
               Math.round(dataBottom * 100) / 100,
               graphLeft - canvasWidth,
               graphBottom - 0.75 * canvasWidth + fontSize / 4
            );
         }

         ctx.roundRect(graphLeft + canvasWidth, graphTop, 0.5 * canvasWidth, graphBottom - graphTop, 10);
         ctx.fillStyle = "black";
         ctx.fill();

         ctx.roundRect(
            graphLeft,
            graphBottom - 1.5 * canvasWidth,
            graphRight - graphLeft,
            0.5 * canvasWidth,
            10
         );
         ctx.fillStyle = "black";
         ctx.fill();

         ctx.roundRect(
            graphLeft,
            graphTop + canvasWidth,
            2 * canvasWidth + 0.5 * canvasWidth,
            0.5 * canvasWidth,
            10
         );
         ctx.fillStyle = "black";
         ctx.fill();
      }

      //hentet fra: https://codepen.io/simon-wu/pen/ExgLEXQ
      CanvasRenderingContext2D.prototype.roundRect = function (x, y, width, height, radius) {
         if (width < 2 * radius) radius = width / 2;
         if (height < 2 * radius) radius = height / 2;
         this.beginPath();
         this.moveTo(x + radius, y);
         this.arcTo(x + width, y, x + width, y + height, radius);
         this.arcTo(x + width, y + height, x, y + height, radius);
         this.arcTo(x, y + height, x, y, radius);
         this.arcTo(x, y, x + width, y, radius);
         this.closePath();
         return this;
      }

      function updateData(newData) {
         var index = parseInt(newData.charAt(0)) - 1;
         var data = parseFloat(newData.substring(1));
         graphData[index].shift();
         graphData[index].push(data);
         currentDataTime[index] = new Date();
         dataIntervals[index] =
            Math.round((currentDataTime[index].getTime() - lastDataTime[index]) / 10) / 100;
         lastDataTime[index] = currentDataTime[index].getTime();
         for (let i = 0; i < dataIntervalContainers.length; i++) {
            dataIntervalContainers[i].innerHTML = dataIntervals[i];
         }
      }

      function toggleKeys() {
         keyToggle = !keyToggle;
      }

      function toggleGraph(index) {
         if (graphToggle[index]) {
            labelTickBoxes[index].style.backgroundColor = "transparent";
         } else {
            labelTickBoxes[index].style.backgroundColor = graphColors[index];
         }

         graphToggle[index] = !graphToggle[index];

         // update localstorage
         let graphInfo = localStorage.getItem(localStorageKey) 
            ?? JSON.stringify([["", false],["", false],["", false]]);

         graphInfo = JSON.parse(graphInfo);

         graphInfo[index][1] = graphToggle[index];
         localStorage.setItem(localStorageKey, JSON.stringify(graphInfo));
      }

      var buttons = document.getElementsByClassName("btn");

      function initWebSocket() {
         console.log("Trying to open a WebSocket connection...");
         websocket = new WebSocket(gateway);
         websocket.onopen = onOpen;
         websocket.onclose = onClose;
         websocket.onmessage = onMessage;
      }

      function onOpen(event) {
         console.log("Connection opened");
      }

      function onClose(event) {
         console.log("Connection closed");
         setTimeout(initWebSocket, 2000);
      }

      function onMessage(event) {
         // nagles algorithm and stuff
         // the data transmission stagnates without sending an acknowledgment package back with every package recieved
         websocket.send(" ");
         updateData(event.data);
      }

      function onLoad(event) {
         for (btn of buttons) {
            btn.addEventListener("touchstart", handleTouchDown);
            btn.addEventListener("touchend", handleTouchUp);
            if (!isMobile) {
               btn.addEventListener("mousedown", handleTouchDown);
               btn.addEventListener("mouseup", handleTouchUp);
            }
         }

         window.addEventListener("keydown", handleKeyDown);
         window.addEventListener("keyup", handleKeyUp);

         initWebSocket();
      }

      function handleTouchDown(event) {
         var btnClass;

         if (typeof event.srcElement.className == "string") {
            btnClass = event.srcElement.className.split(" ");
         } else {
            btnClass = event.srcElement.className.animVal.split(" ");
         }

         var btn = btnClass[btnClass.length - 1];

         handleButtonDown(btn);
      }

      function handleKeyDown(event) {
         if (!keyToggle) return;
         btn = event.code;
         handleButtonDown(btn);
      }

      function handleButtonDown(btn) {
         document.getElementsByClassName(btn)[0].style.transform = "scale(0.95)";

         switch (btn) {
            case "Digit1":
               if (!buttonToggle[0]) {
                  websocket.send("f");
                  buttonToggle[0] = true;
               }
               break;

            case "Digit2":
               if (!buttonToggle[1]) {
                  websocket.send("g");
                  buttonToggle[1] = true;
               }
               break;

            case "Digit3":
               if (!buttonToggle[2]) {
                  websocket.send("h");
                  buttonToggle[2] = true;
               }
               break;

            case "KeyQ":
               if (!buttonToggle[3]) {
                  websocket.send("q");
                  buttonToggle[3] = true;
               }
               break;

            case "KeyW":
               if (!buttonToggle[4]) {
                  websocket.send("w");
                  buttonToggle[4] = true;
               }
               break;

            case "KeyE":
               if (!buttonToggle[5]) {
                  websocket.send("e");
                  buttonToggle[5] = true;
               }
               break;

            case "KeyA":
               if (!buttonToggle[6]) {
                  websocket.send("a");
                  buttonToggle[6] = true;
               }
               break;

            case "KeyS":
               if (!buttonToggle[7]) {
                  websocket.send("s");
                  buttonToggle[7] = true;
               }
               break;

            case "KeyD":
               if (!buttonToggle[8]) {
                  websocket.send("d");
                  buttonToggle[8] = true;
               }
               break;

            default:
               break;
         }
      }

      function handleTouchUp(event) {
         var btnClass;

         if (typeof event.srcElement.className == "string") {
            btnClass = event.srcElement.className.split(" ");
         } else {
            btnClass = event.srcElement.className.animVal.split(" ");
         }

         var btn = btnClass[btnClass.length - 1];

         handleButtonUp(btn);
      }

      function handleKeyUp(event) {
         if (!keyToggle) return;
         btn = event.code;
         handleButtonUp(btn);
      }

      function handleButtonUp(btn) {
         document.getElementsByClassName(btn)[0].style.transform = "scale(1)";

         switch (btn) {
            case "Digit1":
               if (buttonToggle[0]) {
                  websocket.send("F");
                  buttonToggle[0] = false;
               }
               break;

            case "Digit2":
               if (buttonToggle[1]) {
                  websocket.send("G");
                  buttonToggle[1] = false;
               }
               break;

            case "Digit3":
               if (buttonToggle[2]) {
                  websocket.send("H");
                  buttonToggle[2] = false;
               }
               break;

            case "KeyQ":
               if (buttonToggle[3]) {
                  websocket.send("Q");
                  buttonToggle[3] = false;
               }
               break;

            case "KeyW":
               if (buttonToggle[4]) {
                  websocket.send("W");
                  buttonToggle[4] = false;
               }
               break;

            case "KeyE":
               if (buttonToggle[5]) {
                  websocket.send("E");
                  buttonToggle[5] = false;
               }
               break;

            case "KeyA":
               if (buttonToggle[6]) {
                  websocket.send("A");
                  buttonToggle[6] = false;
               }
               break;

            case "KeyS":
               if (buttonToggle[7]) {
                  websocket.send("S");
                  buttonToggle[7] = false;
               }
               break;

            case "KeyD":
               if (buttonToggle[8]) {
                  websocket.send("D");
                  buttonToggle[8] = false;
               }
               break;

            default:
               break;
         }
      }

    </script>

    <style>
      html,
      body {
         margin: 0px;
         padding: 0px;
         overflow: scroll;
         background-color: #eeeeee;
         position: fixed;
         top: 0;
         bottom: 0;
         right: 0;
         left: 0;
         touch-action: manipulation;
         -webkit-user-select: none;
         -khtml-user-select: none;
         -moz-user-select: none;
         -ms-user-select: none;
         user-select: none;
      }

      .material-symbols-rounded {
         display: flex;
         justify-content: center;
         align-items: center;
         border-radius: 10px;
         filter: brightness(0) invert(1);
         transform: scale(0.8);
      }

      #mainContainer {
         display: flex;
         align-content: center;
         justify-content: space-between;
         box-sizing: border-box;
         overflow: hidden;
         width: 100vw;
         height: 100vh;
         height: calc(var(--vh, 1vh) * 100);
      }

      .swiper {
         box-sizing: border-box;
         display: flex;
      }

      .swiper-wrapper {
         box-sizing: border-box;
         display: flex;
      }

      .swiper-slide {
         display: flex;
      }

      .graphSlide {
         background-color: #e5e5e5;
         border-radius: 10px;
         display: flex;
         position: relative;
         flex-flow: column nowrap;
      }

      .labelTickBox {
         cursor: pointer;
         border-radius: 5px;
         margin-right: 2%%;
      }

      .chartLabels {
         min-height: 10%%;
         padding: 5%% 5%% 0 5%%;
         display: flex;
         align-items: center;
         flex-flow: row nowrap;
         justify-content: space-between;
      }

      .chartLabel {
         display: flex;
         flex-flow: row nowrap;
         align-items: center;
      }

      .tick0 {
         background-color: transparent;
         border: 3px solid #4284e6;
      }

      .tick1 {
         background-color: transparent;
         border: 3px solid #fbad39;
      }

      .tick2 {
         background-color: transparent;
         border: 3px solid #e55e97;
      }

      .name0 {
         color: #4284e6;
      }

      .name1 {
         color: #fbad39;
      }

      .name2 {
         color: #e55e97;
      }

      ::placeholder {
         /* Chrome, Firefox, Opera, Safari 10.1+ */
         color: rgb(56, 56, 56, 0.3);
         opacity: 1; /* Firefox */
      }

      :-ms-input-placeholder {
         /* Internet Explorer 10-11 */
         color: rgb(56, 56, 56, 0.3);
      }
      ::-ms-input-placeholder {
         /* Microsoft Edge */
         color: rgb(56, 56, 56, 0.3);
      }

      input {
         background-color: transparent;
         border: none;
         text-decoration: none;
         outline: none;
         width: 10%%;
         font-family: "Helvetica", sans-serif;
         font-weight: bolder;
         -webkit-user-select: initial;
         -khtml-user-select: initial;
         -moz-user-select: initial;
         -ms-user-select: initial;
         user-select: initial;
      }

      .chartContainer {
         display: flex;
         justify-content: center;
         align-items: center;
      }

      .logoSlide {
         align-items: center;
         justify-content: center;
         align-content: center;
      }

      #logoImg {
         width: 45%%;
         height: auto;
      }

      .outerButtonContainer {
         flex-grow: 1;
         display: flex;
         flex-flow: column nowrap;
         align-content: flex-end;
         margin: 3%%;
      }

      .buttonContainerAction {
         display: flex;
         flex-flow: row nowrap;
         justify-content: space-evenly;
         align-items: stretch;
      }

      .buttonContainerDrive {
         display: flex;
         flex-wrap: wrap;
         justify-content: space-between;
         flex-grow: 1;
      }

      .buttonContainerAction {
         min-height: 20%%;
      }

      .btn {
         flex-grow: 1;
         display: flex;
         justify-content: center;
         align-items: center;
         align-content: center;
         background-color: #0a2237;
         border-radius: 10px;
         margin: 1%%;
         border: none;
         cursor: pointer;
         min-width: 31%%;
         overflow: hidden;
      }

      .actionBtn {
         min-height: 30%%;
      }

      .logoLandscape {
         display: flex;
         justify-content: center;
         align-items: center;
      }

      #logoLandscapeImg {
         height: auto;
         width: 100%%;
      }

      @media screen and (orientation: portrait) {
         #mainContainer {
            flex-flow: column nowrap;
         }

         .swiper {
            width: 100vw;
            height: 57vh;
            padding: 4%% 4%% 0 4%%;
            flex-basis: 57vh;
         }

         .logoSlide {
            visibility: visible;
            width: auto;
         }
         .logoLandscape {
            visibility: hidden;
            height: 0;
            padding: 0;
         }
         .toggle {
            transform: scale(0.5);
         }
      }

      @media screen and (orientation: landscape) {
         #mainContainer {
            flex-flow: row nowrap;
         }

         .swiper {
            width: 57vw;
            height: 100vh;
            height: calc(var(--vh, 1vh) * 100);
            padding: 3%% 0 3%% 3%%;
         }

         .logoSlide {
            visibility: hidden;
            width: 0;
         }
         .logoLandscape {
            visibility: visible;
            height: auto;
            padding: 3%%;
         }
         .toggle {
            transform: scale(0.8);
         }

         @media screen and (pointer: fine) and (min-device-width: 500px) {
            body {
               display: flex;
               justify-content: center;
               align-items: center;
            }

            #mainContainer {
               width: 70vw;
               height: 60vh;
               height: calc(var(--vh, 1vh) * 60);
            }

            .swiper {
               width: 40vw;
               height: 60vh;
               height: calc(var(--vh, 1vh) * 60);
            }
         }
      }


    </style>

</html>
)rawliteral";