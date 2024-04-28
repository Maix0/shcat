/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2237.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11185(t_small_parse_table_array *v)
{
	v->a[223700] = sym_comment;
	v->a[223701] = actions(3793);
	v->a[223702] = 1;
	v->a[223703] = aux_sym_number_token1;
	v->a[223704] = actions(3795);
	v->a[223705] = 1;
	v->a[223706] = aux_sym_number_token2;
	v->a[223707] = actions(3799);
	v->a[223708] = 1;
	v->a[223709] = anon_sym_DOLLAR_LPAREN;
	v->a[223710] = actions(3809);
	v->a[223711] = 1;
	v->a[223712] = sym__brace_start;
	v->a[223713] = actions(9636);
	v->a[223714] = 1;
	v->a[223715] = anon_sym_DOLLAR_LBRACK;
	v->a[223716] = actions(9640);
	v->a[223717] = 1;
	v->a[223718] = anon_sym_DQUOTE;
	v->a[223719] = actions(9644);
	small_parse_table_11186(v);
}

void	small_parse_table_11186(t_small_parse_table_array *v)
{
	v->a[223720] = 1;
	v->a[223721] = anon_sym_DOLLAR_LBRACE;
	v->a[223722] = actions(9646);
	v->a[223723] = 1;
	v->a[223724] = anon_sym_BQUOTE;
	v->a[223725] = actions(9648);
	v->a[223726] = 1;
	v->a[223727] = anon_sym_DOLLAR_BQUOTE;
	v->a[223728] = actions(9872);
	v->a[223729] = 1;
	v->a[223730] = sym_word;
	v->a[223731] = actions(9880);
	v->a[223732] = 1;
	v->a[223733] = sym__comment_word;
	v->a[223734] = actions(10664);
	v->a[223735] = 1;
	v->a[223736] = anon_sym_DOLLAR;
	v->a[223737] = actions(9634);
	v->a[223738] = 2;
	v->a[223739] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11187(v);
}

void	small_parse_table_11187(t_small_parse_table_array *v)
{
	v->a[223740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223741] = actions(9650);
	v->a[223742] = 2;
	v->a[223743] = anon_sym_LT_LPAREN;
	v->a[223744] = anon_sym_GT_LPAREN;
	v->a[223745] = actions(9876);
	v->a[223746] = 2;
	v->a[223747] = sym_test_operator;
	v->a[223748] = sym__special_character;
	v->a[223749] = actions(9878);
	v->a[223750] = 3;
	v->a[223751] = sym__bare_dollar;
	v->a[223752] = sym_raw_string;
	v->a[223753] = sym_ansi_c_string;
	v->a[223754] = state(4337);
	v->a[223755] = 9;
	v->a[223756] = sym_arithmetic_expansion;
	v->a[223757] = sym_brace_expression;
	v->a[223758] = sym_string;
	v->a[223759] = sym_translated_string;
	small_parse_table_11188(v);
}

void	small_parse_table_11188(t_small_parse_table_array *v)
{
	v->a[223760] = sym_number;
	v->a[223761] = sym_simple_expansion;
	v->a[223762] = sym_expansion;
	v->a[223763] = sym_command_substitution;
	v->a[223764] = sym_process_substitution;
	v->a[223765] = 21;
	v->a[223766] = actions(71);
	v->a[223767] = 1;
	v->a[223768] = sym_comment;
	v->a[223769] = actions(9364);
	v->a[223770] = 1;
	v->a[223771] = anon_sym_LPAREN;
	v->a[223772] = actions(9366);
	v->a[223773] = 1;
	v->a[223774] = anon_sym_BANG;
	v->a[223775] = actions(9372);
	v->a[223776] = 1;
	v->a[223777] = anon_sym_TILDE;
	v->a[223778] = actions(9374);
	v->a[223779] = 1;
	small_parse_table_11189(v);
}

void	small_parse_table_11189(t_small_parse_table_array *v)
{
	v->a[223780] = anon_sym_DOLLAR;
	v->a[223781] = actions(9376);
	v->a[223782] = 1;
	v->a[223783] = anon_sym_DQUOTE;
	v->a[223784] = actions(9378);
	v->a[223785] = 1;
	v->a[223786] = aux_sym_number_token1;
	v->a[223787] = actions(9380);
	v->a[223788] = 1;
	v->a[223789] = aux_sym_number_token2;
	v->a[223790] = actions(9382);
	v->a[223791] = 1;
	v->a[223792] = anon_sym_DOLLAR_LBRACE;
	v->a[223793] = actions(9384);
	v->a[223794] = 1;
	v->a[223795] = anon_sym_DOLLAR_LPAREN;
	v->a[223796] = actions(9386);
	v->a[223797] = 1;
	v->a[223798] = anon_sym_BQUOTE;
	v->a[223799] = actions(9388);
	small_parse_table_11190(v);
}

/* EOF small_parse_table_2237.c */
