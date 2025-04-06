let currentIndex = 0;
function moveSlide(direction) {
   const slides = document.querySelectorAll('.slide');
   const totalSlides = slides.length;
   currentIndex = (currentIndex + direction + totalSlides) % totalSlides;
   // Move the slides by changing the transform property
   const slidesContainer = document.querySelector('.slides');
   slidesContainer.style.transform = `translateX(-${currentIndex * 100}%)`;
}