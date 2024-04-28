/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1247.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6235(t_small_parse_table_array *v)
{
	v->a[124700] = anon_sym_SEMI_SEMI;
	v->a[124701] = state(6303);
	v->a[124702] = 9;
	v->a[124703] = sym_arithmetic_expansion;
	v->a[124704] = sym_brace_expression;
	v->a[124705] = sym_string;
	v->a[124706] = sym_translated_string;
	v->a[124707] = sym_number;
	v->a[124708] = sym_simple_expansion;
	v->a[124709] = sym_expansion;
	v->a[124710] = sym_command_substitution;
	v->a[124711] = sym_process_substitution;
	v->a[124712] = 26;
	v->a[124713] = actions(3);
	v->a[124714] = 1;
	v->a[124715] = sym_comment;
	v->a[124716] = actions(6480);
	v->a[124717] = 1;
	v->a[124718] = anon_sym_LPAREN;
	v->a[124719] = actions(6486);
	small_parse_table_6236(v);
}

void	small_parse_table_6236(t_small_parse_table_array *v)
{
	v->a[124720] = 1;
	v->a[124721] = anon_sym_DOLLAR_LBRACK;
	v->a[124722] = actions(6488);
	v->a[124723] = 1;
	v->a[124724] = anon_sym_DOLLAR;
	v->a[124725] = actions(6490);
	v->a[124726] = 1;
	v->a[124727] = sym__special_character;
	v->a[124728] = actions(6492);
	v->a[124729] = 1;
	v->a[124730] = anon_sym_DQUOTE;
	v->a[124731] = actions(6494);
	v->a[124732] = 1;
	v->a[124733] = aux_sym_number_token1;
	v->a[124734] = actions(6496);
	v->a[124735] = 1;
	v->a[124736] = aux_sym_number_token2;
	v->a[124737] = actions(6498);
	v->a[124738] = 1;
	v->a[124739] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6237(v);
}

void	small_parse_table_6237(t_small_parse_table_array *v)
{
	v->a[124740] = actions(6500);
	v->a[124741] = 1;
	v->a[124742] = anon_sym_DOLLAR_LPAREN;
	v->a[124743] = actions(6502);
	v->a[124744] = 1;
	v->a[124745] = anon_sym_BQUOTE;
	v->a[124746] = actions(6504);
	v->a[124747] = 1;
	v->a[124748] = anon_sym_DOLLAR_BQUOTE;
	v->a[124749] = actions(6508);
	v->a[124750] = 1;
	v->a[124751] = sym_test_operator;
	v->a[124752] = actions(6510);
	v->a[124753] = 1;
	v->a[124754] = sym_extglob_pattern;
	v->a[124755] = actions(6512);
	v->a[124756] = 1;
	v->a[124757] = sym__brace_start;
	v->a[124758] = actions(6574);
	v->a[124759] = 1;
	small_parse_table_6238(v);
}

void	small_parse_table_6238(t_small_parse_table_array *v)
{
	v->a[124760] = anon_sym_esac;
	v->a[124761] = actions(6576);
	v->a[124762] = 1;
	v->a[124763] = aux_sym_heredoc_redirect_token1;
	v->a[124764] = state(6426);
	v->a[124765] = 1;
	v->a[124766] = aux_sym__literal_repeat1;
	v->a[124767] = state(7603);
	v->a[124768] = 1;
	v->a[124769] = sym_last_case_item;
	v->a[124770] = actions(6476);
	v->a[124771] = 2;
	v->a[124772] = anon_sym_LPAREN_LPAREN;
	v->a[124773] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124774] = actions(6506);
	v->a[124775] = 2;
	v->a[124776] = anon_sym_LT_LPAREN;
	v->a[124777] = anon_sym_GT_LPAREN;
	v->a[124778] = state(3440);
	v->a[124779] = 2;
	small_parse_table_6239(v);
}

void	small_parse_table_6239(t_small_parse_table_array *v)
{
	v->a[124780] = sym_case_item;
	v->a[124781] = aux_sym_case_statement_repeat1;
	v->a[124782] = state(6695);
	v->a[124783] = 2;
	v->a[124784] = sym_concatenation;
	v->a[124785] = sym__extglob_blob;
	v->a[124786] = actions(6474);
	v->a[124787] = 3;
	v->a[124788] = sym_raw_string;
	v->a[124789] = sym_ansi_c_string;
	v->a[124790] = sym_word;
	v->a[124791] = actions(6572);
	v->a[124792] = 3;
	v->a[124793] = anon_sym_SEMI;
	v->a[124794] = anon_sym_AMP;
	v->a[124795] = anon_sym_SEMI_SEMI;
	v->a[124796] = state(6303);
	v->a[124797] = 9;
	v->a[124798] = sym_arithmetic_expansion;
	v->a[124799] = sym_brace_expression;
	small_parse_table_6240(v);
}

/* EOF small_parse_table_1247.c */
