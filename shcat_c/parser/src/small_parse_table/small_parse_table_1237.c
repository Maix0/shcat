/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1237.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6185(t_small_parse_table_array *v)
{
	v->a[123700] = sym_brace_expression;
	v->a[123701] = sym_string;
	v->a[123702] = sym_translated_string;
	v->a[123703] = sym_number;
	v->a[123704] = sym_simple_expansion;
	v->a[123705] = sym_expansion;
	v->a[123706] = sym_command_substitution;
	v->a[123707] = sym_process_substitution;
	v->a[123708] = 26;
	v->a[123709] = actions(3);
	v->a[123710] = 1;
	v->a[123711] = sym_comment;
	v->a[123712] = actions(6480);
	v->a[123713] = 1;
	v->a[123714] = anon_sym_LPAREN;
	v->a[123715] = actions(6486);
	v->a[123716] = 1;
	v->a[123717] = anon_sym_DOLLAR_LBRACK;
	v->a[123718] = actions(6488);
	v->a[123719] = 1;
	small_parse_table_6186(v);
}

void	small_parse_table_6186(t_small_parse_table_array *v)
{
	v->a[123720] = anon_sym_DOLLAR;
	v->a[123721] = actions(6490);
	v->a[123722] = 1;
	v->a[123723] = sym__special_character;
	v->a[123724] = actions(6492);
	v->a[123725] = 1;
	v->a[123726] = anon_sym_DQUOTE;
	v->a[123727] = actions(6494);
	v->a[123728] = 1;
	v->a[123729] = aux_sym_number_token1;
	v->a[123730] = actions(6496);
	v->a[123731] = 1;
	v->a[123732] = aux_sym_number_token2;
	v->a[123733] = actions(6498);
	v->a[123734] = 1;
	v->a[123735] = anon_sym_DOLLAR_LBRACE;
	v->a[123736] = actions(6500);
	v->a[123737] = 1;
	v->a[123738] = anon_sym_DOLLAR_LPAREN;
	v->a[123739] = actions(6502);
	small_parse_table_6187(v);
}

void	small_parse_table_6187(t_small_parse_table_array *v)
{
	v->a[123740] = 1;
	v->a[123741] = anon_sym_BQUOTE;
	v->a[123742] = actions(6504);
	v->a[123743] = 1;
	v->a[123744] = anon_sym_DOLLAR_BQUOTE;
	v->a[123745] = actions(6508);
	v->a[123746] = 1;
	v->a[123747] = sym_test_operator;
	v->a[123748] = actions(6510);
	v->a[123749] = 1;
	v->a[123750] = sym_extglob_pattern;
	v->a[123751] = actions(6512);
	v->a[123752] = 1;
	v->a[123753] = sym__brace_start;
	v->a[123754] = actions(6545);
	v->a[123755] = 1;
	v->a[123756] = anon_sym_esac;
	v->a[123757] = actions(6547);
	v->a[123758] = 1;
	v->a[123759] = aux_sym_heredoc_redirect_token1;
	small_parse_table_6188(v);
}

void	small_parse_table_6188(t_small_parse_table_array *v)
{
	v->a[123760] = state(6426);
	v->a[123761] = 1;
	v->a[123762] = aux_sym__literal_repeat1;
	v->a[123763] = state(7134);
	v->a[123764] = 1;
	v->a[123765] = sym_last_case_item;
	v->a[123766] = actions(6476);
	v->a[123767] = 2;
	v->a[123768] = anon_sym_LPAREN_LPAREN;
	v->a[123769] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123770] = actions(6506);
	v->a[123771] = 2;
	v->a[123772] = anon_sym_LT_LPAREN;
	v->a[123773] = anon_sym_GT_LPAREN;
	v->a[123774] = state(3451);
	v->a[123775] = 2;
	v->a[123776] = sym_case_item;
	v->a[123777] = aux_sym_case_statement_repeat1;
	v->a[123778] = state(6695);
	v->a[123779] = 2;
	small_parse_table_6189(v);
}

void	small_parse_table_6189(t_small_parse_table_array *v)
{
	v->a[123780] = sym_concatenation;
	v->a[123781] = sym__extglob_blob;
	v->a[123782] = actions(6474);
	v->a[123783] = 3;
	v->a[123784] = sym_raw_string;
	v->a[123785] = sym_ansi_c_string;
	v->a[123786] = sym_word;
	v->a[123787] = actions(6543);
	v->a[123788] = 3;
	v->a[123789] = anon_sym_SEMI;
	v->a[123790] = anon_sym_AMP;
	v->a[123791] = anon_sym_SEMI_SEMI;
	v->a[123792] = state(6303);
	v->a[123793] = 9;
	v->a[123794] = sym_arithmetic_expansion;
	v->a[123795] = sym_brace_expression;
	v->a[123796] = sym_string;
	v->a[123797] = sym_translated_string;
	v->a[123798] = sym_number;
	v->a[123799] = sym_simple_expansion;
	small_parse_table_6190(v);
}

/* EOF small_parse_table_1237.c */
