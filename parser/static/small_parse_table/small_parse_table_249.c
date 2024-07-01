/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_249.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1245(t_small_parse_table_array *v)
{
	v->a[24900] = anon_sym_GT_AMP;
	v->a[24901] = anon_sym_GT_PIPE;
	v->a[24902] = anon_sym_LT_AMP_DASH;
	v->a[24903] = anon_sym_GT_AMP_DASH;
	v->a[24904] = anon_sym_LT_LT;
	v->a[24905] = anon_sym_LT_LT_DASH;
	v->a[24906] = aux_sym_heredoc_redirect_token1;
	v->a[24907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24908] = anon_sym_AMP;
	v->a[24909] = anon_sym_DOLLAR;
	v->a[24910] = anon_sym_DQUOTE;
	v->a[24911] = sym_raw_string;
	v->a[24912] = sym_number;
	v->a[24913] = anon_sym_DOLLAR_LBRACE;
	v->a[24914] = anon_sym_DOLLAR_LPAREN;
	v->a[24915] = anon_sym_BQUOTE;
	v->a[24916] = sym_word;
	v->a[24917] = anon_sym_SEMI;
	v->a[24918] = 5;
	v->a[24919] = actions(3);
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = 1;
	v->a[24921] = sym_comment;
	v->a[24922] = state(715);
	v->a[24923] = 1;
	v->a[24924] = sym_concatenation;
	v->a[24925] = actions(790);
	v->a[24926] = 2;
	v->a[24927] = sym_file_descriptor;
	v->a[24928] = sym_variable_name;
	v->a[24929] = state(506);
	v->a[24930] = 5;
	v->a[24931] = sym_arithmetic_expansion;
	v->a[24932] = sym_string;
	v->a[24933] = sym_simple_expansion;
	v->a[24934] = sym_expansion;
	v->a[24935] = sym_command_substitution;
	v->a[24936] = actions(788);
	v->a[24937] = 26;
	v->a[24938] = anon_sym_PIPE;
	v->a[24939] = anon_sym_SEMI_SEMI;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = anon_sym_AMP_AMP;
	v->a[24941] = anon_sym_PIPE_PIPE;
	v->a[24942] = anon_sym_LT;
	v->a[24943] = anon_sym_GT;
	v->a[24944] = anon_sym_GT_GT;
	v->a[24945] = anon_sym_LT_AMP;
	v->a[24946] = anon_sym_GT_AMP;
	v->a[24947] = anon_sym_GT_PIPE;
	v->a[24948] = anon_sym_LT_AMP_DASH;
	v->a[24949] = anon_sym_GT_AMP_DASH;
	v->a[24950] = anon_sym_LT_LT;
	v->a[24951] = anon_sym_LT_LT_DASH;
	v->a[24952] = aux_sym_heredoc_redirect_token1;
	v->a[24953] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24954] = anon_sym_AMP;
	v->a[24955] = anon_sym_DOLLAR;
	v->a[24956] = anon_sym_DQUOTE;
	v->a[24957] = sym_raw_string;
	v->a[24958] = sym_number;
	v->a[24959] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = anon_sym_DOLLAR_LPAREN;
	v->a[24961] = anon_sym_BQUOTE;
	v->a[24962] = sym_word;
	v->a[24963] = anon_sym_SEMI;
	v->a[24964] = 7;
	v->a[24965] = actions(870);
	v->a[24966] = 1;
	v->a[24967] = sym_comment;
	v->a[24968] = actions(852);
	v->a[24969] = 2;
	v->a[24970] = anon_sym_GT_GT;
	v->a[24971] = anon_sym_LT_LT;
	v->a[24972] = actions(864);
	v->a[24973] = 2;
	v->a[24974] = anon_sym_PLUS;
	v->a[24975] = anon_sym_DASH;
	v->a[24976] = actions(868);
	v->a[24977] = 2;
	v->a[24978] = anon_sym_PLUS_PLUS2;
	v->a[24979] = anon_sym_DASH_DASH2;
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = actions(866);
	v->a[24981] = 3;
	v->a[24982] = anon_sym_STAR;
	v->a[24983] = anon_sym_SLASH;
	v->a[24984] = anon_sym_PERCENT;
	v->a[24985] = actions(959);
	v->a[24986] = 6;
	v->a[24987] = anon_sym_PIPE;
	v->a[24988] = anon_sym_EQ;
	v->a[24989] = anon_sym_LT;
	v->a[24990] = anon_sym_GT;
	v->a[24991] = anon_sym_CARET;
	v->a[24992] = anon_sym_AMP;
	v->a[24993] = actions(961);
	v->a[24994] = 19;
	v->a[24995] = anon_sym_AMP_AMP;
	v->a[24996] = anon_sym_PIPE_PIPE;
	v->a[24997] = anon_sym_RPAREN_RPAREN;
	v->a[24998] = anon_sym_PLUS_EQ;
	v->a[24999] = anon_sym_DASH_EQ;
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
