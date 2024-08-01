/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_569.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2845(t_small_parse_table_array *v)
{
	v->a[56900] = aux_sym_heredoc_redirect_token1;
	v->a[56901] = actions(1091);
	v->a[56902] = 4;
	v->a[56903] = anon_sym_in;
	v->a[56904] = anon_sym_SEMI_SEMI;
	v->a[56905] = aux_sym_concatenation_token1;
	v->a[56906] = anon_sym_SEMI;
	v->a[56907] = 3;
	v->a[56908] = actions(1052);
	v->a[56909] = 1;
	v->a[56910] = anon_sym_DOLLAR;
	v->a[56911] = actions(1436);
	v->a[56912] = 1;
	v->a[56913] = sym_comment;
	v->a[56914] = actions(1050);
	v->a[56915] = 5;
	v->a[56916] = sym_heredoc_content;
	v->a[56917] = sym_heredoc_end;
	v->a[56918] = anon_sym_DOLLAR_LBRACE;
	v->a[56919] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2846(v);
}

void	small_parse_table_2846(t_small_parse_table_array *v)
{
	v->a[56920] = anon_sym_BQUOTE;
	v->a[56921] = 6;
	v->a[56922] = actions(1436);
	v->a[56923] = 1;
	v->a[56924] = sym_comment;
	v->a[56925] = actions(2930);
	v->a[56926] = 1;
	v->a[56927] = anon_sym_elif;
	v->a[56928] = actions(2932);
	v->a[56929] = 1;
	v->a[56930] = anon_sym_else;
	v->a[56931] = actions(2954);
	v->a[56932] = 1;
	v->a[56933] = anon_sym_fi;
	v->a[56934] = state(1732);
	v->a[56935] = 1;
	v->a[56936] = sym_else_clause;
	v->a[56937] = state(1503);
	v->a[56938] = 2;
	v->a[56939] = sym_elif_clause;
	small_parse_table_2847(v);
}

void	small_parse_table_2847(t_small_parse_table_array *v)
{
	v->a[56940] = aux_sym_if_statement_repeat1;
	v->a[56941] = 6;
	v->a[56942] = actions(1436);
	v->a[56943] = 1;
	v->a[56944] = sym_comment;
	v->a[56945] = actions(2942);
	v->a[56946] = 1;
	v->a[56947] = anon_sym_PIPE;
	v->a[56948] = actions(2956);
	v->a[56949] = 1;
	v->a[56950] = anon_sym_RPAREN;
	v->a[56951] = state(1492);
	v->a[56952] = 1;
	v->a[56953] = aux_sym_concatenation_repeat1;
	v->a[56954] = state(1547);
	v->a[56955] = 1;
	v->a[56956] = aux_sym__case_item_last_repeat1;
	v->a[56957] = actions(2946);
	v->a[56958] = 2;
	v->a[56959] = sym__concat;
	small_parse_table_2848(v);
}

void	small_parse_table_2848(t_small_parse_table_array *v)
{
	v->a[56960] = aux_sym_concatenation_token1;
	v->a[56961] = 3;
	v->a[56962] = actions(3);
	v->a[56963] = 1;
	v->a[56964] = sym_comment;
	v->a[56965] = actions(1083);
	v->a[56966] = 2;
	v->a[56967] = sym_regex;
	v->a[56968] = aux_sym__expansion_regex_token1;
	v->a[56969] = actions(1085);
	v->a[56970] = 4;
	v->a[56971] = anon_sym_RPAREN;
	v->a[56972] = anon_sym_RBRACE;
	v->a[56973] = anon_sym_DQUOTE;
	v->a[56974] = sym_raw_string;
	v->a[56975] = 3;
	v->a[56976] = actions(3);
	v->a[56977] = 1;
	v->a[56978] = sym_comment;
	v->a[56979] = actions(1087);
	small_parse_table_2849(v);
}

void	small_parse_table_2849(t_small_parse_table_array *v)
{
	v->a[56980] = 2;
	v->a[56981] = sym_regex;
	v->a[56982] = aux_sym__expansion_regex_token1;
	v->a[56983] = actions(1089);
	v->a[56984] = 4;
	v->a[56985] = anon_sym_RPAREN;
	v->a[56986] = anon_sym_RBRACE;
	v->a[56987] = anon_sym_DQUOTE;
	v->a[56988] = sym_raw_string;
	v->a[56989] = 3;
	v->a[56990] = actions(3);
	v->a[56991] = 1;
	v->a[56992] = sym_comment;
	v->a[56993] = actions(1108);
	v->a[56994] = 2;
	v->a[56995] = sym_regex;
	v->a[56996] = aux_sym__expansion_regex_token1;
	v->a[56997] = actions(1106);
	v->a[56998] = 4;
	v->a[56999] = anon_sym_RPAREN;
	small_parse_table_2850(v);
}

/* EOF small_parse_table_569.c */
