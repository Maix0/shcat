/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_187.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_935(t_small_parse_table_array *v)
{
	v->a[18700] = sym_word;
	v->a[18701] = 21;
	v->a[18702] = actions(3);
	v->a[18703] = 1;
	v->a[18704] = sym_comment;
	v->a[18705] = actions(3183);
	v->a[18706] = 1;
	v->a[18707] = anon_sym_DOLLAR_LBRACK;
	v->a[18708] = actions(3185);
	v->a[18709] = 1;
	v->a[18710] = anon_sym_DOLLAR;
	v->a[18711] = actions(3189);
	v->a[18712] = 1;
	v->a[18713] = anon_sym_DQUOTE;
	v->a[18714] = actions(3191);
	v->a[18715] = 1;
	v->a[18716] = aux_sym_number_token1;
	v->a[18717] = actions(3193);
	v->a[18718] = 1;
	v->a[18719] = aux_sym_number_token2;
	small_parse_table_936(v);
}

void	small_parse_table_936(t_small_parse_table_array *v)
{
	v->a[18720] = actions(3195);
	v->a[18721] = 1;
	v->a[18722] = anon_sym_DOLLAR_LBRACE;
	v->a[18723] = actions(3197);
	v->a[18724] = 1;
	v->a[18725] = anon_sym_DOLLAR_LPAREN;
	v->a[18726] = actions(3201);
	v->a[18727] = 1;
	v->a[18728] = anon_sym_DOLLAR_BQUOTE;
	v->a[18729] = actions(3209);
	v->a[18730] = 1;
	v->a[18731] = sym__brace_start;
	v->a[18732] = actions(3657);
	v->a[18733] = 1;
	v->a[18734] = sym__special_character;
	v->a[18735] = actions(3661);
	v->a[18736] = 1;
	v->a[18737] = sym_test_operator;
	v->a[18738] = actions(3711);
	v->a[18739] = 1;
	small_parse_table_937(v);
}

void	small_parse_table_937(t_small_parse_table_array *v)
{
	v->a[18740] = aux_sym__simple_variable_name_token1;
	v->a[18741] = state(1966);
	v->a[18742] = 1;
	v->a[18743] = aux_sym__literal_repeat1;
	v->a[18744] = actions(2564);
	v->a[18745] = 2;
	v->a[18746] = sym_file_descriptor;
	v->a[18747] = aux_sym_heredoc_redirect_token1;
	v->a[18748] = actions(3181);
	v->a[18749] = 2;
	v->a[18750] = anon_sym_LPAREN_LPAREN;
	v->a[18751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18752] = actions(3203);
	v->a[18753] = 2;
	v->a[18754] = anon_sym_LT_LPAREN;
	v->a[18755] = anon_sym_GT_LPAREN;
	v->a[18756] = state(731);
	v->a[18757] = 2;
	v->a[18758] = sym_concatenation;
	v->a[18759] = aux_sym_unset_command_repeat1;
	small_parse_table_938(v);
}

void	small_parse_table_938(t_small_parse_table_array *v)
{
	v->a[18760] = actions(3655);
	v->a[18761] = 3;
	v->a[18762] = sym_raw_string;
	v->a[18763] = sym_ansi_c_string;
	v->a[18764] = sym_word;
	v->a[18765] = state(1902);
	v->a[18766] = 9;
	v->a[18767] = sym_arithmetic_expansion;
	v->a[18768] = sym_brace_expression;
	v->a[18769] = sym_string;
	v->a[18770] = sym_translated_string;
	v->a[18771] = sym_number;
	v->a[18772] = sym_simple_expansion;
	v->a[18773] = sym_expansion;
	v->a[18774] = sym_command_substitution;
	v->a[18775] = sym_process_substitution;
	v->a[18776] = actions(2562);
	v->a[18777] = 20;
	v->a[18778] = anon_sym_SEMI;
	v->a[18779] = anon_sym_PIPE_PIPE;
	small_parse_table_939(v);
}

void	small_parse_table_939(t_small_parse_table_array *v)
{
	v->a[18780] = anon_sym_AMP_AMP;
	v->a[18781] = anon_sym_PIPE;
	v->a[18782] = anon_sym_AMP;
	v->a[18783] = anon_sym_LT;
	v->a[18784] = anon_sym_GT;
	v->a[18785] = anon_sym_LT_LT;
	v->a[18786] = anon_sym_GT_GT;
	v->a[18787] = anon_sym_SEMI_SEMI;
	v->a[18788] = anon_sym_PIPE_AMP;
	v->a[18789] = anon_sym_AMP_GT;
	v->a[18790] = anon_sym_AMP_GT_GT;
	v->a[18791] = anon_sym_LT_AMP;
	v->a[18792] = anon_sym_GT_AMP;
	v->a[18793] = anon_sym_GT_PIPE;
	v->a[18794] = anon_sym_LT_AMP_DASH;
	v->a[18795] = anon_sym_GT_AMP_DASH;
	v->a[18796] = anon_sym_LT_LT_DASH;
	v->a[18797] = anon_sym_BQUOTE;
	v->a[18798] = 27;
	v->a[18799] = actions(71);
	small_parse_table_940(v);
}

/* EOF small_parse_table_187.c */
