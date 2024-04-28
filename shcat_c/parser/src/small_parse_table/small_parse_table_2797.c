/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2797.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13985(t_small_parse_table_array *v)
{
	v->a[279700] = 1;
	v->a[279701] = anon_sym_DOLLAR_LBRACE;
	v->a[279702] = actions(12243);
	v->a[279703] = 1;
	v->a[279704] = anon_sym_DOLLAR_LPAREN;
	v->a[279705] = actions(12245);
	v->a[279706] = 1;
	v->a[279707] = anon_sym_BQUOTE;
	v->a[279708] = actions(12247);
	v->a[279709] = 1;
	v->a[279710] = anon_sym_DOLLAR_BQUOTE;
	v->a[279711] = actions(12610);
	v->a[279712] = 1;
	v->a[279713] = aux_sym__c_word_token1;
	v->a[279714] = state(3113);
	v->a[279715] = 1;
	v->a[279716] = sym__c_postfix_expression;
	v->a[279717] = state(3116);
	v->a[279718] = 1;
	v->a[279719] = sym__c_binary_expression;
	small_parse_table_13986(v);
}

void	small_parse_table_13986(t_small_parse_table_array *v)
{
	v->a[279720] = state(3118);
	v->a[279721] = 1;
	v->a[279722] = sym__c_unary_expression;
	v->a[279723] = actions(12231);
	v->a[279724] = 2;
	v->a[279725] = anon_sym_PLUS_PLUS;
	v->a[279726] = anon_sym_DASH_DASH;
	v->a[279727] = state(3005);
	v->a[279728] = 7;
	v->a[279729] = sym__c_expression_not_assignment;
	v->a[279730] = sym__c_parenthesized_expression;
	v->a[279731] = sym_string;
	v->a[279732] = sym_number;
	v->a[279733] = sym_simple_expansion;
	v->a[279734] = sym_expansion;
	v->a[279735] = sym_command_substitution;
	v->a[279736] = 16;
	v->a[279737] = actions(71);
	v->a[279738] = 1;
	v->a[279739] = sym_comment;
	small_parse_table_13987(v);
}

void	small_parse_table_13987(t_small_parse_table_array *v)
{
	v->a[279740] = actions(11256);
	v->a[279741] = 1;
	v->a[279742] = anon_sym_DOLLAR;
	v->a[279743] = actions(11262);
	v->a[279744] = 1;
	v->a[279745] = aux_sym_number_token2;
	v->a[279746] = actions(12233);
	v->a[279747] = 1;
	v->a[279748] = anon_sym_LPAREN;
	v->a[279749] = actions(12237);
	v->a[279750] = 1;
	v->a[279751] = anon_sym_DQUOTE;
	v->a[279752] = actions(12239);
	v->a[279753] = 1;
	v->a[279754] = aux_sym_number_token1;
	v->a[279755] = actions(12241);
	v->a[279756] = 1;
	v->a[279757] = anon_sym_DOLLAR_LBRACE;
	v->a[279758] = actions(12243);
	v->a[279759] = 1;
	small_parse_table_13988(v);
}

void	small_parse_table_13988(t_small_parse_table_array *v)
{
	v->a[279760] = anon_sym_DOLLAR_LPAREN;
	v->a[279761] = actions(12245);
	v->a[279762] = 1;
	v->a[279763] = anon_sym_BQUOTE;
	v->a[279764] = actions(12247);
	v->a[279765] = 1;
	v->a[279766] = anon_sym_DOLLAR_BQUOTE;
	v->a[279767] = actions(12612);
	v->a[279768] = 1;
	v->a[279769] = aux_sym__c_word_token1;
	v->a[279770] = state(3113);
	v->a[279771] = 1;
	v->a[279772] = sym__c_postfix_expression;
	v->a[279773] = state(3116);
	v->a[279774] = 1;
	v->a[279775] = sym__c_binary_expression;
	v->a[279776] = state(3118);
	v->a[279777] = 1;
	v->a[279778] = sym__c_unary_expression;
	v->a[279779] = actions(12231);
	small_parse_table_13989(v);
}

void	small_parse_table_13989(t_small_parse_table_array *v)
{
	v->a[279780] = 2;
	v->a[279781] = anon_sym_PLUS_PLUS;
	v->a[279782] = anon_sym_DASH_DASH;
	v->a[279783] = state(2999);
	v->a[279784] = 7;
	v->a[279785] = sym__c_expression_not_assignment;
	v->a[279786] = sym__c_parenthesized_expression;
	v->a[279787] = sym_string;
	v->a[279788] = sym_number;
	v->a[279789] = sym_simple_expansion;
	v->a[279790] = sym_expansion;
	v->a[279791] = sym_command_substitution;
	v->a[279792] = 16;
	v->a[279793] = actions(71);
	v->a[279794] = 1;
	v->a[279795] = sym_comment;
	v->a[279796] = actions(11256);
	v->a[279797] = 1;
	v->a[279798] = anon_sym_DOLLAR;
	v->a[279799] = actions(11262);
	small_parse_table_13990(v);
}

/* EOF small_parse_table_2797.c */
