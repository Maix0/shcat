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
	v->a[7700] = sym__special_character;
	v->a[7701] = actions(1154);
	v->a[7702] = 1;
	v->a[7703] = anon_sym_DQUOTE;
	v->a[7704] = actions(1156);
	v->a[7705] = 1;
	v->a[7706] = aux_sym_number_token1;
	v->a[7707] = actions(1158);
	v->a[7708] = 1;
	v->a[7709] = aux_sym_number_token2;
	v->a[7710] = actions(1160);
	v->a[7711] = 1;
	v->a[7712] = anon_sym_DOLLAR_LBRACE;
	v->a[7713] = actions(1162);
	v->a[7714] = 1;
	v->a[7715] = anon_sym_DOLLAR_LPAREN;
	v->a[7716] = actions(1164);
	v->a[7717] = 1;
	v->a[7718] = anon_sym_BQUOTE;
	v->a[7719] = actions(1166);
	small_parse_table_386(v);
}

void	small_parse_table_386(t_small_parse_table_array *v)
{
	v->a[7720] = 1;
	v->a[7721] = anon_sym_DOLLAR_BQUOTE;
	v->a[7722] = actions(1168);
	v->a[7723] = 1;
	v->a[7724] = sym_test_operator;
	v->a[7725] = actions(1170);
	v->a[7726] = 1;
	v->a[7727] = sym__bare_dollar;
	v->a[7728] = actions(1172);
	v->a[7729] = 1;
	v->a[7730] = sym__brace_start;
	v->a[7731] = state(366);
	v->a[7732] = 1;
	v->a[7733] = aux_sym_command_repeat2;
	v->a[7734] = state(1233);
	v->a[7735] = 1;
	v->a[7736] = aux_sym__literal_repeat1;
	v->a[7737] = state(1281);
	v->a[7738] = 1;
	v->a[7739] = sym_concatenation;
	small_parse_table_387(v);
}

void	small_parse_table_387(t_small_parse_table_array *v)
{
	v->a[7740] = actions(1144);
	v->a[7741] = 2;
	v->a[7742] = sym_raw_string;
	v->a[7743] = sym_word;
	v->a[7744] = actions(1339);
	v->a[7745] = 3;
	v->a[7746] = sym_file_descriptor;
	v->a[7747] = ts_builtin_sym_end;
	v->a[7748] = aux_sym_heredoc_redirect_token1;
	v->a[7749] = state(790);
	v->a[7750] = 7;
	v->a[7751] = sym_arithmetic_expansion;
	v->a[7752] = sym_brace_expression;
	v->a[7753] = sym_string;
	v->a[7754] = sym_number;
	v->a[7755] = sym_simple_expansion;
	v->a[7756] = sym_expansion;
	v->a[7757] = sym_command_substitution;
	v->a[7758] = actions(1337);
	v->a[7759] = 19;
	small_parse_table_388(v);
}

void	small_parse_table_388(t_small_parse_table_array *v)
{
	v->a[7760] = anon_sym_PIPE;
	v->a[7761] = anon_sym_SEMI_SEMI;
	v->a[7762] = anon_sym_PIPE_AMP;
	v->a[7763] = anon_sym_AMP_AMP;
	v->a[7764] = anon_sym_PIPE_PIPE;
	v->a[7765] = anon_sym_LT;
	v->a[7766] = anon_sym_GT;
	v->a[7767] = anon_sym_GT_GT;
	v->a[7768] = anon_sym_AMP_GT;
	v->a[7769] = anon_sym_AMP_GT_GT;
	v->a[7770] = anon_sym_LT_AMP;
	v->a[7771] = anon_sym_GT_AMP;
	v->a[7772] = anon_sym_GT_PIPE;
	v->a[7773] = anon_sym_LT_AMP_DASH;
	v->a[7774] = anon_sym_GT_AMP_DASH;
	v->a[7775] = anon_sym_LT_LT;
	v->a[7776] = anon_sym_LT_LT_DASH;
	v->a[7777] = anon_sym_AMP;
	v->a[7778] = anon_sym_SEMI;
	v->a[7779] = 19;
	small_parse_table_389(v);
}

void	small_parse_table_389(t_small_parse_table_array *v)
{
	v->a[7780] = actions(3);
	v->a[7781] = 1;
	v->a[7782] = sym_comment;
	v->a[7783] = actions(1811);
	v->a[7784] = 1;
	v->a[7785] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7786] = actions(1814);
	v->a[7787] = 1;
	v->a[7788] = anon_sym_DOLLAR;
	v->a[7789] = actions(1817);
	v->a[7790] = 1;
	v->a[7791] = sym__special_character;
	v->a[7792] = actions(1820);
	v->a[7793] = 1;
	v->a[7794] = anon_sym_DQUOTE;
	v->a[7795] = actions(1823);
	v->a[7796] = 1;
	v->a[7797] = aux_sym_number_token1;
	v->a[7798] = actions(1826);
	v->a[7799] = 1;
	small_parse_table_390(v);
}

/* EOF small_parse_table_77.c */
