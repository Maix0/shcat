/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2795.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13975(t_small_parse_table_array *v)
{
	v->a[279500] = sym__c_parenthesized_expression;
	v->a[279501] = sym_string;
	v->a[279502] = sym_number;
	v->a[279503] = sym_simple_expansion;
	v->a[279504] = sym_expansion;
	v->a[279505] = sym_command_substitution;
	v->a[279506] = 16;
	v->a[279507] = actions(71);
	v->a[279508] = 1;
	v->a[279509] = sym_comment;
	v->a[279510] = actions(11808);
	v->a[279511] = 1;
	v->a[279512] = anon_sym_LPAREN;
	v->a[279513] = actions(11812);
	v->a[279514] = 1;
	v->a[279515] = anon_sym_DOLLAR;
	v->a[279516] = actions(11814);
	v->a[279517] = 1;
	v->a[279518] = anon_sym_DQUOTE;
	v->a[279519] = actions(11816);
	small_parse_table_13976(v);
}

void	small_parse_table_13976(t_small_parse_table_array *v)
{
	v->a[279520] = 1;
	v->a[279521] = aux_sym_number_token1;
	v->a[279522] = actions(11818);
	v->a[279523] = 1;
	v->a[279524] = aux_sym_number_token2;
	v->a[279525] = actions(11820);
	v->a[279526] = 1;
	v->a[279527] = anon_sym_DOLLAR_LBRACE;
	v->a[279528] = actions(11822);
	v->a[279529] = 1;
	v->a[279530] = anon_sym_DOLLAR_LPAREN;
	v->a[279531] = actions(11824);
	v->a[279532] = 1;
	v->a[279533] = anon_sym_BQUOTE;
	v->a[279534] = actions(11826);
	v->a[279535] = 1;
	v->a[279536] = anon_sym_DOLLAR_BQUOTE;
	v->a[279537] = actions(12600);
	v->a[279538] = 1;
	v->a[279539] = aux_sym__c_word_token1;
	small_parse_table_13977(v);
}

void	small_parse_table_13977(t_small_parse_table_array *v)
{
	v->a[279540] = state(3285);
	v->a[279541] = 1;
	v->a[279542] = sym__c_postfix_expression;
	v->a[279543] = state(3286);
	v->a[279544] = 1;
	v->a[279545] = sym__c_binary_expression;
	v->a[279546] = state(3290);
	v->a[279547] = 1;
	v->a[279548] = sym__c_unary_expression;
	v->a[279549] = actions(11806);
	v->a[279550] = 2;
	v->a[279551] = anon_sym_PLUS_PLUS;
	v->a[279552] = anon_sym_DASH_DASH;
	v->a[279553] = state(3196);
	v->a[279554] = 7;
	v->a[279555] = sym__c_expression_not_assignment;
	v->a[279556] = sym__c_parenthesized_expression;
	v->a[279557] = sym_string;
	v->a[279558] = sym_number;
	v->a[279559] = sym_simple_expansion;
	small_parse_table_13978(v);
}

void	small_parse_table_13978(t_small_parse_table_array *v)
{
	v->a[279560] = sym_expansion;
	v->a[279561] = sym_command_substitution;
	v->a[279562] = 19;
	v->a[279563] = actions(3);
	v->a[279564] = 1;
	v->a[279565] = sym_comment;
	v->a[279566] = actions(7793);
	v->a[279567] = 1;
	v->a[279568] = aux_sym_number_token1;
	v->a[279569] = actions(7795);
	v->a[279570] = 1;
	v->a[279571] = aux_sym_number_token2;
	v->a[279572] = actions(12543);
	v->a[279573] = 1;
	v->a[279574] = anon_sym_LPAREN;
	v->a[279575] = actions(12547);
	v->a[279576] = 1;
	v->a[279577] = anon_sym_DOLLAR_LBRACK;
	v->a[279578] = actions(12549);
	v->a[279579] = 1;
	small_parse_table_13979(v);
}

void	small_parse_table_13979(t_small_parse_table_array *v)
{
	v->a[279580] = anon_sym_DOLLAR;
	v->a[279581] = actions(12551);
	v->a[279582] = 1;
	v->a[279583] = anon_sym_DOLLAR_LBRACE;
	v->a[279584] = actions(12555);
	v->a[279585] = 1;
	v->a[279586] = anon_sym_DOLLAR_LPAREN;
	v->a[279587] = actions(12557);
	v->a[279588] = 1;
	v->a[279589] = anon_sym_BQUOTE;
	v->a[279590] = actions(12559);
	v->a[279591] = 1;
	v->a[279592] = anon_sym_DOLLAR_BQUOTE;
	v->a[279593] = actions(12602);
	v->a[279594] = 1;
	v->a[279595] = aux_sym_heredoc_redirect_token1;
	v->a[279596] = actions(12604);
	v->a[279597] = 1;
	v->a[279598] = anon_sym_RBRACE3;
	v->a[279599] = actions(12606);
	small_parse_table_13980(v);
}

/* EOF small_parse_table_2795.c */
