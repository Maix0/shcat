/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_639.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3195(t_small_parse_table_array *v)
{
	v->a[63900] = actions(2103);
	v->a[63901] = 1;
	v->a[63902] = anon_sym_esac;
	v->a[63903] = state(1208);
	v->a[63904] = 1;
	v->a[63905] = aux_sym_case_statement_repeat1;
	v->a[63906] = state(1920);
	v->a[63907] = 1;
	v->a[63908] = sym_case_item;
	v->a[63909] = state(2194);
	v->a[63910] = 1;
	v->a[63911] = sym__case_item_last;
	v->a[63912] = state(2096);
	v->a[63913] = 2;
	v->a[63914] = sym_concatenation;
	v->a[63915] = sym__extglob_blob;
	v->a[63916] = actions(1770);
	v->a[63917] = 3;
	v->a[63918] = sym_raw_string;
	v->a[63919] = sym_number;
	small_parse_table_3196(v);
}

void	small_parse_table_3196(t_small_parse_table_array *v)
{
	v->a[63920] = sym_word;
	v->a[63921] = state(2001);
	v->a[63922] = 5;
	v->a[63923] = sym_arithmetic_expansion;
	v->a[63924] = sym_string;
	v->a[63925] = sym_simple_expansion;
	v->a[63926] = sym_expansion;
	v->a[63927] = sym_command_substitution;
	v->a[63928] = 3;
	v->a[63929] = actions(3);
	v->a[63930] = 1;
	v->a[63931] = sym_comment;
	v->a[63932] = actions(1194);
	v->a[63933] = 4;
	v->a[63934] = sym_file_descriptor;
	v->a[63935] = sym__concat;
	v->a[63936] = sym_variable_name;
	v->a[63937] = aux_sym_heredoc_redirect_token1;
	v->a[63938] = actions(1189);
	v->a[63939] = 18;
	small_parse_table_3197(v);
}

void	small_parse_table_3197(t_small_parse_table_array *v)
{
	v->a[63940] = anon_sym_esac;
	v->a[63941] = anon_sym_PIPE;
	v->a[63942] = anon_sym_SEMI_SEMI;
	v->a[63943] = anon_sym_AMP_AMP;
	v->a[63944] = anon_sym_PIPE_PIPE;
	v->a[63945] = anon_sym_LT;
	v->a[63946] = anon_sym_GT;
	v->a[63947] = anon_sym_GT_GT;
	v->a[63948] = anon_sym_LT_AMP;
	v->a[63949] = anon_sym_GT_AMP;
	v->a[63950] = anon_sym_GT_PIPE;
	v->a[63951] = anon_sym_LT_AMP_DASH;
	v->a[63952] = anon_sym_GT_AMP_DASH;
	v->a[63953] = anon_sym_LT_LT;
	v->a[63954] = anon_sym_LT_LT_DASH;
	v->a[63955] = anon_sym_AMP;
	v->a[63956] = aux_sym_concatenation_token1;
	v->a[63957] = anon_sym_SEMI;
	v->a[63958] = 6;
	v->a[63959] = actions(3);
	small_parse_table_3198(v);
}

void	small_parse_table_3198(t_small_parse_table_array *v)
{
	v->a[63960] = 1;
	v->a[63961] = sym_comment;
	v->a[63962] = actions(2057);
	v->a[63963] = 1;
	v->a[63964] = aux_sym_concatenation_token1;
	v->a[63965] = actions(2059);
	v->a[63966] = 1;
	v->a[63967] = sym__concat;
	v->a[63968] = state(1153);
	v->a[63969] = 1;
	v->a[63970] = aux_sym_concatenation_repeat1;
	v->a[63971] = actions(575);
	v->a[63972] = 3;
	v->a[63973] = sym_file_descriptor;
	v->a[63974] = ts_builtin_sym_end;
	v->a[63975] = aux_sym_heredoc_redirect_token1;
	v->a[63976] = actions(573);
	v->a[63977] = 16;
	v->a[63978] = anon_sym_PIPE;
	v->a[63979] = anon_sym_SEMI_SEMI;
	small_parse_table_3199(v);
}

void	small_parse_table_3199(t_small_parse_table_array *v)
{
	v->a[63980] = anon_sym_AMP_AMP;
	v->a[63981] = anon_sym_PIPE_PIPE;
	v->a[63982] = anon_sym_LT;
	v->a[63983] = anon_sym_GT;
	v->a[63984] = anon_sym_GT_GT;
	v->a[63985] = anon_sym_LT_AMP;
	v->a[63986] = anon_sym_GT_AMP;
	v->a[63987] = anon_sym_GT_PIPE;
	v->a[63988] = anon_sym_LT_AMP_DASH;
	v->a[63989] = anon_sym_GT_AMP_DASH;
	v->a[63990] = anon_sym_LT_LT;
	v->a[63991] = anon_sym_LT_LT_DASH;
	v->a[63992] = anon_sym_AMP;
	v->a[63993] = anon_sym_SEMI;
	v->a[63994] = 8;
	v->a[63995] = actions(3);
	v->a[63996] = 1;
	v->a[63997] = sym_comment;
	v->a[63998] = actions(2074);
	v->a[63999] = 1;
	small_parse_table_3200(v);
}

/* EOF small_parse_table_639.c */
