/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_358.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1790(t_small_parse_table_array *v)
{
	v->a[35800] = anon_sym_AMP_GT;
	v->a[35801] = anon_sym_AMP_GT_GT;
	v->a[35802] = anon_sym_LT_AMP;
	v->a[35803] = anon_sym_GT_AMP;
	v->a[35804] = anon_sym_GT_PIPE;
	v->a[35805] = anon_sym_LT_AMP_DASH;
	v->a[35806] = anon_sym_GT_AMP_DASH;
	v->a[35807] = anon_sym_LT_LT;
	v->a[35808] = anon_sym_LT_LT_DASH;
	v->a[35809] = aux_sym_heredoc_redirect_token1;
	v->a[35810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35811] = anon_sym_AMP;
	v->a[35812] = anon_sym_DOLLAR;
	v->a[35813] = anon_sym_DQUOTE;
	v->a[35814] = sym_raw_string;
	v->a[35815] = sym_number;
	v->a[35816] = anon_sym_DOLLAR_LBRACE;
	v->a[35817] = anon_sym_DOLLAR_LPAREN;
	v->a[35818] = anon_sym_BQUOTE;
	v->a[35819] = sym_word;
	small_parse_table_1791(v);
}

void	small_parse_table_1791(t_small_parse_table_array *v)
{
	v->a[35820] = anon_sym_SEMI;
	v->a[35821] = 17;
	v->a[35822] = actions(1074);
	v->a[35823] = 1;
	v->a[35824] = sym_comment;
	v->a[35825] = actions(1136);
	v->a[35826] = 1;
	v->a[35827] = anon_sym_PIPE;
	v->a[35828] = actions(1138);
	v->a[35829] = 1;
	v->a[35830] = anon_sym_AMP_AMP;
	v->a[35831] = actions(1140);
	v->a[35832] = 1;
	v->a[35833] = anon_sym_PIPE_PIPE;
	v->a[35834] = actions(1150);
	v->a[35835] = 1;
	v->a[35836] = anon_sym_CARET;
	v->a[35837] = actions(1152);
	v->a[35838] = 1;
	v->a[35839] = anon_sym_AMP;
	small_parse_table_1792(v);
}

void	small_parse_table_1792(t_small_parse_table_array *v)
{
	v->a[35840] = actions(1239);
	v->a[35841] = 1;
	v->a[35842] = anon_sym_EQ;
	v->a[35843] = actions(1241);
	v->a[35844] = 1;
	v->a[35845] = anon_sym_QMARK;
	v->a[35846] = actions(1298);
	v->a[35847] = 1;
	v->a[35848] = anon_sym_RPAREN_RPAREN;
	v->a[35849] = actions(1144);
	v->a[35850] = 2;
	v->a[35851] = anon_sym_LT;
	v->a[35852] = anon_sym_GT;
	v->a[35853] = actions(1146);
	v->a[35854] = 2;
	v->a[35855] = anon_sym_GT_GT;
	v->a[35856] = anon_sym_LT_LT;
	v->a[35857] = actions(1154);
	v->a[35858] = 2;
	v->a[35859] = anon_sym_EQ_EQ;
	small_parse_table_1793(v);
}

void	small_parse_table_1793(t_small_parse_table_array *v)
{
	v->a[35860] = anon_sym_BANG_EQ;
	v->a[35861] = actions(1156);
	v->a[35862] = 2;
	v->a[35863] = anon_sym_LT_EQ;
	v->a[35864] = anon_sym_GT_EQ;
	v->a[35865] = actions(1158);
	v->a[35866] = 2;
	v->a[35867] = anon_sym_PLUS;
	v->a[35868] = anon_sym_DASH;
	v->a[35869] = actions(1162);
	v->a[35870] = 2;
	v->a[35871] = anon_sym_PLUS_PLUS2;
	v->a[35872] = anon_sym_DASH_DASH2;
	v->a[35873] = actions(1160);
	v->a[35874] = 3;
	v->a[35875] = anon_sym_STAR;
	v->a[35876] = anon_sym_SLASH;
	v->a[35877] = anon_sym_PERCENT;
	v->a[35878] = actions(1252);
	v->a[35879] = 10;
	small_parse_table_1794(v);
}

void	small_parse_table_1794(t_small_parse_table_array *v)
{
	v->a[35880] = anon_sym_PLUS_EQ;
	v->a[35881] = anon_sym_DASH_EQ;
	v->a[35882] = anon_sym_STAR_EQ;
	v->a[35883] = anon_sym_SLASH_EQ;
	v->a[35884] = anon_sym_PERCENT_EQ;
	v->a[35885] = anon_sym_LT_LT_EQ;
	v->a[35886] = anon_sym_GT_GT_EQ;
	v->a[35887] = anon_sym_AMP_EQ;
	v->a[35888] = anon_sym_CARET_EQ;
	v->a[35889] = anon_sym_PIPE_EQ;
	v->a[35890] = 3;
	v->a[35891] = actions(1074);
	v->a[35892] = 1;
	v->a[35893] = sym_comment;
	v->a[35894] = actions(1213);
	v->a[35895] = 13;
	v->a[35896] = anon_sym_PIPE;
	v->a[35897] = anon_sym_EQ;
	v->a[35898] = anon_sym_LT;
	v->a[35899] = anon_sym_GT;
	small_parse_table_1795(v);
}

/* EOF small_parse_table_358.c */
