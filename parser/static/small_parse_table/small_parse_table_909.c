/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_909.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4545(t_small_parse_table_array *v)
{
	v->a[90900] = actions(5040);
	v->a[90901] = 1;
	v->a[90902] = anon_sym_BQUOTE;
	v->a[90903] = actions(5043);
	v->a[90904] = 1;
	v->a[90905] = anon_sym_DOLLAR_BQUOTE;
	v->a[90906] = actions(5046);
	v->a[90907] = 1;
	v->a[90908] = sym_test_operator;
	v->a[90909] = actions(5049);
	v->a[90910] = 1;
	v->a[90911] = sym__brace_start;
	v->a[90912] = state(2666);
	v->a[90913] = 1;
	v->a[90914] = aux_sym__literal_repeat1;
	v->a[90915] = actions(5013);
	v->a[90916] = 2;
	v->a[90917] = sym_raw_string;
	v->a[90918] = sym_word;
	v->a[90919] = state(1852);
	small_parse_table_4546(v);
}

void	small_parse_table_4546(t_small_parse_table_array *v)
{
	v->a[90920] = 2;
	v->a[90921] = sym_concatenation;
	v->a[90922] = aux_sym_for_statement_repeat1;
	v->a[90923] = actions(1285);
	v->a[90924] = 3;
	v->a[90925] = anon_sym_SEMI_SEMI;
	v->a[90926] = anon_sym_AMP;
	v->a[90927] = anon_sym_SEMI;
	v->a[90928] = state(2609);
	v->a[90929] = 7;
	v->a[90930] = sym_arithmetic_expansion;
	v->a[90931] = sym_brace_expression;
	v->a[90932] = sym_string;
	v->a[90933] = sym_number;
	v->a[90934] = sym_simple_expansion;
	v->a[90935] = sym_expansion;
	v->a[90936] = sym_command_substitution;
	v->a[90937] = 6;
	v->a[90938] = actions(3);
	v->a[90939] = 1;
	small_parse_table_4547(v);
}

void	small_parse_table_4547(t_small_parse_table_array *v)
{
	v->a[90940] = sym_comment;
	v->a[90941] = actions(5052);
	v->a[90942] = 1;
	v->a[90943] = aux_sym_concatenation_token1;
	v->a[90944] = actions(5055);
	v->a[90945] = 1;
	v->a[90946] = sym__concat;
	v->a[90947] = state(1853);
	v->a[90948] = 1;
	v->a[90949] = aux_sym_concatenation_repeat1;
	v->a[90950] = actions(2654);
	v->a[90951] = 4;
	v->a[90952] = sym_file_descriptor;
	v->a[90953] = sym_variable_name;
	v->a[90954] = ts_builtin_sym_end;
	v->a[90955] = aux_sym_heredoc_redirect_token1;
	v->a[90956] = actions(2652);
	v->a[90957] = 21;
	v->a[90958] = anon_sym_PIPE;
	v->a[90959] = anon_sym_RPAREN;
	small_parse_table_4548(v);
}

void	small_parse_table_4548(t_small_parse_table_array *v)
{
	v->a[90960] = anon_sym_SEMI_SEMI;
	v->a[90961] = anon_sym_PIPE_AMP;
	v->a[90962] = anon_sym_AMP_AMP;
	v->a[90963] = anon_sym_PIPE_PIPE;
	v->a[90964] = anon_sym_LT;
	v->a[90965] = anon_sym_GT;
	v->a[90966] = anon_sym_GT_GT;
	v->a[90967] = anon_sym_AMP_GT;
	v->a[90968] = anon_sym_AMP_GT_GT;
	v->a[90969] = anon_sym_LT_AMP;
	v->a[90970] = anon_sym_GT_AMP;
	v->a[90971] = anon_sym_GT_PIPE;
	v->a[90972] = anon_sym_LT_AMP_DASH;
	v->a[90973] = anon_sym_GT_AMP_DASH;
	v->a[90974] = anon_sym_LT_LT;
	v->a[90975] = anon_sym_LT_LT_DASH;
	v->a[90976] = anon_sym_AMP;
	v->a[90977] = anon_sym_BQUOTE;
	v->a[90978] = anon_sym_SEMI;
	v->a[90979] = 6;
	small_parse_table_4549(v);
}

void	small_parse_table_4549(t_small_parse_table_array *v)
{
	v->a[90980] = actions(3);
	v->a[90981] = 1;
	v->a[90982] = sym_comment;
	v->a[90983] = actions(4907);
	v->a[90984] = 1;
	v->a[90985] = aux_sym_concatenation_token1;
	v->a[90986] = actions(5058);
	v->a[90987] = 1;
	v->a[90988] = sym__concat;
	v->a[90989] = state(1859);
	v->a[90990] = 1;
	v->a[90991] = aux_sym_concatenation_repeat1;
	v->a[90992] = actions(2690);
	v->a[90993] = 3;
	v->a[90994] = sym_file_descriptor;
	v->a[90995] = sym_variable_name;
	v->a[90996] = aux_sym_heredoc_redirect_token1;
	v->a[90997] = actions(2688);
	v->a[90998] = 22;
	v->a[90999] = anon_sym_esac;
	small_parse_table_4550(v);
}

/* EOF small_parse_table_909.c */
