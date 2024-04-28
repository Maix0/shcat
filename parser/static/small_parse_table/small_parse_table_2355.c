/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2355.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11775(t_small_parse_table_array *v)
{
	v->a[235500] = anon_sym_DQUOTE;
	v->a[235501] = actions(8352);
	v->a[235502] = 1;
	v->a[235503] = anon_sym_DOLLAR_LBRACE;
	v->a[235504] = actions(8354);
	v->a[235505] = 1;
	v->a[235506] = anon_sym_BQUOTE;
	v->a[235507] = actions(8356);
	v->a[235508] = 1;
	v->a[235509] = anon_sym_DOLLAR_BQUOTE;
	v->a[235510] = actions(10846);
	v->a[235511] = 1;
	v->a[235512] = sym_word;
	v->a[235513] = actions(10852);
	v->a[235514] = 1;
	v->a[235515] = sym__comment_word;
	v->a[235516] = actions(11094);
	v->a[235517] = 1;
	v->a[235518] = anon_sym_DOLLAR;
	v->a[235519] = actions(8340);
	small_parse_table_11776(v);
}

void	small_parse_table_11776(t_small_parse_table_array *v)
{
	v->a[235520] = 2;
	v->a[235521] = anon_sym_LPAREN_LPAREN;
	v->a[235522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235523] = actions(8358);
	v->a[235524] = 2;
	v->a[235525] = anon_sym_LT_LPAREN;
	v->a[235526] = anon_sym_GT_LPAREN;
	v->a[235527] = actions(10848);
	v->a[235528] = 2;
	v->a[235529] = sym_test_operator;
	v->a[235530] = sym__special_character;
	v->a[235531] = actions(10850);
	v->a[235532] = 3;
	v->a[235533] = sym__bare_dollar;
	v->a[235534] = sym_raw_string;
	v->a[235535] = sym_ansi_c_string;
	v->a[235536] = state(1493);
	v->a[235537] = 9;
	v->a[235538] = sym_arithmetic_expansion;
	v->a[235539] = sym_brace_expression;
	small_parse_table_11777(v);
}

void	small_parse_table_11777(t_small_parse_table_array *v)
{
	v->a[235540] = sym_string;
	v->a[235541] = sym_translated_string;
	v->a[235542] = sym_number;
	v->a[235543] = sym_simple_expansion;
	v->a[235544] = sym_expansion;
	v->a[235545] = sym_command_substitution;
	v->a[235546] = sym_process_substitution;
	v->a[235547] = 18;
	v->a[235548] = actions(3);
	v->a[235549] = 1;
	v->a[235550] = sym_comment;
	v->a[235551] = actions(3343);
	v->a[235552] = 1;
	v->a[235553] = aux_sym_number_token1;
	v->a[235554] = actions(3345);
	v->a[235555] = 1;
	v->a[235556] = aux_sym_number_token2;
	v->a[235557] = actions(3349);
	v->a[235558] = 1;
	v->a[235559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11778(v);
}

void	small_parse_table_11778(t_small_parse_table_array *v)
{
	v->a[235560] = actions(3359);
	v->a[235561] = 1;
	v->a[235562] = sym__brace_start;
	v->a[235563] = actions(9046);
	v->a[235564] = 1;
	v->a[235565] = anon_sym_DOLLAR_LBRACK;
	v->a[235566] = actions(9050);
	v->a[235567] = 1;
	v->a[235568] = anon_sym_DQUOTE;
	v->a[235569] = actions(9054);
	v->a[235570] = 1;
	v->a[235571] = anon_sym_DOLLAR_LBRACE;
	v->a[235572] = actions(9056);
	v->a[235573] = 1;
	v->a[235574] = anon_sym_BQUOTE;
	v->a[235575] = actions(9058);
	v->a[235576] = 1;
	v->a[235577] = anon_sym_DOLLAR_BQUOTE;
	v->a[235578] = actions(10530);
	v->a[235579] = 1;
	small_parse_table_11779(v);
}

void	small_parse_table_11779(t_small_parse_table_array *v)
{
	v->a[235580] = sym_word;
	v->a[235581] = actions(10536);
	v->a[235582] = 1;
	v->a[235583] = sym__comment_word;
	v->a[235584] = actions(11096);
	v->a[235585] = 1;
	v->a[235586] = anon_sym_DOLLAR;
	v->a[235587] = actions(9044);
	v->a[235588] = 2;
	v->a[235589] = anon_sym_LPAREN_LPAREN;
	v->a[235590] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235591] = actions(9060);
	v->a[235592] = 2;
	v->a[235593] = anon_sym_LT_LPAREN;
	v->a[235594] = anon_sym_GT_LPAREN;
	v->a[235595] = actions(10532);
	v->a[235596] = 2;
	v->a[235597] = sym_test_operator;
	v->a[235598] = sym__special_character;
	v->a[235599] = actions(10534);
	small_parse_table_11780(v);
}

/* EOF small_parse_table_2355.c */
