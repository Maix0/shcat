/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2787.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13935(t_small_parse_table_array *v)
{
	v->a[278700] = 1;
	v->a[278701] = aux_sym__c_word_token1;
	v->a[278702] = state(3285);
	v->a[278703] = 1;
	v->a[278704] = sym__c_postfix_expression;
	v->a[278705] = state(3286);
	v->a[278706] = 1;
	v->a[278707] = sym__c_binary_expression;
	v->a[278708] = state(3290);
	v->a[278709] = 1;
	v->a[278710] = sym__c_unary_expression;
	v->a[278711] = actions(11806);
	v->a[278712] = 2;
	v->a[278713] = anon_sym_PLUS_PLUS;
	v->a[278714] = anon_sym_DASH_DASH;
	v->a[278715] = state(3217);
	v->a[278716] = 7;
	v->a[278717] = sym__c_expression_not_assignment;
	v->a[278718] = sym__c_parenthesized_expression;
	v->a[278719] = sym_string;
	small_parse_table_13936(v);
}

void	small_parse_table_13936(t_small_parse_table_array *v)
{
	v->a[278720] = sym_number;
	v->a[278721] = sym_simple_expansion;
	v->a[278722] = sym_expansion;
	v->a[278723] = sym_command_substitution;
	v->a[278724] = 4;
	v->a[278725] = actions(71);
	v->a[278726] = 1;
	v->a[278727] = sym_comment;
	v->a[278728] = actions(12360);
	v->a[278729] = 1;
	v->a[278730] = anon_sym_esac;
	v->a[278731] = actions(12356);
	v->a[278732] = 6;
	v->a[278733] = anon_sym_LPAREN;
	v->a[278734] = anon_sym_DOLLAR;
	v->a[278735] = aux_sym_number_token1;
	v->a[278736] = aux_sym_number_token2;
	v->a[278737] = anon_sym_DOLLAR_LPAREN;
	v->a[278738] = sym_word;
	v->a[278739] = actions(12358);
	small_parse_table_13937(v);
}

void	small_parse_table_13937(t_small_parse_table_array *v)
{
	v->a[278740] = 15;
	v->a[278741] = sym_test_operator;
	v->a[278742] = sym_extglob_pattern;
	v->a[278743] = sym__brace_start;
	v->a[278744] = anon_sym_LPAREN_LPAREN;
	v->a[278745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[278746] = anon_sym_DOLLAR_LBRACK;
	v->a[278747] = sym__special_character;
	v->a[278748] = anon_sym_DQUOTE;
	v->a[278749] = sym_raw_string;
	v->a[278750] = sym_ansi_c_string;
	v->a[278751] = anon_sym_DOLLAR_LBRACE;
	v->a[278752] = anon_sym_BQUOTE;
	v->a[278753] = anon_sym_DOLLAR_BQUOTE;
	v->a[278754] = anon_sym_LT_LPAREN;
	v->a[278755] = anon_sym_GT_LPAREN;
	v->a[278756] = 5;
	v->a[278757] = actions(3);
	v->a[278758] = 1;
	v->a[278759] = sym_comment;
	small_parse_table_13938(v);
}

void	small_parse_table_13938(t_small_parse_table_array *v)
{
	v->a[278760] = state(5216);
	v->a[278761] = 1;
	v->a[278762] = aux_sym_pipeline_repeat1;
	v->a[278763] = actions(11748);
	v->a[278764] = 2;
	v->a[278765] = sym_file_descriptor;
	v->a[278766] = aux_sym_heredoc_redirect_token1;
	v->a[278767] = actions(12571);
	v->a[278768] = 2;
	v->a[278769] = anon_sym_PIPE;
	v->a[278770] = anon_sym_PIPE_AMP;
	v->a[278771] = actions(11743);
	v->a[278772] = 17;
	v->a[278773] = anon_sym_SEMI;
	v->a[278774] = anon_sym_PIPE_PIPE;
	v->a[278775] = anon_sym_AMP_AMP;
	v->a[278776] = anon_sym_AMP;
	v->a[278777] = anon_sym_LT;
	v->a[278778] = anon_sym_GT;
	v->a[278779] = anon_sym_LT_LT;
	small_parse_table_13939(v);
}

void	small_parse_table_13939(t_small_parse_table_array *v)
{
	v->a[278780] = anon_sym_GT_GT;
	v->a[278781] = anon_sym_SEMI_SEMI;
	v->a[278782] = anon_sym_AMP_GT;
	v->a[278783] = anon_sym_AMP_GT_GT;
	v->a[278784] = anon_sym_LT_AMP;
	v->a[278785] = anon_sym_GT_AMP;
	v->a[278786] = anon_sym_GT_PIPE;
	v->a[278787] = anon_sym_LT_AMP_DASH;
	v->a[278788] = anon_sym_GT_AMP_DASH;
	v->a[278789] = anon_sym_LT_LT_DASH;
	v->a[278790] = 16;
	v->a[278791] = actions(71);
	v->a[278792] = 1;
	v->a[278793] = sym_comment;
	v->a[278794] = actions(11808);
	v->a[278795] = 1;
	v->a[278796] = anon_sym_LPAREN;
	v->a[278797] = actions(11812);
	v->a[278798] = 1;
	v->a[278799] = anon_sym_DOLLAR;
	small_parse_table_13940(v);
}

/* EOF small_parse_table_2787.c */
