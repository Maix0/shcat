/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_77.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_385(t_small_parse_table_array *v)
{
	v->a[7700] = anon_sym_DOLLAR_LPAREN;
	v->a[7701] = anon_sym_BQUOTE;
	v->a[7702] = anon_sym_DOLLAR_BQUOTE;
	v->a[7703] = anon_sym_LT_LPAREN;
	v->a[7704] = anon_sym_GT_LPAREN;
	v->a[7705] = sym_word;
	v->a[7706] = 8;
	v->a[7707] = actions(3);
	v->a[7708] = 1;
	v->a[7709] = sym_comment;
	v->a[7710] = actions(1555);
	v->a[7711] = 1;
	v->a[7712] = anon_sym_DQUOTE;
	v->a[7713] = actions(2070);
	v->a[7714] = 1;
	v->a[7715] = sym_variable_name;
	v->a[7716] = state(1176);
	v->a[7717] = 1;
	v->a[7718] = sym_string;
	v->a[7719] = actions(2068);
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = 2;
	v->a[7721] = aux_sym__simple_variable_name_token1;
	v->a[7722] = aux_sym__multiline_variable_name_token1;
	v->a[7723] = actions(1235);
	v->a[7724] = 4;
	v->a[7725] = sym_file_descriptor;
	v->a[7726] = sym_test_operator;
	v->a[7727] = sym__bare_dollar;
	v->a[7728] = sym__brace_start;
	v->a[7729] = actions(2066);
	v->a[7730] = 9;
	v->a[7731] = anon_sym_DASH;
	v->a[7732] = anon_sym_STAR;
	v->a[7733] = anon_sym_BANG;
	v->a[7734] = anon_sym_QMARK;
	v->a[7735] = anon_sym_DOLLAR;
	v->a[7736] = anon_sym_POUND;
	v->a[7737] = anon_sym_AT2;
	v->a[7738] = anon_sym_0;
	v->a[7739] = anon_sym__;
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = actions(1227);
	v->a[7741] = 38;
	v->a[7742] = anon_sym_LPAREN_LPAREN;
	v->a[7743] = anon_sym_SEMI;
	v->a[7744] = anon_sym_PIPE_PIPE;
	v->a[7745] = anon_sym_AMP_AMP;
	v->a[7746] = anon_sym_PIPE;
	v->a[7747] = anon_sym_AMP;
	v->a[7748] = anon_sym_EQ_EQ;
	v->a[7749] = anon_sym_LT;
	v->a[7750] = anon_sym_GT;
	v->a[7751] = anon_sym_LT_LT;
	v->a[7752] = anon_sym_GT_GT;
	v->a[7753] = anon_sym_SEMI_SEMI;
	v->a[7754] = anon_sym_PIPE_AMP;
	v->a[7755] = anon_sym_EQ_TILDE;
	v->a[7756] = anon_sym_AMP_GT;
	v->a[7757] = anon_sym_AMP_GT_GT;
	v->a[7758] = anon_sym_LT_AMP;
	v->a[7759] = anon_sym_GT_AMP;
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = anon_sym_GT_PIPE;
	v->a[7761] = anon_sym_LT_AMP_DASH;
	v->a[7762] = anon_sym_GT_AMP_DASH;
	v->a[7763] = anon_sym_LT_LT_DASH;
	v->a[7764] = aux_sym_heredoc_redirect_token1;
	v->a[7765] = anon_sym_LT_LT_LT;
	v->a[7766] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7767] = anon_sym_DOLLAR_LBRACK;
	v->a[7768] = sym__special_character;
	v->a[7769] = sym_raw_string;
	v->a[7770] = sym_ansi_c_string;
	v->a[7771] = aux_sym_number_token1;
	v->a[7772] = aux_sym_number_token2;
	v->a[7773] = anon_sym_DOLLAR_LBRACE;
	v->a[7774] = anon_sym_DOLLAR_LPAREN;
	v->a[7775] = anon_sym_BQUOTE;
	v->a[7776] = anon_sym_DOLLAR_BQUOTE;
	v->a[7777] = anon_sym_LT_LPAREN;
	v->a[7778] = anon_sym_GT_LPAREN;
	v->a[7779] = sym_word;
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = 6;
	v->a[7781] = actions(3);
	v->a[7782] = 1;
	v->a[7783] = sym_comment;
	v->a[7784] = state(1382);
	v->a[7785] = 1;
	v->a[7786] = aux_sym__literal_repeat1;
	v->a[7787] = state(1607);
	v->a[7788] = 1;
	v->a[7789] = sym_concatenation;
	v->a[7790] = actions(2500);
	v->a[7791] = 5;
	v->a[7792] = sym_file_descriptor;
	v->a[7793] = sym_variable_name;
	v->a[7794] = sym_test_operator;
	v->a[7795] = sym__brace_start;
	v->a[7796] = aux_sym_heredoc_redirect_token1;
	v->a[7797] = state(1081);
	v->a[7798] = 9;
	v->a[7799] = sym_arithmetic_expansion;
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
