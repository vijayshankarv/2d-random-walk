"""
Demo of the histogram (hist) function with a few features.

In addition to the basic histogram, this demo shows a few optional features:

    * Setting the number of data bins
    * The ``normed`` flag, which normalizes bin heights so that the integral of
      the histogram is 1. The resulting histogram is a probability density.
    * Setting the face color of the bars
    * Setting the opacity (alpha value).

"""
import numpy as np
import matplotlib.mlab as mlab
import matplotlib.pyplot as plt


# example data
#mu = 100 # mean of distribution
#sigma = 15 # standard deviation of distribution
#x = mu + sigma * np.random.randn(10000)
#load file
x = np.loadtxt("angle.dat")

num_bins = 50
# the histogram of the data
n, bins, patches = plt.hist(x, num_bins, normed=0, facecolor='green', alpha=0.5)
# add a 'best fit' line
#y = mlab.normpdf(bins, mu, sigma)
#plt.plot()
plt.xlabel('Angle',labelpad = 10)
plt.rc('text', usetex=True)
font = {'family' : 'serif',
        'weight' : 'bold',
        'size'   : 18}
plt.rc('font', **font)
plt.yticks((200, 400, 600, 800, 1000, 1200), size=12)
plt.ylabel('Counts')
plt.title(r'Histogram of Angles: Linear Congruential ')
plt.xlim([-np.pi, np.pi])
plt.tick_params(axis='x',pad = 10)
# 
xlabels = [r'$-\pi$', r'$\frac{-\pi}{2}$', r'$0$', r'$\frac{\pi}{2}$', r'$\pi$']
plt.xticks((-np.pi, -np.pi/2, 0, np.pi/2, np.pi), xlabels)
# Tweak spacing to prevent clipping of ylabel
plt.subplots_adjust(left=0.15, bottom=0.2)

plt.savefig('histogram-lcg.png')
