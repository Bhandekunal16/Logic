const servicesContent = () => {
  return `<div class="service-item">
      <h2>Web Development</h2>
      <p>We offer professional web development services to build responsive and user-friendly websites.</p>

      <div style=" display: flex;
      justify-content: space-evenly;">
      <div>
      <p><a href="https://bhandekunal16.github.io/online-html-creator/">online html creator</a></p>
      <p><a href="https://bhandekunal16.github.io/html-routable-template/">javascript base routing templates</a></p>
      <p><a href="https://bhandekunal16.github.io/Web--application/">web page template</a></p>
      <p><a href="https://bhandekunal16.github.io/binary-converter/">binary-converter</a></p>
      <p><a href="https://bhandekunal16.github.io/Robotec-project/">mathematical calculator</a></p>
      </div>
     
      <div>
      <p><a href=" https://bhandekunal16.github.io/time/">time</a></p>
      <p><a href=" https://robotec-dashboard-1.vercel.app/">Live working web portal</a></p>
      <p><a href="  https://bhandekunal16.github.io/cube-finder/"> cube founder</a></p>  
      <p><a href=" https://bhandekunal16.github.io/squre-root-finder/"> square founder</a></p>
      <p><a href="  https://bhandekunal16.github.io/glowing-honey-comb-template/
      "> glowing cube design</a></p>
      </div>
     </div>
           
    </div>
   
  
    <div class="service-item">
      <h2>Mobile App Development</h2>
      <p>We specialize in developing mobile applications for both Android and iOS platforms.</p>
    </div>
  
    <div class="service-item">
      <h2>Digital Marketing</h2>
      <p>Our digital marketing services include SEO, social media marketing, and content marketing.</p>
    </div>
  `;
};

function service() {
  appContent.innerHTML = servicesContent();
}
