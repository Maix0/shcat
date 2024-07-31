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
	v->a[56900] = sym_number;
	v->a[56901] = sym_word;
	v->a[56902] = state(633);
	v->a[56903] = 5;
	v->a[56904] = sym_arithmetic_expansion;
	v->a[56905] = sym_string;
	v->a[56906] = sym_simple_expansion;
	v->a[56907] = sym_expansion;
	v->a[56908] = sym_command_substitution;
	v->a[56909] = 3;
	v->a[56910] = actions(3);
	v->a[56911] = 1;
	v->a[56912] = sym_comment;
	v->a[56913] = actions(1384);
	v->a[56914] = 1;
	v->a[56915] = aux_sym_heredoc_redirect_token1;
	v->a[56916] = actions(1306);
	v->a[56917] = 15;
	v->a[56918] = anon_sym_esac;
	v->a[56919] = anon_sym_PIPE;
	small_parse_table_2846(v);
}

void	small_parse_table_2846(t_small_parse_table_array *v)
{
	v->a[56920] = anon_sym_SEMI_SEMI;
	v->a[56921] = anon_sym_AMP_AMP;
	v->a[56922] = anon_sym_PIPE_PIPE;
	v->a[56923] = anon_sym_LT;
	v->a[56924] = anon_sym_GT;
	v->a[56925] = anon_sym_GT_GT;
	v->a[56926] = anon_sym_LT_AMP;
	v->a[56927] = anon_sym_GT_AMP;
	v->a[56928] = anon_sym_GT_PIPE;
	v->a[56929] = anon_sym_LT_GT;
	v->a[56930] = anon_sym_LT_LT;
	v->a[56931] = anon_sym_LT_LT_DASH;
	v->a[56932] = anon_sym_SEMI;
	v->a[56933] = 10;
	v->a[56934] = actions(3);
	v->a[56935] = 1;
	v->a[56936] = sym_comment;
	v->a[56937] = actions(2031);
	v->a[56938] = 1;
	v->a[56939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2847(v);
}

void	small_parse_table_2847(t_small_parse_table_array *v)
{
	v->a[56940] = actions(2035);
	v->a[56941] = 1;
	v->a[56942] = anon_sym_DQUOTE;
	v->a[56943] = actions(2037);
	v->a[56944] = 1;
	v->a[56945] = anon_sym_DOLLAR_LBRACE;
	v->a[56946] = actions(2039);
	v->a[56947] = 1;
	v->a[56948] = anon_sym_DOLLAR_LPAREN;
	v->a[56949] = actions(2041);
	v->a[56950] = 1;
	v->a[56951] = anon_sym_BQUOTE;
	v->a[56952] = actions(2093);
	v->a[56953] = 1;
	v->a[56954] = anon_sym_DOLLAR;
	v->a[56955] = state(664);
	v->a[56956] = 2;
	v->a[56957] = sym_concatenation;
	v->a[56958] = aux_sym_for_statement_repeat1;
	v->a[56959] = actions(2293);
	small_parse_table_2848(v);
}

void	small_parse_table_2848(t_small_parse_table_array *v)
{
	v->a[56960] = 3;
	v->a[56961] = sym_raw_string;
	v->a[56962] = sym_number;
	v->a[56963] = sym_word;
	v->a[56964] = state(827);
	v->a[56965] = 5;
	v->a[56966] = sym_arithmetic_expansion;
	v->a[56967] = sym_string;
	v->a[56968] = sym_simple_expansion;
	v->a[56969] = sym_expansion;
	v->a[56970] = sym_command_substitution;
	v->a[56971] = 3;
	v->a[56972] = actions(3);
	v->a[56973] = 1;
	v->a[56974] = sym_comment;
	v->a[56975] = actions(1854);
	v->a[56976] = 1;
	v->a[56977] = aux_sym_heredoc_redirect_token1;
	v->a[56978] = actions(1856);
	v->a[56979] = 15;
	small_parse_table_2849(v);
}

void	small_parse_table_2849(t_small_parse_table_array *v)
{
	v->a[56980] = anon_sym_esac;
	v->a[56981] = anon_sym_PIPE;
	v->a[56982] = anon_sym_SEMI_SEMI;
	v->a[56983] = anon_sym_AMP_AMP;
	v->a[56984] = anon_sym_PIPE_PIPE;
	v->a[56985] = anon_sym_LT;
	v->a[56986] = anon_sym_GT;
	v->a[56987] = anon_sym_GT_GT;
	v->a[56988] = anon_sym_LT_AMP;
	v->a[56989] = anon_sym_GT_AMP;
	v->a[56990] = anon_sym_GT_PIPE;
	v->a[56991] = anon_sym_LT_GT;
	v->a[56992] = anon_sym_LT_LT;
	v->a[56993] = anon_sym_LT_LT_DASH;
	v->a[56994] = anon_sym_SEMI;
	v->a[56995] = 3;
	v->a[56996] = actions(3);
	v->a[56997] = 1;
	v->a[56998] = sym_comment;
	v->a[56999] = actions(1850);
	small_parse_table_2850(v);
}

/* EOF small_parse_table_569.c */
