/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2105.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10525(t_small_parse_table_array *v)
{
	v->a[210500] = 1;
	v->a[210501] = sym__special_character;
	v->a[210502] = actions(9944);
	v->a[210503] = 1;
	v->a[210504] = anon_sym_DQUOTE;
	v->a[210505] = actions(9948);
	v->a[210506] = 1;
	v->a[210507] = anon_sym_DOLLAR_LBRACE;
	v->a[210508] = actions(9950);
	v->a[210509] = 1;
	v->a[210510] = anon_sym_BQUOTE;
	v->a[210511] = actions(9952);
	v->a[210512] = 1;
	v->a[210513] = anon_sym_DOLLAR_BQUOTE;
	v->a[210514] = actions(9968);
	v->a[210515] = 1;
	v->a[210516] = sym_word;
	v->a[210517] = actions(9972);
	v->a[210518] = 1;
	v->a[210519] = sym_test_operator;
	small_parse_table_10526(v);
}

void	small_parse_table_10526(t_small_parse_table_array *v)
{
	v->a[210520] = state(4290);
	v->a[210521] = 1;
	v->a[210522] = aux_sym__literal_repeat1;
	v->a[210523] = state(4709);
	v->a[210524] = 1;
	v->a[210525] = sym_concatenation;
	v->a[210526] = actions(9938);
	v->a[210527] = 2;
	v->a[210528] = anon_sym_LPAREN_LPAREN;
	v->a[210529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210530] = actions(9954);
	v->a[210531] = 2;
	v->a[210532] = anon_sym_LT_LPAREN;
	v->a[210533] = anon_sym_GT_LPAREN;
	v->a[210534] = actions(9970);
	v->a[210535] = 2;
	v->a[210536] = sym_raw_string;
	v->a[210537] = sym_ansi_c_string;
	v->a[210538] = state(4260);
	v->a[210539] = 9;
	small_parse_table_10527(v);
}

void	small_parse_table_10527(t_small_parse_table_array *v)
{
	v->a[210540] = sym_arithmetic_expansion;
	v->a[210541] = sym_brace_expression;
	v->a[210542] = sym_string;
	v->a[210543] = sym_translated_string;
	v->a[210544] = sym_number;
	v->a[210545] = sym_simple_expansion;
	v->a[210546] = sym_expansion;
	v->a[210547] = sym_command_substitution;
	v->a[210548] = sym_process_substitution;
	v->a[210549] = 20;
	v->a[210550] = actions(71);
	v->a[210551] = 1;
	v->a[210552] = sym_comment;
	v->a[210553] = actions(8474);
	v->a[210554] = 1;
	v->a[210555] = anon_sym_DOLLAR_LBRACK;
	v->a[210556] = actions(8476);
	v->a[210557] = 1;
	v->a[210558] = anon_sym_DOLLAR;
	v->a[210559] = actions(8478);
	small_parse_table_10528(v);
}

void	small_parse_table_10528(t_small_parse_table_array *v)
{
	v->a[210560] = 1;
	v->a[210561] = sym__special_character;
	v->a[210562] = actions(8480);
	v->a[210563] = 1;
	v->a[210564] = anon_sym_DQUOTE;
	v->a[210565] = actions(8484);
	v->a[210566] = 1;
	v->a[210567] = aux_sym_number_token1;
	v->a[210568] = actions(8486);
	v->a[210569] = 1;
	v->a[210570] = aux_sym_number_token2;
	v->a[210571] = actions(8488);
	v->a[210572] = 1;
	v->a[210573] = anon_sym_DOLLAR_LBRACE;
	v->a[210574] = actions(8490);
	v->a[210575] = 1;
	v->a[210576] = anon_sym_DOLLAR_LPAREN;
	v->a[210577] = actions(8492);
	v->a[210578] = 1;
	v->a[210579] = anon_sym_BQUOTE;
	small_parse_table_10529(v);
}

void	small_parse_table_10529(t_small_parse_table_array *v)
{
	v->a[210580] = actions(8494);
	v->a[210581] = 1;
	v->a[210582] = anon_sym_DOLLAR_BQUOTE;
	v->a[210583] = actions(8504);
	v->a[210584] = 1;
	v->a[210585] = sym__brace_start;
	v->a[210586] = actions(9974);
	v->a[210587] = 1;
	v->a[210588] = sym_word;
	v->a[210589] = actions(9978);
	v->a[210590] = 1;
	v->a[210591] = sym_test_operator;
	v->a[210592] = state(1828);
	v->a[210593] = 1;
	v->a[210594] = aux_sym__literal_repeat1;
	v->a[210595] = state(2227);
	v->a[210596] = 1;
	v->a[210597] = sym_concatenation;
	v->a[210598] = actions(8470);
	v->a[210599] = 2;
	small_parse_table_10530(v);
}

/* EOF small_parse_table_2105.c */
