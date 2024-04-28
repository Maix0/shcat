/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1947.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9735(t_small_parse_table_array *v)
{
	v->a[194700] = sym_word;
	v->a[194701] = 21;
	v->a[194702] = actions(3);
	v->a[194703] = 1;
	v->a[194704] = sym_comment;
	v->a[194705] = actions(3729);
	v->a[194706] = 1;
	v->a[194707] = anon_sym_DOLLAR_LBRACK;
	v->a[194708] = actions(3731);
	v->a[194709] = 1;
	v->a[194710] = anon_sym_DOLLAR;
	v->a[194711] = actions(3733);
	v->a[194712] = 1;
	v->a[194713] = sym__special_character;
	v->a[194714] = actions(3735);
	v->a[194715] = 1;
	v->a[194716] = anon_sym_DQUOTE;
	v->a[194717] = actions(3737);
	v->a[194718] = 1;
	v->a[194719] = aux_sym_number_token1;
	small_parse_table_9736(v);
}

void	small_parse_table_9736(t_small_parse_table_array *v)
{
	v->a[194720] = actions(3739);
	v->a[194721] = 1;
	v->a[194722] = aux_sym_number_token2;
	v->a[194723] = actions(3741);
	v->a[194724] = 1;
	v->a[194725] = anon_sym_DOLLAR_LBRACE;
	v->a[194726] = actions(3743);
	v->a[194727] = 1;
	v->a[194728] = anon_sym_DOLLAR_LPAREN;
	v->a[194729] = actions(3745);
	v->a[194730] = 1;
	v->a[194731] = anon_sym_BQUOTE;
	v->a[194732] = actions(3747);
	v->a[194733] = 1;
	v->a[194734] = anon_sym_DOLLAR_BQUOTE;
	v->a[194735] = actions(3753);
	v->a[194736] = 1;
	v->a[194737] = sym_test_operator;
	v->a[194738] = actions(3755);
	v->a[194739] = 1;
	small_parse_table_9737(v);
}

void	small_parse_table_9737(t_small_parse_table_array *v)
{
	v->a[194740] = sym__brace_start;
	v->a[194741] = actions(8722);
	v->a[194742] = 1;
	v->a[194743] = aux_sym_heredoc_redirect_token1;
	v->a[194744] = state(3571);
	v->a[194745] = 1;
	v->a[194746] = aux_sym__heredoc_command;
	v->a[194747] = state(5351);
	v->a[194748] = 1;
	v->a[194749] = aux_sym__literal_repeat1;
	v->a[194750] = state(5456);
	v->a[194751] = 1;
	v->a[194752] = sym_concatenation;
	v->a[194753] = actions(3715);
	v->a[194754] = 2;
	v->a[194755] = anon_sym_LPAREN_LPAREN;
	v->a[194756] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194757] = actions(3749);
	v->a[194758] = 2;
	v->a[194759] = anon_sym_LT_LPAREN;
	small_parse_table_9738(v);
}

void	small_parse_table_9738(t_small_parse_table_array *v)
{
	v->a[194760] = anon_sym_GT_LPAREN;
	v->a[194761] = actions(3713);
	v->a[194762] = 3;
	v->a[194763] = sym_raw_string;
	v->a[194764] = sym_ansi_c_string;
	v->a[194765] = sym_word;
	v->a[194766] = state(5062);
	v->a[194767] = 9;
	v->a[194768] = sym_arithmetic_expansion;
	v->a[194769] = sym_brace_expression;
	v->a[194770] = sym_string;
	v->a[194771] = sym_translated_string;
	v->a[194772] = sym_number;
	v->a[194773] = sym_simple_expansion;
	v->a[194774] = sym_expansion;
	v->a[194775] = sym_command_substitution;
	v->a[194776] = sym_process_substitution;
	v->a[194777] = 21;
	v->a[194778] = actions(71);
	v->a[194779] = 1;
	small_parse_table_9739(v);
}

void	small_parse_table_9739(t_small_parse_table_array *v)
{
	v->a[194780] = sym_comment;
	v->a[194781] = actions(8565);
	v->a[194782] = 1;
	v->a[194783] = sym_word;
	v->a[194784] = actions(8571);
	v->a[194785] = 1;
	v->a[194786] = anon_sym_DOLLAR_LBRACK;
	v->a[194787] = actions(8573);
	v->a[194788] = 1;
	v->a[194789] = anon_sym_DOLLAR;
	v->a[194790] = actions(8575);
	v->a[194791] = 1;
	v->a[194792] = sym__special_character;
	v->a[194793] = actions(8577);
	v->a[194794] = 1;
	v->a[194795] = anon_sym_DQUOTE;
	v->a[194796] = actions(8581);
	v->a[194797] = 1;
	v->a[194798] = aux_sym_number_token1;
	v->a[194799] = actions(8583);
	small_parse_table_9740(v);
}

/* EOF small_parse_table_1947.c */
