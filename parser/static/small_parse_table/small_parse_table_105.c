/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_105.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_525(t_small_parse_table_array *v)
{
	v->a[10500] = 1;
	v->a[10501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10502] = actions(2247);
	v->a[10503] = 1;
	v->a[10504] = anon_sym_DOLLAR;
	v->a[10505] = actions(2250);
	v->a[10506] = 1;
	v->a[10507] = sym__special_character;
	v->a[10508] = actions(2253);
	v->a[10509] = 1;
	v->a[10510] = anon_sym_DQUOTE;
	v->a[10511] = actions(2256);
	v->a[10512] = 1;
	v->a[10513] = aux_sym_number_token1;
	v->a[10514] = actions(2259);
	v->a[10515] = 1;
	v->a[10516] = aux_sym_number_token2;
	v->a[10517] = actions(2262);
	v->a[10518] = 1;
	v->a[10519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_526(v);
}

void	small_parse_table_526(t_small_parse_table_array *v)
{
	v->a[10520] = actions(2265);
	v->a[10521] = 1;
	v->a[10522] = anon_sym_DOLLAR_LPAREN;
	v->a[10523] = actions(2268);
	v->a[10524] = 1;
	v->a[10525] = anon_sym_BQUOTE;
	v->a[10526] = actions(2271);
	v->a[10527] = 1;
	v->a[10528] = anon_sym_DOLLAR_BQUOTE;
	v->a[10529] = actions(2274);
	v->a[10530] = 1;
	v->a[10531] = sym_test_operator;
	v->a[10532] = actions(2277);
	v->a[10533] = 1;
	v->a[10534] = sym__brace_start;
	v->a[10535] = state(1321);
	v->a[10536] = 1;
	v->a[10537] = aux_sym__literal_repeat1;
	v->a[10538] = actions(2241);
	v->a[10539] = 2;
	small_parse_table_527(v);
}

void	small_parse_table_527(t_small_parse_table_array *v)
{
	v->a[10540] = sym_raw_string;
	v->a[10541] = sym_word;
	v->a[10542] = state(394);
	v->a[10543] = 2;
	v->a[10544] = sym_concatenation;
	v->a[10545] = aux_sym_for_statement_repeat1;
	v->a[10546] = actions(1287);
	v->a[10547] = 3;
	v->a[10548] = sym_file_descriptor;
	v->a[10549] = ts_builtin_sym_end;
	v->a[10550] = aux_sym_heredoc_redirect_token1;
	v->a[10551] = state(1153);
	v->a[10552] = 7;
	v->a[10553] = sym_arithmetic_expansion;
	v->a[10554] = sym_brace_expression;
	v->a[10555] = sym_string;
	v->a[10556] = sym_number;
	v->a[10557] = sym_simple_expansion;
	v->a[10558] = sym_expansion;
	v->a[10559] = sym_command_substitution;
	small_parse_table_528(v);
}

void	small_parse_table_528(t_small_parse_table_array *v)
{
	v->a[10560] = actions(1285);
	v->a[10561] = 19;
	v->a[10562] = anon_sym_PIPE;
	v->a[10563] = anon_sym_SEMI_SEMI;
	v->a[10564] = anon_sym_PIPE_AMP;
	v->a[10565] = anon_sym_AMP_AMP;
	v->a[10566] = anon_sym_PIPE_PIPE;
	v->a[10567] = anon_sym_LT;
	v->a[10568] = anon_sym_GT;
	v->a[10569] = anon_sym_GT_GT;
	v->a[10570] = anon_sym_AMP_GT;
	v->a[10571] = anon_sym_AMP_GT_GT;
	v->a[10572] = anon_sym_LT_AMP;
	v->a[10573] = anon_sym_GT_AMP;
	v->a[10574] = anon_sym_GT_PIPE;
	v->a[10575] = anon_sym_LT_AMP_DASH;
	v->a[10576] = anon_sym_GT_AMP_DASH;
	v->a[10577] = anon_sym_LT_LT;
	v->a[10578] = anon_sym_LT_LT_DASH;
	v->a[10579] = anon_sym_AMP;
	small_parse_table_529(v);
}

void	small_parse_table_529(t_small_parse_table_array *v)
{
	v->a[10580] = anon_sym_SEMI;
	v->a[10581] = 6;
	v->a[10582] = actions(3);
	v->a[10583] = 1;
	v->a[10584] = sym_comment;
	v->a[10585] = actions(1727);
	v->a[10586] = 1;
	v->a[10587] = sym_variable_name;
	v->a[10588] = actions(1725);
	v->a[10589] = 2;
	v->a[10590] = aux_sym__simple_variable_name_token1;
	v->a[10591] = aux_sym__multiline_variable_name_token1;
	v->a[10592] = actions(828);
	v->a[10593] = 3;
	v->a[10594] = sym_file_descriptor;
	v->a[10595] = sym_test_operator;
	v->a[10596] = sym__brace_start;
	v->a[10597] = actions(1723);
	v->a[10598] = 9;
	v->a[10599] = anon_sym_BANG;
	small_parse_table_530(v);
}

/* EOF small_parse_table_105.c */
