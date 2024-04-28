/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2017.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10085(t_small_parse_table_array *v)
{
	v->a[201700] = 2;
	v->a[201701] = anon_sym_LPAREN_LPAREN;
	v->a[201702] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201703] = actions(387);
	v->a[201704] = 2;
	v->a[201705] = anon_sym_LT_LPAREN;
	v->a[201706] = anon_sym_GT_LPAREN;
	v->a[201707] = actions(8840);
	v->a[201708] = 2;
	v->a[201709] = sym__special_character;
	v->a[201710] = sym__comment_word;
	v->a[201711] = actions(8842);
	v->a[201712] = 3;
	v->a[201713] = sym__bare_dollar;
	v->a[201714] = sym_raw_string;
	v->a[201715] = sym_ansi_c_string;
	v->a[201716] = state(2730);
	v->a[201717] = 9;
	v->a[201718] = sym_arithmetic_expansion;
	v->a[201719] = sym_brace_expression;
	small_parse_table_10086(v);
}

void	small_parse_table_10086(t_small_parse_table_array *v)
{
	v->a[201720] = sym_string;
	v->a[201721] = sym_translated_string;
	v->a[201722] = sym_number;
	v->a[201723] = sym_simple_expansion;
	v->a[201724] = sym_expansion;
	v->a[201725] = sym_command_substitution;
	v->a[201726] = sym_process_substitution;
	v->a[201727] = 20;
	v->a[201728] = actions(71);
	v->a[201729] = 1;
	v->a[201730] = sym_comment;
	v->a[201731] = actions(3397);
	v->a[201732] = 1;
	v->a[201733] = anon_sym_DOLLAR;
	v->a[201734] = actions(3401);
	v->a[201735] = 1;
	v->a[201736] = aux_sym_number_token1;
	v->a[201737] = actions(3403);
	v->a[201738] = 1;
	v->a[201739] = aux_sym_number_token2;
	small_parse_table_10087(v);
}

void	small_parse_table_10087(t_small_parse_table_array *v)
{
	v->a[201740] = actions(3407);
	v->a[201741] = 1;
	v->a[201742] = anon_sym_DOLLAR_LPAREN;
	v->a[201743] = actions(3417);
	v->a[201744] = 1;
	v->a[201745] = sym__brace_start;
	v->a[201746] = actions(3663);
	v->a[201747] = 1;
	v->a[201748] = sym_word;
	v->a[201749] = actions(3667);
	v->a[201750] = 1;
	v->a[201751] = sym_test_operator;
	v->a[201752] = actions(8926);
	v->a[201753] = 1;
	v->a[201754] = anon_sym_DOLLAR_LBRACK;
	v->a[201755] = actions(8930);
	v->a[201756] = 1;
	v->a[201757] = anon_sym_DQUOTE;
	v->a[201758] = actions(8934);
	v->a[201759] = 1;
	small_parse_table_10088(v);
}

void	small_parse_table_10088(t_small_parse_table_array *v)
{
	v->a[201760] = anon_sym_DOLLAR_LBRACE;
	v->a[201761] = actions(8936);
	v->a[201762] = 1;
	v->a[201763] = anon_sym_BQUOTE;
	v->a[201764] = actions(8938);
	v->a[201765] = 1;
	v->a[201766] = anon_sym_DOLLAR_BQUOTE;
	v->a[201767] = actions(9034);
	v->a[201768] = 1;
	v->a[201769] = sym__special_character;
	v->a[201770] = state(2161);
	v->a[201771] = 1;
	v->a[201772] = aux_sym__literal_repeat1;
	v->a[201773] = actions(8924);
	v->a[201774] = 2;
	v->a[201775] = anon_sym_LPAREN_LPAREN;
	v->a[201776] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201777] = actions(8940);
	v->a[201778] = 2;
	v->a[201779] = anon_sym_LT_LPAREN;
	small_parse_table_10089(v);
}

void	small_parse_table_10089(t_small_parse_table_array *v)
{
	v->a[201780] = anon_sym_GT_LPAREN;
	v->a[201781] = actions(9036);
	v->a[201782] = 2;
	v->a[201783] = sym_raw_string;
	v->a[201784] = sym_ansi_c_string;
	v->a[201785] = state(720);
	v->a[201786] = 2;
	v->a[201787] = sym_concatenation;
	v->a[201788] = aux_sym_for_statement_repeat1;
	v->a[201789] = state(1918);
	v->a[201790] = 9;
	v->a[201791] = sym_arithmetic_expansion;
	v->a[201792] = sym_brace_expression;
	v->a[201793] = sym_string;
	v->a[201794] = sym_translated_string;
	v->a[201795] = sym_number;
	v->a[201796] = sym_simple_expansion;
	v->a[201797] = sym_expansion;
	v->a[201798] = sym_command_substitution;
	v->a[201799] = sym_process_substitution;
	small_parse_table_10090(v);
}

/* EOF small_parse_table_2017.c */
