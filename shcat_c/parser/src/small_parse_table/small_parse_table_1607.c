/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1607.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8035(t_small_parse_table_array *v)
{
	v->a[160700] = aux_sym_number_token2;
	v->a[160701] = actions(6500);
	v->a[160702] = 1;
	v->a[160703] = anon_sym_DOLLAR_LPAREN;
	v->a[160704] = actions(6508);
	v->a[160705] = 1;
	v->a[160706] = sym_test_operator;
	v->a[160707] = actions(6510);
	v->a[160708] = 1;
	v->a[160709] = sym_extglob_pattern;
	v->a[160710] = actions(6512);
	v->a[160711] = 1;
	v->a[160712] = sym__brace_start;
	v->a[160713] = actions(7226);
	v->a[160714] = 1;
	v->a[160715] = anon_sym_DOLLAR_LBRACK;
	v->a[160716] = actions(7228);
	v->a[160717] = 1;
	v->a[160718] = sym__special_character;
	v->a[160719] = actions(7230);
	small_parse_table_8036(v);
}

void	small_parse_table_8036(t_small_parse_table_array *v)
{
	v->a[160720] = 1;
	v->a[160721] = anon_sym_DQUOTE;
	v->a[160722] = actions(7234);
	v->a[160723] = 1;
	v->a[160724] = anon_sym_DOLLAR_LBRACE;
	v->a[160725] = actions(7236);
	v->a[160726] = 1;
	v->a[160727] = anon_sym_BQUOTE;
	v->a[160728] = actions(7238);
	v->a[160729] = 1;
	v->a[160730] = anon_sym_DOLLAR_BQUOTE;
	v->a[160731] = actions(7372);
	v->a[160732] = 1;
	v->a[160733] = anon_sym_esac;
	v->a[160734] = state(6426);
	v->a[160735] = 1;
	v->a[160736] = aux_sym__literal_repeat1;
	v->a[160737] = state(6942);
	v->a[160738] = 1;
	v->a[160739] = sym_last_case_item;
	small_parse_table_8037(v);
}

void	small_parse_table_8037(t_small_parse_table_array *v)
{
	v->a[160740] = actions(7224);
	v->a[160741] = 2;
	v->a[160742] = anon_sym_LPAREN_LPAREN;
	v->a[160743] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[160744] = actions(7232);
	v->a[160745] = 2;
	v->a[160746] = sym_raw_string;
	v->a[160747] = sym_ansi_c_string;
	v->a[160748] = actions(7240);
	v->a[160749] = 2;
	v->a[160750] = anon_sym_LT_LPAREN;
	v->a[160751] = anon_sym_GT_LPAREN;
	v->a[160752] = state(3407);
	v->a[160753] = 2;
	v->a[160754] = sym_case_item;
	v->a[160755] = aux_sym_case_statement_repeat1;
	v->a[160756] = state(6695);
	v->a[160757] = 2;
	v->a[160758] = sym_concatenation;
	v->a[160759] = sym__extglob_blob;
	small_parse_table_8038(v);
}

void	small_parse_table_8038(t_small_parse_table_array *v)
{
	v->a[160760] = state(6303);
	v->a[160761] = 9;
	v->a[160762] = sym_arithmetic_expansion;
	v->a[160763] = sym_brace_expression;
	v->a[160764] = sym_string;
	v->a[160765] = sym_translated_string;
	v->a[160766] = sym_number;
	v->a[160767] = sym_simple_expansion;
	v->a[160768] = sym_expansion;
	v->a[160769] = sym_command_substitution;
	v->a[160770] = sym_process_substitution;
	v->a[160771] = 20;
	v->a[160772] = actions(71);
	v->a[160773] = 1;
	v->a[160774] = sym_comment;
	v->a[160775] = actions(7220);
	v->a[160776] = 1;
	v->a[160777] = anon_sym_STAR_STAR;
	v->a[160778] = actions(7222);
	v->a[160779] = 1;
	small_parse_table_8039(v);
}

void	small_parse_table_8039(t_small_parse_table_array *v)
{
	v->a[160780] = sym_test_operator;
	v->a[160781] = actions(7374);
	v->a[160782] = 1;
	v->a[160783] = anon_sym_RPAREN_RPAREN;
	v->a[160784] = actions(7376);
	v->a[160785] = 1;
	v->a[160786] = anon_sym_EQ;
	v->a[160787] = actions(7380);
	v->a[160788] = 1;
	v->a[160789] = anon_sym_PIPE_PIPE;
	v->a[160790] = actions(7382);
	v->a[160791] = 1;
	v->a[160792] = anon_sym_AMP_AMP;
	v->a[160793] = actions(7384);
	v->a[160794] = 1;
	v->a[160795] = anon_sym_PIPE;
	v->a[160796] = actions(7386);
	v->a[160797] = 1;
	v->a[160798] = anon_sym_CARET;
	v->a[160799] = actions(7388);
	small_parse_table_8040(v);
}

/* EOF small_parse_table_1607.c */
