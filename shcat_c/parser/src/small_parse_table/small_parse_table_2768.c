/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2768.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13840(t_small_parse_table_array *v)
{
	v->a[276800] = sym_ansi_c_string;
	v->a[276801] = anon_sym_DOLLAR_LBRACE;
	v->a[276802] = anon_sym_BQUOTE;
	v->a[276803] = anon_sym_DOLLAR_BQUOTE;
	v->a[276804] = anon_sym_LT_LPAREN;
	v->a[276805] = anon_sym_GT_LPAREN;
	v->a[276806] = 5;
	v->a[276807] = actions(71);
	v->a[276808] = 1;
	v->a[276809] = sym_comment;
	v->a[276810] = state(5175);
	v->a[276811] = 1;
	v->a[276812] = aux_sym_concatenation_repeat1;
	v->a[276813] = actions(12327);
	v->a[276814] = 2;
	v->a[276815] = sym__concat;
	v->a[276816] = aux_sym_concatenation_token1;
	v->a[276817] = actions(5721);
	v->a[276818] = 7;
	v->a[276819] = anon_sym_PIPE;
	small_parse_table_13841(v);
}

void	small_parse_table_13841(t_small_parse_table_array *v)
{
	v->a[276820] = anon_sym_LT;
	v->a[276821] = anon_sym_GT;
	v->a[276822] = anon_sym_LT_LT;
	v->a[276823] = anon_sym_AMP_GT;
	v->a[276824] = anon_sym_LT_AMP;
	v->a[276825] = anon_sym_GT_AMP;
	v->a[276826] = actions(5723);
	v->a[276827] = 12;
	v->a[276828] = sym_file_descriptor;
	v->a[276829] = anon_sym_PIPE_PIPE;
	v->a[276830] = anon_sym_AMP_AMP;
	v->a[276831] = anon_sym_GT_GT;
	v->a[276832] = anon_sym_PIPE_AMP;
	v->a[276833] = anon_sym_RBRACK;
	v->a[276834] = anon_sym_AMP_GT_GT;
	v->a[276835] = anon_sym_GT_PIPE;
	v->a[276836] = anon_sym_LT_AMP_DASH;
	v->a[276837] = anon_sym_GT_AMP_DASH;
	v->a[276838] = anon_sym_LT_LT_DASH;
	v->a[276839] = anon_sym_LT_LT_LT;
	small_parse_table_13842(v);
}

void	small_parse_table_13842(t_small_parse_table_array *v)
{
	v->a[276840] = 3;
	v->a[276841] = actions(71);
	v->a[276842] = 1;
	v->a[276843] = sym_comment;
	v->a[276844] = actions(1296);
	v->a[276845] = 6;
	v->a[276846] = anon_sym_DOLLAR;
	v->a[276847] = aux_sym_number_token1;
	v->a[276848] = aux_sym_number_token2;
	v->a[276849] = anon_sym_DOLLAR_LPAREN;
	v->a[276850] = anon_sym_BQUOTE;
	v->a[276851] = sym_word;
	v->a[276852] = actions(1298);
	v->a[276853] = 16;
	v->a[276854] = sym__concat;
	v->a[276855] = sym_test_operator;
	v->a[276856] = sym__brace_start;
	v->a[276857] = anon_sym_LPAREN_LPAREN;
	v->a[276858] = anon_sym_RPAREN;
	v->a[276859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_13843(v);
}

void	small_parse_table_13843(t_small_parse_table_array *v)
{
	v->a[276860] = anon_sym_DOLLAR_LBRACK;
	v->a[276861] = aux_sym_concatenation_token1;
	v->a[276862] = sym__special_character;
	v->a[276863] = anon_sym_DQUOTE;
	v->a[276864] = sym_raw_string;
	v->a[276865] = sym_ansi_c_string;
	v->a[276866] = anon_sym_DOLLAR_LBRACE;
	v->a[276867] = anon_sym_DOLLAR_BQUOTE;
	v->a[276868] = anon_sym_LT_LPAREN;
	v->a[276869] = anon_sym_GT_LPAREN;
	v->a[276870] = 4;
	v->a[276871] = actions(71);
	v->a[276872] = 1;
	v->a[276873] = sym_comment;
	v->a[276874] = actions(12433);
	v->a[276875] = 1;
	v->a[276876] = anon_sym_esac;
	v->a[276877] = actions(12429);
	v->a[276878] = 6;
	v->a[276879] = anon_sym_LPAREN;
	small_parse_table_13844(v);
}

void	small_parse_table_13844(t_small_parse_table_array *v)
{
	v->a[276880] = anon_sym_DOLLAR;
	v->a[276881] = aux_sym_number_token1;
	v->a[276882] = aux_sym_number_token2;
	v->a[276883] = anon_sym_DOLLAR_LPAREN;
	v->a[276884] = sym_word;
	v->a[276885] = actions(12431);
	v->a[276886] = 15;
	v->a[276887] = sym_test_operator;
	v->a[276888] = sym_extglob_pattern;
	v->a[276889] = sym__brace_start;
	v->a[276890] = anon_sym_LPAREN_LPAREN;
	v->a[276891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[276892] = anon_sym_DOLLAR_LBRACK;
	v->a[276893] = sym__special_character;
	v->a[276894] = anon_sym_DQUOTE;
	v->a[276895] = sym_raw_string;
	v->a[276896] = sym_ansi_c_string;
	v->a[276897] = anon_sym_DOLLAR_LBRACE;
	v->a[276898] = anon_sym_BQUOTE;
	v->a[276899] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_13845(v);
}

/* EOF small_parse_table_2768.c */
