/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_737.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3685(t_small_parse_table_array *v)
{
	v->a[73700] = 1;
	v->a[73701] = anon_sym_DOLLAR_BQUOTE;
	v->a[73702] = actions(4358);
	v->a[73703] = 1;
	v->a[73704] = sym_test_operator;
	v->a[73705] = actions(4360);
	v->a[73706] = 1;
	v->a[73707] = sym_extglob_pattern;
	v->a[73708] = actions(4362);
	v->a[73709] = 1;
	v->a[73710] = sym__brace_start;
	v->a[73711] = actions(4414);
	v->a[73712] = 1;
	v->a[73713] = anon_sym_esac;
	v->a[73714] = actions(4418);
	v->a[73715] = 1;
	v->a[73716] = aux_sym_heredoc_redirect_token1;
	v->a[73717] = state(3393);
	v->a[73718] = 1;
	v->a[73719] = aux_sym__literal_repeat1;
	small_parse_table_3686(v);
}

void	small_parse_table_3686(t_small_parse_table_array *v)
{
	v->a[73720] = state(3808);
	v->a[73721] = 1;
	v->a[73722] = sym_last_case_item;
	v->a[73723] = actions(4328);
	v->a[73724] = 2;
	v->a[73725] = sym_raw_string;
	v->a[73726] = sym_word;
	v->a[73727] = state(1751);
	v->a[73728] = 2;
	v->a[73729] = sym_case_item;
	v->a[73730] = aux_sym_case_statement_repeat1;
	v->a[73731] = state(3472);
	v->a[73732] = 2;
	v->a[73733] = sym_concatenation;
	v->a[73734] = sym__extglob_blob;
	v->a[73735] = actions(4416);
	v->a[73736] = 3;
	v->a[73737] = anon_sym_SEMI_SEMI;
	v->a[73738] = anon_sym_AMP;
	v->a[73739] = anon_sym_SEMI;
	small_parse_table_3687(v);
}

void	small_parse_table_3687(t_small_parse_table_array *v)
{
	v->a[73740] = state(3295);
	v->a[73741] = 7;
	v->a[73742] = sym_arithmetic_expansion;
	v->a[73743] = sym_brace_expression;
	v->a[73744] = sym_string;
	v->a[73745] = sym_number;
	v->a[73746] = sym_simple_expansion;
	v->a[73747] = sym_expansion;
	v->a[73748] = sym_command_substitution;
	v->a[73749] = 3;
	v->a[73750] = actions(57);
	v->a[73751] = 1;
	v->a[73752] = sym_comment;
	v->a[73753] = actions(2772);
	v->a[73754] = 13;
	v->a[73755] = anon_sym_PIPE;
	v->a[73756] = anon_sym_LT;
	v->a[73757] = anon_sym_GT;
	v->a[73758] = anon_sym_AMP_GT;
	v->a[73759] = anon_sym_LT_AMP;
	small_parse_table_3688(v);
}

void	small_parse_table_3688(t_small_parse_table_array *v)
{
	v->a[73760] = anon_sym_GT_AMP;
	v->a[73761] = anon_sym_LT_LT;
	v->a[73762] = anon_sym_DOLLAR;
	v->a[73763] = aux_sym_number_token1;
	v->a[73764] = aux_sym_number_token2;
	v->a[73765] = anon_sym_DOLLAR_LPAREN;
	v->a[73766] = anon_sym_BQUOTE;
	v->a[73767] = sym_word;
	v->a[73768] = actions(2774);
	v->a[73769] = 21;
	v->a[73770] = sym_file_descriptor;
	v->a[73771] = sym__concat;
	v->a[73772] = sym_test_operator;
	v->a[73773] = sym__bare_dollar;
	v->a[73774] = sym__brace_start;
	v->a[73775] = anon_sym_PIPE_AMP;
	v->a[73776] = anon_sym_AMP_AMP;
	v->a[73777] = anon_sym_PIPE_PIPE;
	v->a[73778] = anon_sym_GT_GT;
	v->a[73779] = anon_sym_AMP_GT_GT;
	small_parse_table_3689(v);
}

void	small_parse_table_3689(t_small_parse_table_array *v)
{
	v->a[73780] = anon_sym_GT_PIPE;
	v->a[73781] = anon_sym_LT_AMP_DASH;
	v->a[73782] = anon_sym_GT_AMP_DASH;
	v->a[73783] = anon_sym_LT_LT_DASH;
	v->a[73784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73785] = aux_sym_concatenation_token1;
	v->a[73786] = sym__special_character;
	v->a[73787] = anon_sym_DQUOTE;
	v->a[73788] = sym_raw_string;
	v->a[73789] = anon_sym_DOLLAR_LBRACE;
	v->a[73790] = anon_sym_DOLLAR_BQUOTE;
	v->a[73791] = 24;
	v->a[73792] = actions(3);
	v->a[73793] = 1;
	v->a[73794] = sym_comment;
	v->a[73795] = actions(4332);
	v->a[73796] = 1;
	v->a[73797] = anon_sym_LPAREN;
	v->a[73798] = actions(4338);
	v->a[73799] = 1;
	small_parse_table_3690(v);
}

/* EOF small_parse_table_737.c */
