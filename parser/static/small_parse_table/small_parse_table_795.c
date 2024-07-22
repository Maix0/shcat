/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_795.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3975(t_small_parse_table_array *v)
{
	v->a[79500] = actions(3509);
	v->a[79501] = 5;
	v->a[79502] = anon_sym_GT_GT;
	v->a[79503] = anon_sym_LT_AMP;
	v->a[79504] = anon_sym_GT_AMP;
	v->a[79505] = anon_sym_GT_PIPE;
	v->a[79506] = anon_sym_LT_GT;
	v->a[79507] = 3;
	v->a[79508] = actions(3);
	v->a[79509] = 1;
	v->a[79510] = sym_comment;
	v->a[79511] = actions(694);
	v->a[79512] = 2;
	v->a[79513] = sym_regex;
	v->a[79514] = aux_sym__expansion_regex_token1;
	v->a[79515] = actions(692);
	v->a[79516] = 4;
	v->a[79517] = anon_sym_RPAREN;
	v->a[79518] = anon_sym_RBRACE;
	v->a[79519] = anon_sym_DQUOTE;
	small_parse_table_3976(v);
}

void	small_parse_table_3976(t_small_parse_table_array *v)
{
	v->a[79520] = sym_raw_string;
	v->a[79521] = 6;
	v->a[79522] = actions(501);
	v->a[79523] = 1;
	v->a[79524] = sym_comment;
	v->a[79525] = actions(3596);
	v->a[79526] = 1;
	v->a[79527] = anon_sym_PIPE;
	v->a[79528] = actions(3598);
	v->a[79529] = 1;
	v->a[79530] = anon_sym_RPAREN;
	v->a[79531] = state(1817);
	v->a[79532] = 1;
	v->a[79533] = aux_sym_concatenation_repeat1;
	v->a[79534] = state(1886);
	v->a[79535] = 1;
	v->a[79536] = aux_sym__case_item_last_repeat1;
	v->a[79537] = actions(3600);
	v->a[79538] = 2;
	v->a[79539] = sym__concat;
	small_parse_table_3977(v);
}

void	small_parse_table_3977(t_small_parse_table_array *v)
{
	v->a[79540] = aux_sym_concatenation_token1;
	v->a[79541] = 6;
	v->a[79542] = actions(501);
	v->a[79543] = 1;
	v->a[79544] = sym_comment;
	v->a[79545] = actions(3596);
	v->a[79546] = 1;
	v->a[79547] = anon_sym_PIPE;
	v->a[79548] = actions(3602);
	v->a[79549] = 1;
	v->a[79550] = anon_sym_RPAREN;
	v->a[79551] = state(1817);
	v->a[79552] = 1;
	v->a[79553] = aux_sym_concatenation_repeat1;
	v->a[79554] = state(1884);
	v->a[79555] = 1;
	v->a[79556] = aux_sym__case_item_last_repeat1;
	v->a[79557] = actions(3600);
	v->a[79558] = 2;
	v->a[79559] = sym__concat;
	small_parse_table_3978(v);
}

void	small_parse_table_3978(t_small_parse_table_array *v)
{
	v->a[79560] = aux_sym_concatenation_token1;
	v->a[79561] = 6;
	v->a[79562] = actions(501);
	v->a[79563] = 1;
	v->a[79564] = sym_comment;
	v->a[79565] = actions(3604);
	v->a[79566] = 1;
	v->a[79567] = anon_sym_fi;
	v->a[79568] = actions(3606);
	v->a[79569] = 1;
	v->a[79570] = anon_sym_elif;
	v->a[79571] = actions(3608);
	v->a[79572] = 1;
	v->a[79573] = anon_sym_else;
	v->a[79574] = state(1958);
	v->a[79575] = 1;
	v->a[79576] = sym_else_clause;
	v->a[79577] = state(1811);
	v->a[79578] = 2;
	v->a[79579] = sym_elif_clause;
	small_parse_table_3979(v);
}

void	small_parse_table_3979(t_small_parse_table_array *v)
{
	v->a[79580] = aux_sym_if_statement_repeat1;
	v->a[79581] = 3;
	v->a[79582] = actions(501);
	v->a[79583] = 1;
	v->a[79584] = sym_comment;
	v->a[79585] = actions(537);
	v->a[79586] = 1;
	v->a[79587] = anon_sym_DOLLAR;
	v->a[79588] = actions(539);
	v->a[79589] = 5;
	v->a[79590] = sym_heredoc_content;
	v->a[79591] = sym_heredoc_end;
	v->a[79592] = anon_sym_DOLLAR_LBRACE;
	v->a[79593] = anon_sym_DOLLAR_LPAREN;
	v->a[79594] = anon_sym_BQUOTE;
	v->a[79595] = 6;
	v->a[79596] = actions(501);
	v->a[79597] = 1;
	v->a[79598] = sym_comment;
	v->a[79599] = actions(3606);
	small_parse_table_3980(v);
}

/* EOF small_parse_table_795.c */
