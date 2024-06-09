/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_458.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2290(t_small_parse_table_array *v)
{
	v->a[45800] = anon_sym_BANG_EQ;
	v->a[45801] = actions(1578);
	v->a[45802] = 2;
	v->a[45803] = anon_sym_LT_EQ;
	v->a[45804] = anon_sym_GT_EQ;
	v->a[45805] = actions(1580);
	v->a[45806] = 2;
	v->a[45807] = anon_sym_PLUS;
	v->a[45808] = anon_sym_DASH;
	v->a[45809] = actions(1582);
	v->a[45810] = 3;
	v->a[45811] = anon_sym_STAR;
	v->a[45812] = anon_sym_SLASH;
	v->a[45813] = anon_sym_PERCENT;
	v->a[45814] = actions(1400);
	v->a[45815] = 11;
	v->a[45816] = anon_sym_RPAREN;
	v->a[45817] = anon_sym_PLUS_EQ;
	v->a[45818] = anon_sym_DASH_EQ;
	v->a[45819] = anon_sym_STAR_EQ;
	small_parse_table_2291(v);
}

void	small_parse_table_2291(t_small_parse_table_array *v)
{
	v->a[45820] = anon_sym_SLASH_EQ;
	v->a[45821] = anon_sym_PERCENT_EQ;
	v->a[45822] = anon_sym_LT_LT_EQ;
	v->a[45823] = anon_sym_GT_GT_EQ;
	v->a[45824] = anon_sym_AMP_EQ;
	v->a[45825] = anon_sym_CARET_EQ;
	v->a[45826] = anon_sym_PIPE_EQ;
	v->a[45827] = 6;
	v->a[45828] = actions(3);
	v->a[45829] = 1;
	v->a[45830] = sym_comment;
	v->a[45831] = actions(413);
	v->a[45832] = 1;
	v->a[45833] = sym_file_descriptor;
	v->a[45834] = actions(1672);
	v->a[45835] = 1;
	v->a[45836] = sym_variable_name;
	v->a[45837] = actions(1670);
	v->a[45838] = 2;
	v->a[45839] = aux_sym__simple_variable_name_token1;
	small_parse_table_2292(v);
}

void	small_parse_table_2292(t_small_parse_table_array *v)
{
	v->a[45840] = aux_sym__multiline_variable_name_token1;
	v->a[45841] = actions(1668);
	v->a[45842] = 9;
	v->a[45843] = anon_sym_BANG;
	v->a[45844] = anon_sym_DASH;
	v->a[45845] = anon_sym_STAR;
	v->a[45846] = anon_sym_QMARK;
	v->a[45847] = anon_sym_DOLLAR;
	v->a[45848] = anon_sym_POUND;
	v->a[45849] = anon_sym_AT;
	v->a[45850] = anon_sym_0;
	v->a[45851] = anon_sym__;
	v->a[45852] = actions(407);
	v->a[45853] = 20;
	v->a[45854] = anon_sym_PIPE;
	v->a[45855] = anon_sym_SEMI_SEMI;
	v->a[45856] = anon_sym_AMP_AMP;
	v->a[45857] = anon_sym_PIPE_PIPE;
	v->a[45858] = anon_sym_LT;
	v->a[45859] = anon_sym_GT;
	small_parse_table_2293(v);
}

void	small_parse_table_2293(t_small_parse_table_array *v)
{
	v->a[45860] = anon_sym_GT_GT;
	v->a[45861] = anon_sym_AMP_GT;
	v->a[45862] = anon_sym_AMP_GT_GT;
	v->a[45863] = anon_sym_LT_AMP;
	v->a[45864] = anon_sym_GT_AMP;
	v->a[45865] = anon_sym_GT_PIPE;
	v->a[45866] = anon_sym_LT_AMP_DASH;
	v->a[45867] = anon_sym_GT_AMP_DASH;
	v->a[45868] = anon_sym_LT_LT;
	v->a[45869] = anon_sym_LT_LT_DASH;
	v->a[45870] = aux_sym_heredoc_redirect_token1;
	v->a[45871] = anon_sym_AMP;
	v->a[45872] = anon_sym_BQUOTE;
	v->a[45873] = anon_sym_SEMI;
	v->a[45874] = 3;
	v->a[45875] = actions(3);
	v->a[45876] = 1;
	v->a[45877] = sym_comment;
	v->a[45878] = actions(1251);
	v->a[45879] = 3;
	small_parse_table_2294(v);
}

void	small_parse_table_2294(t_small_parse_table_array *v)
{
	v->a[45880] = sym_file_descriptor;
	v->a[45881] = sym__concat;
	v->a[45882] = ts_builtin_sym_end;
	v->a[45883] = actions(1253);
	v->a[45884] = 30;
	v->a[45885] = anon_sym_PIPE;
	v->a[45886] = anon_sym_SEMI_SEMI;
	v->a[45887] = anon_sym_AMP_AMP;
	v->a[45888] = anon_sym_PIPE_PIPE;
	v->a[45889] = anon_sym_LT;
	v->a[45890] = anon_sym_GT;
	v->a[45891] = anon_sym_GT_GT;
	v->a[45892] = anon_sym_AMP_GT;
	v->a[45893] = anon_sym_AMP_GT_GT;
	v->a[45894] = anon_sym_LT_AMP;
	v->a[45895] = anon_sym_GT_AMP;
	v->a[45896] = anon_sym_GT_PIPE;
	v->a[45897] = anon_sym_LT_AMP_DASH;
	v->a[45898] = anon_sym_GT_AMP_DASH;
	v->a[45899] = anon_sym_LT_LT;
	small_parse_table_2295(v);
}

/* EOF small_parse_table_458.c */
