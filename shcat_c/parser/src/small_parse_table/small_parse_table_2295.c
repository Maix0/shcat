/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2295.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11475(t_small_parse_table_array *v)
{
	v->a[229500] = anon_sym_DOLLAR_LPAREN;
	v->a[229501] = actions(5333);
	v->a[229502] = 1;
	v->a[229503] = anon_sym_BQUOTE;
	v->a[229504] = actions(5335);
	v->a[229505] = 1;
	v->a[229506] = anon_sym_DOLLAR_BQUOTE;
	v->a[229507] = actions(5341);
	v->a[229508] = 1;
	v->a[229509] = sym__brace_start;
	v->a[229510] = actions(10236);
	v->a[229511] = 1;
	v->a[229512] = sym_word;
	v->a[229513] = actions(10242);
	v->a[229514] = 1;
	v->a[229515] = sym__comment_word;
	v->a[229516] = actions(10872);
	v->a[229517] = 1;
	v->a[229518] = anon_sym_DOLLAR;
	v->a[229519] = actions(5313);
	small_parse_table_11476(v);
}

void	small_parse_table_11476(t_small_parse_table_array *v)
{
	v->a[229520] = 2;
	v->a[229521] = anon_sym_LPAREN_LPAREN;
	v->a[229522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[229523] = actions(5337);
	v->a[229524] = 2;
	v->a[229525] = anon_sym_LT_LPAREN;
	v->a[229526] = anon_sym_GT_LPAREN;
	v->a[229527] = actions(10238);
	v->a[229528] = 2;
	v->a[229529] = sym_test_operator;
	v->a[229530] = sym__special_character;
	v->a[229531] = actions(10240);
	v->a[229532] = 3;
	v->a[229533] = sym__bare_dollar;
	v->a[229534] = sym_raw_string;
	v->a[229535] = sym_ansi_c_string;
	v->a[229536] = state(5461);
	v->a[229537] = 9;
	v->a[229538] = sym_arithmetic_expansion;
	v->a[229539] = sym_brace_expression;
	small_parse_table_11477(v);
}

void	small_parse_table_11477(t_small_parse_table_array *v)
{
	v->a[229540] = sym_string;
	v->a[229541] = sym_translated_string;
	v->a[229542] = sym_number;
	v->a[229543] = sym_simple_expansion;
	v->a[229544] = sym_expansion;
	v->a[229545] = sym_command_substitution;
	v->a[229546] = sym_process_substitution;
	v->a[229547] = 20;
	v->a[229548] = actions(71);
	v->a[229549] = 1;
	v->a[229550] = sym_comment;
	v->a[229551] = actions(9758);
	v->a[229552] = 1;
	v->a[229553] = anon_sym_DOLLAR_LBRACK;
	v->a[229554] = actions(9760);
	v->a[229555] = 1;
	v->a[229556] = anon_sym_DOLLAR;
	v->a[229557] = actions(9764);
	v->a[229558] = 1;
	v->a[229559] = anon_sym_DQUOTE;
	small_parse_table_11478(v);
}

void	small_parse_table_11478(t_small_parse_table_array *v)
{
	v->a[229560] = actions(9768);
	v->a[229561] = 1;
	v->a[229562] = aux_sym_number_token1;
	v->a[229563] = actions(9770);
	v->a[229564] = 1;
	v->a[229565] = aux_sym_number_token2;
	v->a[229566] = actions(9772);
	v->a[229567] = 1;
	v->a[229568] = anon_sym_DOLLAR_LBRACE;
	v->a[229569] = actions(9774);
	v->a[229570] = 1;
	v->a[229571] = anon_sym_DOLLAR_LPAREN;
	v->a[229572] = actions(9776);
	v->a[229573] = 1;
	v->a[229574] = anon_sym_BQUOTE;
	v->a[229575] = actions(9778);
	v->a[229576] = 1;
	v->a[229577] = anon_sym_DOLLAR_BQUOTE;
	v->a[229578] = actions(9784);
	v->a[229579] = 1;
	small_parse_table_11479(v);
}

void	small_parse_table_11479(t_small_parse_table_array *v)
{
	v->a[229580] = sym__brace_start;
	v->a[229581] = actions(10052);
	v->a[229582] = 1;
	v->a[229583] = sym__special_character;
	v->a[229584] = actions(10874);
	v->a[229585] = 1;
	v->a[229586] = sym_word;
	v->a[229587] = actions(10878);
	v->a[229588] = 1;
	v->a[229589] = sym_test_operator;
	v->a[229590] = state(6223);
	v->a[229591] = 1;
	v->a[229592] = aux_sym__literal_repeat1;
	v->a[229593] = state(6374);
	v->a[229594] = 1;
	v->a[229595] = sym_concatenation;
	v->a[229596] = actions(9756);
	v->a[229597] = 2;
	v->a[229598] = anon_sym_LPAREN_LPAREN;
	v->a[229599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_11480(v);
}

/* EOF small_parse_table_2295.c */
