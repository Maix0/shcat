/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_199.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_995(t_small_parse_table_array *v)
{
	v->a[19900] = sym_expansion;
	v->a[19901] = sym_command_substitution;
	v->a[19902] = actions(505);
	v->a[19903] = 17;
	v->a[19904] = anon_sym_esac;
	v->a[19905] = anon_sym_PIPE;
	v->a[19906] = anon_sym_SEMI_SEMI;
	v->a[19907] = anon_sym_AMP_AMP;
	v->a[19908] = anon_sym_PIPE_PIPE;
	v->a[19909] = anon_sym_LT;
	v->a[19910] = anon_sym_GT;
	v->a[19911] = anon_sym_GT_GT;
	v->a[19912] = anon_sym_LT_AMP;
	v->a[19913] = anon_sym_GT_AMP;
	v->a[19914] = anon_sym_GT_PIPE;
	v->a[19915] = anon_sym_LT_GT;
	v->a[19916] = anon_sym_LT_LT;
	v->a[19917] = anon_sym_LT_LT_DASH;
	v->a[19918] = aux_sym_heredoc_redirect_token1;
	v->a[19919] = anon_sym_AMP;
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = anon_sym_SEMI;
	v->a[19921] = 5;
	v->a[19922] = actions(3);
	v->a[19923] = 1;
	v->a[19924] = sym_comment;
	v->a[19925] = actions(511);
	v->a[19926] = 2;
	v->a[19927] = sym_file_descriptor;
	v->a[19928] = sym_variable_name;
	v->a[19929] = state(189);
	v->a[19930] = 2;
	v->a[19931] = sym_concatenation;
	v->a[19932] = aux_sym_for_statement_repeat1;
	v->a[19933] = state(441);
	v->a[19934] = 5;
	v->a[19935] = sym_arithmetic_expansion;
	v->a[19936] = sym_string;
	v->a[19937] = sym_simple_expansion;
	v->a[19938] = sym_expansion;
	v->a[19939] = sym_command_substitution;
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = actions(509);
	v->a[19941] = 26;
	v->a[19942] = anon_sym_esac;
	v->a[19943] = anon_sym_PIPE;
	v->a[19944] = anon_sym_SEMI_SEMI;
	v->a[19945] = anon_sym_AMP_AMP;
	v->a[19946] = anon_sym_PIPE_PIPE;
	v->a[19947] = anon_sym_LT;
	v->a[19948] = anon_sym_GT;
	v->a[19949] = anon_sym_GT_GT;
	v->a[19950] = anon_sym_LT_AMP;
	v->a[19951] = anon_sym_GT_AMP;
	v->a[19952] = anon_sym_GT_PIPE;
	v->a[19953] = anon_sym_LT_GT;
	v->a[19954] = anon_sym_LT_LT;
	v->a[19955] = anon_sym_LT_LT_DASH;
	v->a[19956] = aux_sym_heredoc_redirect_token1;
	v->a[19957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19958] = anon_sym_AMP;
	v->a[19959] = anon_sym_DOLLAR;
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = anon_sym_DQUOTE;
	v->a[19961] = sym_raw_string;
	v->a[19962] = sym_number;
	v->a[19963] = anon_sym_DOLLAR_LBRACE;
	v->a[19964] = anon_sym_DOLLAR_LPAREN;
	v->a[19965] = anon_sym_BQUOTE;
	v->a[19966] = sym_word;
	v->a[19967] = anon_sym_SEMI;
	v->a[19968] = 5;
	v->a[19969] = actions(3);
	v->a[19970] = 1;
	v->a[19971] = sym_comment;
	v->a[19972] = actions(515);
	v->a[19973] = 2;
	v->a[19974] = sym_file_descriptor;
	v->a[19975] = sym_variable_name;
	v->a[19976] = state(189);
	v->a[19977] = 2;
	v->a[19978] = sym_concatenation;
	v->a[19979] = aux_sym_for_statement_repeat1;
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = state(441);
	v->a[19981] = 5;
	v->a[19982] = sym_arithmetic_expansion;
	v->a[19983] = sym_string;
	v->a[19984] = sym_simple_expansion;
	v->a[19985] = sym_expansion;
	v->a[19986] = sym_command_substitution;
	v->a[19987] = actions(513);
	v->a[19988] = 26;
	v->a[19989] = anon_sym_esac;
	v->a[19990] = anon_sym_PIPE;
	v->a[19991] = anon_sym_SEMI_SEMI;
	v->a[19992] = anon_sym_AMP_AMP;
	v->a[19993] = anon_sym_PIPE_PIPE;
	v->a[19994] = anon_sym_LT;
	v->a[19995] = anon_sym_GT;
	v->a[19996] = anon_sym_GT_GT;
	v->a[19997] = anon_sym_LT_AMP;
	v->a[19998] = anon_sym_GT_AMP;
	v->a[19999] = anon_sym_GT_PIPE;
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
