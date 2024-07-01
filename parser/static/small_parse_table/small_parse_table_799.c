/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_799.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3995(t_small_parse_table_array *v)
{
	v->a[79900] = 1;
	v->a[79901] = anon_sym_DOLLAR_LBRACE;
	v->a[79902] = actions(2595);
	v->a[79903] = 1;
	v->a[79904] = anon_sym_DOLLAR_LPAREN;
	v->a[79905] = actions(2597);
	v->a[79906] = 1;
	v->a[79907] = anon_sym_BQUOTE;
	v->a[79908] = actions(2741);
	v->a[79909] = 1;
	v->a[79910] = anon_sym_DOLLAR;
	v->a[79911] = state(196);
	v->a[79912] = 2;
	v->a[79913] = sym_concatenation;
	v->a[79914] = aux_sym_for_statement_repeat1;
	v->a[79915] = actions(3098);
	v->a[79916] = 3;
	v->a[79917] = sym_raw_string;
	v->a[79918] = sym_number;
	v->a[79919] = sym_word;
	small_parse_table_3996(v);
}

void	small_parse_table_3996(t_small_parse_table_array *v)
{
	v->a[79920] = state(442);
	v->a[79921] = 5;
	v->a[79922] = sym_arithmetic_expansion;
	v->a[79923] = sym_string;
	v->a[79924] = sym_simple_expansion;
	v->a[79925] = sym_expansion;
	v->a[79926] = sym_command_substitution;
	v->a[79927] = 10;
	v->a[79928] = actions(3);
	v->a[79929] = 1;
	v->a[79930] = sym_comment;
	v->a[79931] = actions(2587);
	v->a[79932] = 1;
	v->a[79933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79934] = actions(2591);
	v->a[79935] = 1;
	v->a[79936] = anon_sym_DQUOTE;
	v->a[79937] = actions(2593);
	v->a[79938] = 1;
	v->a[79939] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3997(v);
}

void	small_parse_table_3997(t_small_parse_table_array *v)
{
	v->a[79940] = actions(2595);
	v->a[79941] = 1;
	v->a[79942] = anon_sym_DOLLAR_LPAREN;
	v->a[79943] = actions(2597);
	v->a[79944] = 1;
	v->a[79945] = anon_sym_BQUOTE;
	v->a[79946] = actions(2741);
	v->a[79947] = 1;
	v->a[79948] = anon_sym_DOLLAR;
	v->a[79949] = state(206);
	v->a[79950] = 2;
	v->a[79951] = sym_concatenation;
	v->a[79952] = aux_sym_for_statement_repeat1;
	v->a[79953] = actions(3098);
	v->a[79954] = 3;
	v->a[79955] = sym_raw_string;
	v->a[79956] = sym_number;
	v->a[79957] = sym_word;
	v->a[79958] = state(442);
	v->a[79959] = 5;
	small_parse_table_3998(v);
}

void	small_parse_table_3998(t_small_parse_table_array *v)
{
	v->a[79960] = sym_arithmetic_expansion;
	v->a[79961] = sym_string;
	v->a[79962] = sym_simple_expansion;
	v->a[79963] = sym_expansion;
	v->a[79964] = sym_command_substitution;
	v->a[79965] = 9;
	v->a[79966] = actions(686);
	v->a[79967] = 1;
	v->a[79968] = anon_sym_LT_LT;
	v->a[79969] = actions(870);
	v->a[79970] = 1;
	v->a[79971] = sym_comment;
	v->a[79972] = actions(2019);
	v->a[79973] = 1;
	v->a[79974] = sym_file_descriptor;
	v->a[79975] = actions(3106);
	v->a[79976] = 1;
	v->a[79977] = anon_sym_LT_LT_DASH;
	v->a[79978] = actions(3100);
	v->a[79979] = 2;
	small_parse_table_3999(v);
}

void	small_parse_table_3999(t_small_parse_table_array *v)
{
	v->a[79980] = anon_sym_AMP_AMP;
	v->a[79981] = anon_sym_PIPE_PIPE;
	v->a[79982] = actions(3102);
	v->a[79983] = 2;
	v->a[79984] = anon_sym_GT_GT;
	v->a[79985] = anon_sym_GT_PIPE;
	v->a[79986] = actions(3104);
	v->a[79987] = 2;
	v->a[79988] = anon_sym_LT_AMP_DASH;
	v->a[79989] = anon_sym_GT_AMP_DASH;
	v->a[79990] = state(1176);
	v->a[79991] = 3;
	v->a[79992] = sym_file_redirect;
	v->a[79993] = sym_heredoc_redirect;
	v->a[79994] = aux_sym_redirected_statement_repeat1;
	v->a[79995] = actions(2013);
	v->a[79996] = 4;
	v->a[79997] = anon_sym_LT;
	v->a[79998] = anon_sym_GT;
	v->a[79999] = anon_sym_LT_AMP;
	small_parse_table_4000(v);
}

/* EOF small_parse_table_799.c */
