//------------------------------------------------------------------------------------------------//
// looplab/ImageBuffer.h
//------------------------------------------------------------------------------------------------//

#ifndef LOOPLAB_IMAGE_BUFFER_H
#define LOOPLAB_IMAGE_BUFFER_H

#include <vector>

//------------------------------------------------------------------------------------------------//

namespace looplab {

//------------------------------------------------------------------------------------------------//

template<typename T>
class ImageBuffer
{
public:
	ImageBuffer() = default;

	ImageBuffer(int width, int height) 
		: m_data(width * height)
		, m_width(width)
		, m_height(height) 
	{}

	ImageBuffer(ImageBuffer&& other)
		: m_data(std::move(other.m_data))
		, m_width(other.m_width)
		, m_height(other.m_height)		
	{}

	ImageBuffer& operator=(ImageBuffer other)
	{
		std::swap(m_data, other.m_data);
		m_width = other.m_width;
		m_height = other.m_height;		
		return *this;
	}

	const T* data() const 
	{ 
		return m_data.data();
	}
		
	T* data()
	{ 
		return m_data.data();
	}

	const T* begin() const
	{
		return data();
	}

	T* begin()
	{
		return data();
	}

	const T* end() const
	{
		return data();
	}

	T* end()
	{
		return data();
	}

	const T& operator[](int i) const
	{
		return m_data[i];
	}

	T& operator[](int i)
	{
		return m_data[i];
	}

	const T& operator()(int x, int y) const 
	{ 
		return m_data[y * m_width + x]; 
	}
		
	T& operator()(int x, int y) 
	{
		return m_data[y * m_width + x]; 
	}

	int index(int x, int y) const
	{
		return y * m_width + x;
	}
	
	int width() const 
	{ 
		return m_width; 
	}

	int height() const 
	{ 
		return m_height; 
	}

	int size() const
	{
		return int(m_data.size());
	}

	void setSize(int width, int height) 
	{ 
		m_width = width;
		m_height = height;
		m_data.resize(width * height);
	}

private:
	std::vector<T> m_data;
	int m_width = 0;
	int m_height = 0;
};

//------------------------------------------------------------------------------------------------//

} // namespace looplab

//------------------------------------------------------------------------------------------------//

#endif
