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
	v->a[56900] = 5;
	v->a[56901] = sym_arithmetic_expansion;
	v->a[56902] = sym_string;
	v->a[56903] = sym_simple_expansion;
	v->a[56904] = sym_expansion;
	v->a[56905] = sym_command_substitution;
	v->a[56906] = 15;
	v->a[56907] = actions(3);
	v->a[56908] = 1;
	v->a[56909] = sym_comment;
	v->a[56910] = actions(1720);
	v->a[56911] = 1;
	v->a[56912] = anon_sym_LPAREN;
	v->a[56913] = actions(1724);
	v->a[56914] = 1;
	v->a[56915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56916] = actions(1726);
	v->a[56917] = 1;
	v->a[56918] = anon_sym_DOLLAR;
	v->a[56919] = actions(1728);
	small_parse_table_2846(v);
}

void	small_parse_table_2846(t_small_parse_table_array *v)
{
	v->a[56920] = 1;
	v->a[56921] = anon_sym_DQUOTE;
	v->a[56922] = actions(1730);
	v->a[56923] = 1;
	v->a[56924] = anon_sym_DOLLAR_LBRACE;
	v->a[56925] = actions(1732);
	v->a[56926] = 1;
	v->a[56927] = anon_sym_DOLLAR_LPAREN;
	v->a[56928] = actions(1734);
	v->a[56929] = 1;
	v->a[56930] = anon_sym_BQUOTE;
	v->a[56931] = actions(1736);
	v->a[56932] = 1;
	v->a[56933] = sym_extglob_pattern;
	v->a[56934] = state(1050);
	v->a[56935] = 1;
	v->a[56936] = aux_sym_case_statement_repeat1;
	v->a[56937] = state(1682);
	v->a[56938] = 1;
	v->a[56939] = sym_case_item;
	small_parse_table_2847(v);
}

void	small_parse_table_2847(t_small_parse_table_array *v)
{
	v->a[56940] = state(1989);
	v->a[56941] = 1;
	v->a[56942] = sym__case_item_last;
	v->a[56943] = state(1877);
	v->a[56944] = 2;
	v->a[56945] = sym_concatenation;
	v->a[56946] = sym__extglob_blob;
	v->a[56947] = actions(1716);
	v->a[56948] = 3;
	v->a[56949] = sym_raw_string;
	v->a[56950] = sym_number;
	v->a[56951] = sym_word;
	v->a[56952] = state(1772);
	v->a[56953] = 5;
	v->a[56954] = sym_arithmetic_expansion;
	v->a[56955] = sym_string;
	v->a[56956] = sym_simple_expansion;
	v->a[56957] = sym_expansion;
	v->a[56958] = sym_command_substitution;
	v->a[56959] = 15;
	small_parse_table_2848(v);
}

void	small_parse_table_2848(t_small_parse_table_array *v)
{
	v->a[56960] = actions(3);
	v->a[56961] = 1;
	v->a[56962] = sym_comment;
	v->a[56963] = actions(1720);
	v->a[56964] = 1;
	v->a[56965] = anon_sym_LPAREN;
	v->a[56966] = actions(1724);
	v->a[56967] = 1;
	v->a[56968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56969] = actions(1726);
	v->a[56970] = 1;
	v->a[56971] = anon_sym_DOLLAR;
	v->a[56972] = actions(1728);
	v->a[56973] = 1;
	v->a[56974] = anon_sym_DQUOTE;
	v->a[56975] = actions(1730);
	v->a[56976] = 1;
	v->a[56977] = anon_sym_DOLLAR_LBRACE;
	v->a[56978] = actions(1732);
	v->a[56979] = 1;
	small_parse_table_2849(v);
}

void	small_parse_table_2849(t_small_parse_table_array *v)
{
	v->a[56980] = anon_sym_DOLLAR_LPAREN;
	v->a[56981] = actions(1734);
	v->a[56982] = 1;
	v->a[56983] = anon_sym_BQUOTE;
	v->a[56984] = actions(1736);
	v->a[56985] = 1;
	v->a[56986] = sym_extglob_pattern;
	v->a[56987] = state(1050);
	v->a[56988] = 1;
	v->a[56989] = aux_sym_case_statement_repeat1;
	v->a[56990] = state(1682);
	v->a[56991] = 1;
	v->a[56992] = sym_case_item;
	v->a[56993] = state(1974);
	v->a[56994] = 1;
	v->a[56995] = sym__case_item_last;
	v->a[56996] = state(1877);
	v->a[56997] = 2;
	v->a[56998] = sym_concatenation;
	v->a[56999] = sym__extglob_blob;
	small_parse_table_2850(v);
}

/* EOF small_parse_table_569.c */
