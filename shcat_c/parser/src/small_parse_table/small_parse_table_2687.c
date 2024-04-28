/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2687.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13435(t_small_parse_table_array *v)
{
	v->a[268700] = aux_sym_number_token1;
	v->a[268701] = actions(12241);
	v->a[268702] = 1;
	v->a[268703] = anon_sym_DOLLAR_LBRACE;
	v->a[268704] = actions(12243);
	v->a[268705] = 1;
	v->a[268706] = anon_sym_DOLLAR_LPAREN;
	v->a[268707] = actions(12245);
	v->a[268708] = 1;
	v->a[268709] = anon_sym_BQUOTE;
	v->a[268710] = actions(12247);
	v->a[268711] = 1;
	v->a[268712] = anon_sym_DOLLAR_BQUOTE;
	v->a[268713] = state(3113);
	v->a[268714] = 1;
	v->a[268715] = sym__c_postfix_expression;
	v->a[268716] = state(3116);
	v->a[268717] = 1;
	v->a[268718] = sym__c_binary_expression;
	v->a[268719] = state(3118);
	small_parse_table_13436(v);
}

void	small_parse_table_13436(t_small_parse_table_array *v)
{
	v->a[268720] = 1;
	v->a[268721] = sym__c_unary_expression;
	v->a[268722] = state(6493);
	v->a[268723] = 1;
	v->a[268724] = sym__c_variable_assignment;
	v->a[268725] = state(6531);
	v->a[268726] = 1;
	v->a[268727] = sym__c_expression;
	v->a[268728] = actions(12231);
	v->a[268729] = 2;
	v->a[268730] = anon_sym_PLUS_PLUS;
	v->a[268731] = anon_sym_DASH_DASH;
	v->a[268732] = state(3119);
	v->a[268733] = 7;
	v->a[268734] = sym__c_expression_not_assignment;
	v->a[268735] = sym__c_parenthesized_expression;
	v->a[268736] = sym_string;
	v->a[268737] = sym_number;
	v->a[268738] = sym_simple_expansion;
	v->a[268739] = sym_expansion;
	small_parse_table_13437(v);
}

void	small_parse_table_13437(t_small_parse_table_array *v)
{
	v->a[268740] = sym_command_substitution;
	v->a[268741] = 3;
	v->a[268742] = actions(3);
	v->a[268743] = 1;
	v->a[268744] = sym_comment;
	v->a[268745] = actions(12225);
	v->a[268746] = 3;
	v->a[268747] = sym_file_descriptor;
	v->a[268748] = ts_builtin_sym_end;
	v->a[268749] = aux_sym_heredoc_redirect_token1;
	v->a[268750] = actions(12223);
	v->a[268751] = 21;
	v->a[268752] = anon_sym_SEMI;
	v->a[268753] = anon_sym_PIPE_PIPE;
	v->a[268754] = anon_sym_AMP_AMP;
	v->a[268755] = anon_sym_PIPE;
	v->a[268756] = anon_sym_AMP;
	v->a[268757] = anon_sym_LT;
	v->a[268758] = anon_sym_GT;
	v->a[268759] = anon_sym_LT_LT;
	small_parse_table_13438(v);
}

void	small_parse_table_13438(t_small_parse_table_array *v)
{
	v->a[268760] = anon_sym_GT_GT;
	v->a[268761] = anon_sym_RPAREN;
	v->a[268762] = anon_sym_SEMI_SEMI;
	v->a[268763] = anon_sym_PIPE_AMP;
	v->a[268764] = anon_sym_AMP_GT;
	v->a[268765] = anon_sym_AMP_GT_GT;
	v->a[268766] = anon_sym_LT_AMP;
	v->a[268767] = anon_sym_GT_AMP;
	v->a[268768] = anon_sym_GT_PIPE;
	v->a[268769] = anon_sym_LT_AMP_DASH;
	v->a[268770] = anon_sym_GT_AMP_DASH;
	v->a[268771] = anon_sym_LT_LT_DASH;
	v->a[268772] = anon_sym_BQUOTE;
	v->a[268773] = 3;
	v->a[268774] = actions(3);
	v->a[268775] = 1;
	v->a[268776] = sym_comment;
	v->a[268777] = actions(12225);
	v->a[268778] = 2;
	v->a[268779] = sym_file_descriptor;
	small_parse_table_13439(v);
}

void	small_parse_table_13439(t_small_parse_table_array *v)
{
	v->a[268780] = aux_sym_heredoc_redirect_token1;
	v->a[268781] = actions(12223);
	v->a[268782] = 22;
	v->a[268783] = anon_sym_SEMI;
	v->a[268784] = anon_sym_PIPE_PIPE;
	v->a[268785] = anon_sym_AMP_AMP;
	v->a[268786] = anon_sym_PIPE;
	v->a[268787] = anon_sym_AMP;
	v->a[268788] = anon_sym_LT;
	v->a[268789] = anon_sym_GT;
	v->a[268790] = anon_sym_LT_LT;
	v->a[268791] = anon_sym_GT_GT;
	v->a[268792] = anon_sym_esac;
	v->a[268793] = anon_sym_SEMI_SEMI;
	v->a[268794] = anon_sym_SEMI_AMP;
	v->a[268795] = anon_sym_SEMI_SEMI_AMP;
	v->a[268796] = anon_sym_PIPE_AMP;
	v->a[268797] = anon_sym_AMP_GT;
	v->a[268798] = anon_sym_AMP_GT_GT;
	v->a[268799] = anon_sym_LT_AMP;
	small_parse_table_13440(v);
}

/* EOF small_parse_table_2687.c */
