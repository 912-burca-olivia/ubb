USE [lab1]
GO
/****** Object:  StoredProcedure [dbo].[sp_v4_revert]    Script Date: 11/14/2017 2:52:03 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
ALTER procedure [dbo].[sp_v4_revert]
as
BEGIN
alter table Version4
drop column Foreign_Key
END