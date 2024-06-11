/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_559.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2795(t_small_parse_table_array *v)
{
	v->a[55900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55901] = anon_sym_DOLLAR;
	v->a[55902] = anon_sym_DQUOTE;
	v->a[55903] = sym_raw_string;
	v->a[55904] = sym_number;
	v->a[55905] = anon_sym_DOLLAR_LBRACE;
	v->a[55906] = anon_sym_DOLLAR_LPAREN;
	v->a[55907] = anon_sym_BQUOTE;
	v->a[55908] = sym_word;
	v->a[55909] = 6;
	v->a[55910] = actions(3);
	v->a[55911] = 1;
	v->a[55912] = sym_comment;
	v->a[55913] = actions(1104);
	v->a[55914] = 1;
	v->a[55915] = aux_sym_concatenation_token1;
	v->a[55916] = actions(1171);
	v->a[55917] = 1;
	v->a[55918] = sym__concat;
	v->a[55919] = state(838);
	small_parse_table_2796(v);
}

void	small_parse_table_2796(t_small_parse_table_array *v)
{
	v->a[55920] = 1;
	v->a[55921] = aux_sym_concatenation_repeat1;
	v->a[55922] = actions(1169);
	v->a[55923] = 2;
	v->a[55924] = sym_file_descriptor;
	v->a[55925] = sym__bare_dollar;
	v->a[55926] = actions(1167);
	v->a[55927] = 25;
	v->a[55928] = anon_sym_PIPE;
	v->a[55929] = anon_sym_AMP_AMP;
	v->a[55930] = anon_sym_PIPE_PIPE;
	v->a[55931] = anon_sym_LT;
	v->a[55932] = anon_sym_GT;
	v->a[55933] = anon_sym_GT_GT;
	v->a[55934] = anon_sym_AMP_GT;
	v->a[55935] = anon_sym_AMP_GT_GT;
	v->a[55936] = anon_sym_LT_AMP;
	v->a[55937] = anon_sym_GT_AMP;
	v->a[55938] = anon_sym_GT_PIPE;
	v->a[55939] = anon_sym_LT_AMP_DASH;
	small_parse_table_2797(v);
}

void	small_parse_table_2797(t_small_parse_table_array *v)
{
	v->a[55940] = anon_sym_GT_AMP_DASH;
	v->a[55941] = anon_sym_LT_LT;
	v->a[55942] = anon_sym_LT_LT_DASH;
	v->a[55943] = aux_sym_heredoc_redirect_token1;
	v->a[55944] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55945] = anon_sym_DOLLAR;
	v->a[55946] = anon_sym_DQUOTE;
	v->a[55947] = sym_raw_string;
	v->a[55948] = sym_number;
	v->a[55949] = anon_sym_DOLLAR_LBRACE;
	v->a[55950] = anon_sym_DOLLAR_LPAREN;
	v->a[55951] = anon_sym_BQUOTE;
	v->a[55952] = sym_word;
	v->a[55953] = 3;
	v->a[55954] = actions(3);
	v->a[55955] = 1;
	v->a[55956] = sym_comment;
	v->a[55957] = actions(1548);
	v->a[55958] = 2;
	v->a[55959] = sym_file_descriptor;
	small_parse_table_2798(v);
}

void	small_parse_table_2798(t_small_parse_table_array *v)
{
	v->a[55960] = sym_variable_name;
	v->a[55961] = actions(1546);
	v->a[55962] = 28;
	v->a[55963] = anon_sym_for;
	v->a[55964] = anon_sym_while;
	v->a[55965] = anon_sym_until;
	v->a[55966] = anon_sym_do;
	v->a[55967] = anon_sym_if;
	v->a[55968] = anon_sym_case;
	v->a[55969] = anon_sym_LPAREN;
	v->a[55970] = anon_sym_LBRACE;
	v->a[55971] = anon_sym_BANG;
	v->a[55972] = anon_sym_LT;
	v->a[55973] = anon_sym_GT;
	v->a[55974] = anon_sym_GT_GT;
	v->a[55975] = anon_sym_AMP_GT;
	v->a[55976] = anon_sym_AMP_GT_GT;
	v->a[55977] = anon_sym_LT_AMP;
	v->a[55978] = anon_sym_GT_AMP;
	v->a[55979] = anon_sym_GT_PIPE;
	small_parse_table_2799(v);
}

void	small_parse_table_2799(t_small_parse_table_array *v)
{
	v->a[55980] = anon_sym_LT_AMP_DASH;
	v->a[55981] = anon_sym_GT_AMP_DASH;
	v->a[55982] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55983] = anon_sym_DOLLAR;
	v->a[55984] = anon_sym_DQUOTE;
	v->a[55985] = sym_raw_string;
	v->a[55986] = sym_number;
	v->a[55987] = anon_sym_DOLLAR_LBRACE;
	v->a[55988] = anon_sym_DOLLAR_LPAREN;
	v->a[55989] = anon_sym_BQUOTE;
	v->a[55990] = sym_word;
	v->a[55991] = 4;
	v->a[55992] = actions(3);
	v->a[55993] = 1;
	v->a[55994] = sym_comment;
	v->a[55995] = actions(1554);
	v->a[55996] = 1;
	v->a[55997] = anon_sym_BQUOTE;
	v->a[55998] = actions(1556);
	v->a[55999] = 2;
	small_parse_table_2800(v);
}

/* EOF small_parse_table_559.c */
