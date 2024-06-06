/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_668.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3340(t_small_parse_table_array *v)
{
	v->a[66800] = 13;
	v->a[66801] = anon_sym_PIPE;
	v->a[66802] = anon_sym_LT;
	v->a[66803] = anon_sym_GT;
	v->a[66804] = anon_sym_AMP_GT;
	v->a[66805] = anon_sym_LT_AMP;
	v->a[66806] = anon_sym_GT_AMP;
	v->a[66807] = anon_sym_LT_LT;
	v->a[66808] = anon_sym_DOLLAR;
	v->a[66809] = aux_sym_number_token1;
	v->a[66810] = aux_sym_number_token2;
	v->a[66811] = anon_sym_DOLLAR_LPAREN;
	v->a[66812] = anon_sym_BQUOTE;
	v->a[66813] = sym_word;
	v->a[66814] = actions(1390);
	v->a[66815] = 19;
	v->a[66816] = sym_file_descriptor;
	v->a[66817] = sym_variable_name;
	v->a[66818] = sym_test_operator;
	v->a[66819] = sym__brace_start;
	small_parse_table_3341(v);
}

void	small_parse_table_3341(t_small_parse_table_array *v)
{
	v->a[66820] = anon_sym_PIPE_AMP;
	v->a[66821] = anon_sym_AMP_AMP;
	v->a[66822] = anon_sym_PIPE_PIPE;
	v->a[66823] = anon_sym_GT_GT;
	v->a[66824] = anon_sym_AMP_GT_GT;
	v->a[66825] = anon_sym_GT_PIPE;
	v->a[66826] = anon_sym_LT_AMP_DASH;
	v->a[66827] = anon_sym_GT_AMP_DASH;
	v->a[66828] = anon_sym_LT_LT_DASH;
	v->a[66829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66830] = sym__special_character;
	v->a[66831] = anon_sym_DQUOTE;
	v->a[66832] = sym_raw_string;
	v->a[66833] = anon_sym_DOLLAR_LBRACE;
	v->a[66834] = anon_sym_DOLLAR_BQUOTE;
	v->a[66835] = 3;
	v->a[66836] = actions(57);
	v->a[66837] = 1;
	v->a[66838] = sym_comment;
	v->a[66839] = actions(2772);
	small_parse_table_3342(v);
}

void	small_parse_table_3342(t_small_parse_table_array *v)
{
	v->a[66840] = 13;
	v->a[66841] = anon_sym_PIPE;
	v->a[66842] = anon_sym_EQ;
	v->a[66843] = anon_sym_LT;
	v->a[66844] = anon_sym_GT;
	v->a[66845] = anon_sym_GT_GT;
	v->a[66846] = anon_sym_LT_LT;
	v->a[66847] = anon_sym_CARET;
	v->a[66848] = anon_sym_AMP;
	v->a[66849] = anon_sym_PLUS;
	v->a[66850] = anon_sym_DASH;
	v->a[66851] = anon_sym_STAR;
	v->a[66852] = anon_sym_SLASH;
	v->a[66853] = anon_sym_PERCENT;
	v->a[66854] = actions(2774);
	v->a[66855] = 22;
	v->a[66856] = anon_sym_AMP_AMP;
	v->a[66857] = anon_sym_PIPE_PIPE;
	v->a[66858] = anon_sym_COMMA;
	v->a[66859] = anon_sym_RPAREN_RPAREN;
	small_parse_table_3343(v);
}

void	small_parse_table_3343(t_small_parse_table_array *v)
{
	v->a[66860] = anon_sym_PLUS_EQ;
	v->a[66861] = anon_sym_DASH_EQ;
	v->a[66862] = anon_sym_STAR_EQ;
	v->a[66863] = anon_sym_SLASH_EQ;
	v->a[66864] = anon_sym_PERCENT_EQ;
	v->a[66865] = anon_sym_LT_LT_EQ;
	v->a[66866] = anon_sym_GT_GT_EQ;
	v->a[66867] = anon_sym_AMP_EQ;
	v->a[66868] = anon_sym_CARET_EQ;
	v->a[66869] = anon_sym_PIPE_EQ;
	v->a[66870] = anon_sym_EQ_EQ;
	v->a[66871] = anon_sym_BANG_EQ;
	v->a[66872] = anon_sym_LT_EQ;
	v->a[66873] = anon_sym_GT_EQ;
	v->a[66874] = anon_sym_QMARK;
	v->a[66875] = anon_sym_COLON;
	v->a[66876] = anon_sym_PLUS_PLUS2;
	v->a[66877] = anon_sym_DASH_DASH2;
	v->a[66878] = 19;
	v->a[66879] = actions(57);
	small_parse_table_3344(v);
}

void	small_parse_table_3344(t_small_parse_table_array *v)
{
	v->a[66880] = 1;
	v->a[66881] = sym_comment;
	v->a[66882] = actions(4120);
	v->a[66883] = 1;
	v->a[66884] = anon_sym_PIPE;
	v->a[66885] = actions(4122);
	v->a[66886] = 1;
	v->a[66887] = anon_sym_AMP_AMP;
	v->a[66888] = actions(4124);
	v->a[66889] = 1;
	v->a[66890] = anon_sym_PIPE_PIPE;
	v->a[66891] = actions(4126);
	v->a[66892] = 1;
	v->a[66893] = anon_sym_EQ;
	v->a[66894] = actions(4132);
	v->a[66895] = 1;
	v->a[66896] = anon_sym_COMMA;
	v->a[66897] = actions(4138);
	v->a[66898] = 1;
	v->a[66899] = anon_sym_CARET;
	small_parse_table_3345(v);
}

/* EOF small_parse_table_668.c */
