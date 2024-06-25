class CGeometry
{
    int m_iX, m_iY, m_iWidth, m_iHeight;
public:
    CGeometry(int iX, int iY, int iWidth, int iHeight)
    {
        cout<<"CGeometry Constructor\n";
        m_iX = iX;
        m_iY = iY;
        iWidth = m_iWidth;
        iHeight = m_iHeight;
    }
    ~CGeometry() {}
    CGeometry(const CGeometry& objGeo)
    {
        cout<<"CGeometry CopyCon\n";
        m_iX = objGeo.m_iX;
        m_iY = objGeo.m_iY;
        m_iWidth = objGeo.m_iWidth;
        m_iHeight = objGeo.m_iHeight;
    }
    CGeometry operator=(const CGeometry& objGeo)
    {
        cout<<"CGeometry operator=\n";
        m_iX = objGeo.m_iX;
        m_iY = objGeo.m_iY;
        m_iWidth = objGeo.m_iWidth;
        m_iHeight = objGeo.m_iHeight;
        return objGeo;
    }
};