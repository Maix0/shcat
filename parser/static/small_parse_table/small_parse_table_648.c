/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_648.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3240(t_small_parse_table_array *v)
{
	v->a[64800] = anon_sym_AMP_EQ;
	v->a[64801] = anon_sym_CARET_EQ;
	v->a[64802] = anon_sym_PIPE_EQ;
	v->a[64803] = anon_sym_EQ_EQ;
	v->a[64804] = anon_sym_BANG_EQ;
	v->a[64805] = anon_sym_LT_EQ;
	v->a[64806] = anon_sym_GT_EQ;
	v->a[64807] = anon_sym_QMARK;
	v->a[64808] = anon_sym_COLON;
	v->a[64809] = 4;
	v->a[64810] = actions(57);
	v->a[64811] = 1;
	v->a[64812] = sym_comment;
	v->a[64813] = actions(4152);
	v->a[64814] = 2;
	v->a[64815] = anon_sym_PLUS_PLUS2;
	v->a[64816] = anon_sym_DASH_DASH2;
	v->a[64817] = actions(4175);
	v->a[64818] = 13;
	v->a[64819] = anon_sym_PIPE;
	small_parse_table_3241(v);
}

void	small_parse_table_3241(t_small_parse_table_array *v)
{
	v->a[64820] = anon_sym_EQ;
	v->a[64821] = anon_sym_LT;
	v->a[64822] = anon_sym_GT;
	v->a[64823] = anon_sym_GT_GT;
	v->a[64824] = anon_sym_LT_LT;
	v->a[64825] = anon_sym_CARET;
	v->a[64826] = anon_sym_AMP;
	v->a[64827] = anon_sym_PLUS;
	v->a[64828] = anon_sym_DASH;
	v->a[64829] = anon_sym_STAR;
	v->a[64830] = anon_sym_SLASH;
	v->a[64831] = anon_sym_PERCENT;
	v->a[64832] = actions(4177);
	v->a[64833] = 20;
	v->a[64834] = anon_sym_AMP_AMP;
	v->a[64835] = anon_sym_PIPE_PIPE;
	v->a[64836] = anon_sym_COMMA;
	v->a[64837] = anon_sym_RPAREN_RPAREN;
	v->a[64838] = anon_sym_PLUS_EQ;
	v->a[64839] = anon_sym_DASH_EQ;
	small_parse_table_3242(v);
}

void	small_parse_table_3242(t_small_parse_table_array *v)
{
	v->a[64840] = anon_sym_STAR_EQ;
	v->a[64841] = anon_sym_SLASH_EQ;
	v->a[64842] = anon_sym_PERCENT_EQ;
	v->a[64843] = anon_sym_LT_LT_EQ;
	v->a[64844] = anon_sym_GT_GT_EQ;
	v->a[64845] = anon_sym_AMP_EQ;
	v->a[64846] = anon_sym_CARET_EQ;
	v->a[64847] = anon_sym_PIPE_EQ;
	v->a[64848] = anon_sym_EQ_EQ;
	v->a[64849] = anon_sym_BANG_EQ;
	v->a[64850] = anon_sym_LT_EQ;
	v->a[64851] = anon_sym_GT_EQ;
	v->a[64852] = anon_sym_QMARK;
	v->a[64853] = anon_sym_COLON;
	v->a[64854] = 3;
	v->a[64855] = actions(57);
	v->a[64856] = 1;
	v->a[64857] = sym_comment;
	v->a[64858] = actions(3018);
	v->a[64859] = 14;
	small_parse_table_3243(v);
}

void	small_parse_table_3243(t_small_parse_table_array *v)
{
	v->a[64860] = anon_sym_PIPE;
	v->a[64861] = anon_sym_LT;
	v->a[64862] = anon_sym_GT;
	v->a[64863] = anon_sym_AMP_GT;
	v->a[64864] = anon_sym_LT_AMP;
	v->a[64865] = anon_sym_GT_AMP;
	v->a[64866] = anon_sym_LT_LT;
	v->a[64867] = anon_sym_DOLLAR;
	v->a[64868] = aux_sym_number_token1;
	v->a[64869] = aux_sym_number_token2;
	v->a[64870] = anon_sym_DOLLAR_LPAREN;
	v->a[64871] = anon_sym_BQUOTE;
	v->a[64872] = aux_sym__simple_variable_name_token1;
	v->a[64873] = sym_word;
	v->a[64874] = actions(3020);
	v->a[64875] = 21;
	v->a[64876] = sym_file_descriptor;
	v->a[64877] = sym__concat;
	v->a[64878] = sym_variable_name;
	v->a[64879] = sym_test_operator;
	small_parse_table_3244(v);
}

void	small_parse_table_3244(t_small_parse_table_array *v)
{
	v->a[64880] = sym__brace_start;
	v->a[64881] = anon_sym_PIPE_AMP;
	v->a[64882] = anon_sym_AMP_AMP;
	v->a[64883] = anon_sym_PIPE_PIPE;
	v->a[64884] = anon_sym_GT_GT;
	v->a[64885] = anon_sym_AMP_GT_GT;
	v->a[64886] = anon_sym_GT_PIPE;
	v->a[64887] = anon_sym_LT_AMP_DASH;
	v->a[64888] = anon_sym_GT_AMP_DASH;
	v->a[64889] = anon_sym_LT_LT_DASH;
	v->a[64890] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64891] = aux_sym_concatenation_token1;
	v->a[64892] = sym__special_character;
	v->a[64893] = anon_sym_DQUOTE;
	v->a[64894] = sym_raw_string;
	v->a[64895] = anon_sym_DOLLAR_LBRACE;
	v->a[64896] = anon_sym_DOLLAR_BQUOTE;
	v->a[64897] = 3;
	v->a[64898] = actions(57);
	v->a[64899] = 1;
	small_parse_table_3245(v);
}

/* EOF small_parse_table_648.c */
