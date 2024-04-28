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
	v->a[10501] = aux_sym_number_token2;
	v->a[10502] = actions(2873);
	v->a[10503] = 1;
	v->a[10504] = anon_sym_DOLLAR_LBRACE;
	v->a[10505] = actions(2875);
	v->a[10506] = 1;
	v->a[10507] = anon_sym_DOLLAR_LPAREN;
	v->a[10508] = actions(2877);
	v->a[10509] = 1;
	v->a[10510] = anon_sym_BQUOTE;
	v->a[10511] = actions(2879);
	v->a[10512] = 1;
	v->a[10513] = anon_sym_DOLLAR_BQUOTE;
	v->a[10514] = actions(2885);
	v->a[10515] = 1;
	v->a[10516] = sym__brace_start;
	v->a[10517] = actions(2939);
	v->a[10518] = 1;
	v->a[10519] = sym_test_operator;
	small_parse_table_526(v);
}

void	small_parse_table_526(t_small_parse_table_array *v)
{
	v->a[10520] = state(4351);
	v->a[10521] = 1;
	v->a[10522] = aux_sym__literal_repeat1;
	v->a[10523] = state(4789);
	v->a[10524] = 1;
	v->a[10525] = sym_concatenation;
	v->a[10526] = actions(2500);
	v->a[10527] = 2;
	v->a[10528] = sym_file_descriptor;
	v->a[10529] = aux_sym_heredoc_redirect_token1;
	v->a[10530] = actions(2859);
	v->a[10531] = 2;
	v->a[10532] = anon_sym_LPAREN_LPAREN;
	v->a[10533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10534] = actions(2881);
	v->a[10535] = 2;
	v->a[10536] = anon_sym_LT_LPAREN;
	v->a[10537] = anon_sym_GT_LPAREN;
	v->a[10538] = actions(2937);
	v->a[10539] = 3;
	small_parse_table_527(v);
}

void	small_parse_table_527(t_small_parse_table_array *v)
{
	v->a[10540] = sym_raw_string;
	v->a[10541] = sym_ansi_c_string;
	v->a[10542] = sym_word;
	v->a[10543] = state(4247);
	v->a[10544] = 9;
	v->a[10545] = sym_arithmetic_expansion;
	v->a[10546] = sym_brace_expression;
	v->a[10547] = sym_string;
	v->a[10548] = sym_translated_string;
	v->a[10549] = sym_number;
	v->a[10550] = sym_simple_expansion;
	v->a[10551] = sym_expansion;
	v->a[10552] = sym_command_substitution;
	v->a[10553] = sym_process_substitution;
	v->a[10554] = actions(2498);
	v->a[10555] = 23;
	v->a[10556] = anon_sym_SEMI;
	v->a[10557] = anon_sym_PIPE_PIPE;
	v->a[10558] = anon_sym_AMP_AMP;
	v->a[10559] = anon_sym_PIPE;
	small_parse_table_528(v);
}

void	small_parse_table_528(t_small_parse_table_array *v)
{
	v->a[10560] = anon_sym_AMP;
	v->a[10561] = anon_sym_LT;
	v->a[10562] = anon_sym_GT;
	v->a[10563] = anon_sym_LT_LT;
	v->a[10564] = anon_sym_GT_GT;
	v->a[10565] = anon_sym_esac;
	v->a[10566] = anon_sym_SEMI_SEMI;
	v->a[10567] = anon_sym_SEMI_AMP;
	v->a[10568] = anon_sym_SEMI_SEMI_AMP;
	v->a[10569] = anon_sym_PIPE_AMP;
	v->a[10570] = anon_sym_AMP_GT;
	v->a[10571] = anon_sym_AMP_GT_GT;
	v->a[10572] = anon_sym_LT_AMP;
	v->a[10573] = anon_sym_GT_AMP;
	v->a[10574] = anon_sym_GT_PIPE;
	v->a[10575] = anon_sym_LT_AMP_DASH;
	v->a[10576] = anon_sym_GT_AMP_DASH;
	v->a[10577] = anon_sym_LT_LT_DASH;
	v->a[10578] = anon_sym_LT_LT_LT;
	v->a[10579] = 37;
	small_parse_table_529(v);
}

void	small_parse_table_529(t_small_parse_table_array *v)
{
	v->a[10580] = actions(19);
	v->a[10581] = 1;
	v->a[10582] = anon_sym_LPAREN;
	v->a[10583] = actions(33);
	v->a[10584] = 1;
	v->a[10585] = anon_sym_LBRACK;
	v->a[10586] = actions(35);
	v->a[10587] = 1;
	v->a[10588] = anon_sym_LBRACK_LBRACK;
	v->a[10589] = actions(71);
	v->a[10590] = 1;
	v->a[10591] = sym_comment;
	v->a[10592] = actions(137);
	v->a[10593] = 1;
	v->a[10594] = sym_variable_name;
	v->a[10595] = actions(288);
	v->a[10596] = 1;
	v->a[10597] = anon_sym_LPAREN_LPAREN;
	v->a[10598] = actions(312);
	v->a[10599] = 1;
	small_parse_table_530(v);
}

/* EOF small_parse_table_105.c */
