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
	v->a[24900] = anon_sym_PLUS_PLUS2;
	v->a[24901] = anon_sym_DASH_DASH2;
	v->a[24902] = actions(658);
	v->a[24903] = 2;
	v->a[24904] = anon_sym_LT;
	v->a[24905] = anon_sym_GT;
	v->a[24906] = actions(660);
	v->a[24907] = 2;
	v->a[24908] = anon_sym_GT_GT;
	v->a[24909] = anon_sym_LT_LT;
	v->a[24910] = actions(668);
	v->a[24911] = 2;
	v->a[24912] = anon_sym_EQ_EQ;
	v->a[24913] = anon_sym_BANG_EQ;
	v->a[24914] = actions(670);
	v->a[24915] = 2;
	v->a[24916] = anon_sym_LT_EQ;
	v->a[24917] = anon_sym_GT_EQ;
	v->a[24918] = actions(672);
	v->a[24919] = 2;
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = anon_sym_PLUS;
	v->a[24921] = anon_sym_DASH;
	v->a[24922] = actions(674);
	v->a[24923] = 3;
	v->a[24924] = anon_sym_STAR;
	v->a[24925] = anon_sym_SLASH;
	v->a[24926] = anon_sym_PERCENT;
	v->a[24927] = actions(802);
	v->a[24928] = 10;
	v->a[24929] = anon_sym_PLUS_EQ;
	v->a[24930] = anon_sym_DASH_EQ;
	v->a[24931] = anon_sym_STAR_EQ;
	v->a[24932] = anon_sym_SLASH_EQ;
	v->a[24933] = anon_sym_PERCENT_EQ;
	v->a[24934] = anon_sym_LT_LT_EQ;
	v->a[24935] = anon_sym_GT_GT_EQ;
	v->a[24936] = anon_sym_AMP_EQ;
	v->a[24937] = anon_sym_CARET_EQ;
	v->a[24938] = anon_sym_PIPE_EQ;
	v->a[24939] = 12;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = actions(3);
	v->a[24941] = 1;
	v->a[24942] = sym_comment;
	v->a[24943] = actions(648);
	v->a[24944] = 1;
	v->a[24945] = sym_file_descriptor;
	v->a[24946] = actions(924);
	v->a[24947] = 1;
	v->a[24948] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24949] = actions(927);
	v->a[24950] = 1;
	v->a[24951] = anon_sym_DOLLAR;
	v->a[24952] = actions(930);
	v->a[24953] = 1;
	v->a[24954] = anon_sym_DQUOTE;
	v->a[24955] = actions(933);
	v->a[24956] = 1;
	v->a[24957] = anon_sym_DOLLAR_LBRACE;
	v->a[24958] = actions(936);
	v->a[24959] = 1;
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = anon_sym_DOLLAR_LPAREN;
	v->a[24961] = actions(939);
	v->a[24962] = 1;
	v->a[24963] = anon_sym_BQUOTE;
	v->a[24964] = state(282);
	v->a[24965] = 2;
	v->a[24966] = sym_concatenation;
	v->a[24967] = aux_sym_for_statement_repeat1;
	v->a[24968] = actions(921);
	v->a[24969] = 3;
	v->a[24970] = sym_raw_string;
	v->a[24971] = sym_number;
	v->a[24972] = sym_word;
	v->a[24973] = state(492);
	v->a[24974] = 5;
	v->a[24975] = sym_arithmetic_expansion;
	v->a[24976] = sym_string;
	v->a[24977] = sym_simple_expansion;
	v->a[24978] = sym_expansion;
	v->a[24979] = sym_command_substitution;
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = actions(628);
	v->a[24981] = 16;
	v->a[24982] = anon_sym_esac;
	v->a[24983] = anon_sym_PIPE;
	v->a[24984] = anon_sym_SEMI_SEMI;
	v->a[24985] = anon_sym_AMP_AMP;
	v->a[24986] = anon_sym_PIPE_PIPE;
	v->a[24987] = anon_sym_LT;
	v->a[24988] = anon_sym_GT;
	v->a[24989] = anon_sym_GT_GT;
	v->a[24990] = anon_sym_LT_AMP;
	v->a[24991] = anon_sym_GT_AMP;
	v->a[24992] = anon_sym_GT_PIPE;
	v->a[24993] = anon_sym_LT_GT;
	v->a[24994] = anon_sym_LT_LT;
	v->a[24995] = anon_sym_LT_LT_DASH;
	v->a[24996] = aux_sym_heredoc_redirect_token1;
	v->a[24997] = anon_sym_SEMI;
	v->a[24998] = 17;
	v->a[24999] = actions(501);
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
