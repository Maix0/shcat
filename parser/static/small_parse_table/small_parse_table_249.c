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
	v->a[24900] = anon_sym_GT_AMP_DASH;
	v->a[24901] = anon_sym_LT_LT;
	v->a[24902] = anon_sym_LT_LT_DASH;
	v->a[24903] = aux_sym_heredoc_redirect_token1;
	v->a[24904] = anon_sym_AMP;
	v->a[24905] = anon_sym_SEMI;
	v->a[24906] = 6;
	v->a[24907] = actions(3);
	v->a[24908] = 1;
	v->a[24909] = sym_comment;
	v->a[24910] = actions(874);
	v->a[24911] = 1;
	v->a[24912] = sym_variable_name;
	v->a[24913] = actions(413);
	v->a[24914] = 2;
	v->a[24915] = sym_file_descriptor;
	v->a[24916] = sym__bare_dollar;
	v->a[24917] = actions(872);
	v->a[24918] = 2;
	v->a[24919] = aux_sym__simple_variable_name_token1;
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = aux_sym__multiline_variable_name_token1;
	v->a[24921] = actions(870);
	v->a[24922] = 9;
	v->a[24923] = anon_sym_BANG;
	v->a[24924] = anon_sym_DASH;
	v->a[24925] = anon_sym_STAR;
	v->a[24926] = anon_sym_QMARK;
	v->a[24927] = anon_sym_DOLLAR;
	v->a[24928] = anon_sym_POUND;
	v->a[24929] = anon_sym_AT;
	v->a[24930] = anon_sym_0;
	v->a[24931] = anon_sym__;
	v->a[24932] = actions(407);
	v->a[24933] = 25;
	v->a[24934] = anon_sym_LPAREN;
	v->a[24935] = anon_sym_PIPE;
	v->a[24936] = anon_sym_AMP_AMP;
	v->a[24937] = anon_sym_PIPE_PIPE;
	v->a[24938] = anon_sym_LT;
	v->a[24939] = anon_sym_GT;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = anon_sym_GT_GT;
	v->a[24941] = anon_sym_AMP_GT;
	v->a[24942] = anon_sym_AMP_GT_GT;
	v->a[24943] = anon_sym_LT_AMP;
	v->a[24944] = anon_sym_GT_AMP;
	v->a[24945] = anon_sym_GT_PIPE;
	v->a[24946] = anon_sym_LT_AMP_DASH;
	v->a[24947] = anon_sym_GT_AMP_DASH;
	v->a[24948] = anon_sym_LT_LT;
	v->a[24949] = anon_sym_LT_LT_DASH;
	v->a[24950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24951] = anon_sym_DQUOTE;
	v->a[24952] = sym_raw_string;
	v->a[24953] = aux_sym_number_token1;
	v->a[24954] = aux_sym_number_token2;
	v->a[24955] = anon_sym_DOLLAR_LBRACE;
	v->a[24956] = anon_sym_DOLLAR_LPAREN;
	v->a[24957] = anon_sym_BQUOTE;
	v->a[24958] = sym_word;
	v->a[24959] = 5;
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = actions(3);
	v->a[24961] = 1;
	v->a[24962] = sym_comment;
	v->a[24963] = state(726);
	v->a[24964] = 1;
	v->a[24965] = sym_concatenation;
	v->a[24966] = actions(755);
	v->a[24967] = 2;
	v->a[24968] = sym_file_descriptor;
	v->a[24969] = sym_variable_name;
	v->a[24970] = state(337);
	v->a[24971] = 6;
	v->a[24972] = sym_arithmetic_expansion;
	v->a[24973] = sym_string;
	v->a[24974] = sym_number;
	v->a[24975] = sym_simple_expansion;
	v->a[24976] = sym_expansion;
	v->a[24977] = sym_command_substitution;
	v->a[24978] = actions(757);
	v->a[24979] = 30;
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = anon_sym_PIPE;
	v->a[24981] = anon_sym_RPAREN;
	v->a[24982] = anon_sym_SEMI_SEMI;
	v->a[24983] = anon_sym_AMP_AMP;
	v->a[24984] = anon_sym_PIPE_PIPE;
	v->a[24985] = anon_sym_LT;
	v->a[24986] = anon_sym_GT;
	v->a[24987] = anon_sym_GT_GT;
	v->a[24988] = anon_sym_AMP_GT;
	v->a[24989] = anon_sym_AMP_GT_GT;
	v->a[24990] = anon_sym_LT_AMP;
	v->a[24991] = anon_sym_GT_AMP;
	v->a[24992] = anon_sym_GT_PIPE;
	v->a[24993] = anon_sym_LT_AMP_DASH;
	v->a[24994] = anon_sym_GT_AMP_DASH;
	v->a[24995] = anon_sym_LT_LT;
	v->a[24996] = anon_sym_LT_LT_DASH;
	v->a[24997] = aux_sym_heredoc_redirect_token1;
	v->a[24998] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24999] = anon_sym_AMP;
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
