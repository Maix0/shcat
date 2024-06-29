/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_839.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4195(t_small_parse_table_array *v)
{
	v->a[83900] = actions(538);
	v->a[83901] = 9;
	v->a[83902] = sym_file_descriptor;
	v->a[83903] = anon_sym_AMP_AMP;
	v->a[83904] = anon_sym_PIPE_PIPE;
	v->a[83905] = anon_sym_GT_GT;
	v->a[83906] = anon_sym_AMP_GT_GT;
	v->a[83907] = anon_sym_GT_PIPE;
	v->a[83908] = anon_sym_LT_AMP_DASH;
	v->a[83909] = anon_sym_GT_AMP_DASH;
	v->a[83910] = anon_sym_LT_LT_DASH;
	v->a[83911] = 3;
	v->a[83912] = actions(1074);
	v->a[83913] = 1;
	v->a[83914] = sym_comment;
	v->a[83915] = actions(2336);
	v->a[83916] = 7;
	v->a[83917] = anon_sym_PIPE;
	v->a[83918] = anon_sym_LT;
	v->a[83919] = anon_sym_GT;
	small_parse_table_4196(v);
}

void	small_parse_table_4196(t_small_parse_table_array *v)
{
	v->a[83920] = anon_sym_AMP_GT;
	v->a[83921] = anon_sym_LT_AMP;
	v->a[83922] = anon_sym_GT_AMP;
	v->a[83923] = anon_sym_LT_LT;
	v->a[83924] = actions(2334);
	v->a[83925] = 9;
	v->a[83926] = sym_file_descriptor;
	v->a[83927] = anon_sym_AMP_AMP;
	v->a[83928] = anon_sym_PIPE_PIPE;
	v->a[83929] = anon_sym_GT_GT;
	v->a[83930] = anon_sym_AMP_GT_GT;
	v->a[83931] = anon_sym_GT_PIPE;
	v->a[83932] = anon_sym_LT_AMP_DASH;
	v->a[83933] = anon_sym_GT_AMP_DASH;
	v->a[83934] = anon_sym_LT_LT_DASH;
	v->a[83935] = 10;
	v->a[83936] = actions(3);
	v->a[83937] = 1;
	v->a[83938] = sym_comment;
	v->a[83939] = actions(718);
	small_parse_table_4197(v);
}

void	small_parse_table_4197(t_small_parse_table_array *v)
{
	v->a[83940] = 1;
	v->a[83941] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83942] = actions(720);
	v->a[83943] = 1;
	v->a[83944] = anon_sym_DOLLAR;
	v->a[83945] = actions(722);
	v->a[83946] = 1;
	v->a[83947] = anon_sym_DQUOTE;
	v->a[83948] = actions(724);
	v->a[83949] = 1;
	v->a[83950] = anon_sym_DOLLAR_LBRACE;
	v->a[83951] = actions(726);
	v->a[83952] = 1;
	v->a[83953] = anon_sym_DOLLAR_LPAREN;
	v->a[83954] = actions(728);
	v->a[83955] = 1;
	v->a[83956] = anon_sym_BQUOTE;
	v->a[83957] = state(216);
	v->a[83958] = 2;
	v->a[83959] = sym_concatenation;
	small_parse_table_4198(v);
}

void	small_parse_table_4198(t_small_parse_table_array *v)
{
	v->a[83960] = aux_sym_for_statement_repeat1;
	v->a[83961] = actions(716);
	v->a[83962] = 3;
	v->a[83963] = sym_raw_string;
	v->a[83964] = sym_number;
	v->a[83965] = sym_word;
	v->a[83966] = state(600);
	v->a[83967] = 5;
	v->a[83968] = sym_arithmetic_expansion;
	v->a[83969] = sym_string;
	v->a[83970] = sym_simple_expansion;
	v->a[83971] = sym_expansion;
	v->a[83972] = sym_command_substitution;
	v->a[83973] = 3;
	v->a[83974] = actions(3);
	v->a[83975] = 1;
	v->a[83976] = sym_comment;
	v->a[83977] = actions(1114);
	v->a[83978] = 3;
	v->a[83979] = sym_file_descriptor;
	small_parse_table_4199(v);
}

void	small_parse_table_4199(t_small_parse_table_array *v)
{
	v->a[83980] = sym__concat;
	v->a[83981] = aux_sym_heredoc_redirect_token1;
	v->a[83982] = actions(1112);
	v->a[83983] = 13;
	v->a[83984] = anon_sym_AMP_AMP;
	v->a[83985] = anon_sym_PIPE_PIPE;
	v->a[83986] = anon_sym_LT;
	v->a[83987] = anon_sym_GT;
	v->a[83988] = anon_sym_GT_GT;
	v->a[83989] = anon_sym_AMP_GT;
	v->a[83990] = anon_sym_AMP_GT_GT;
	v->a[83991] = anon_sym_LT_AMP;
	v->a[83992] = anon_sym_GT_AMP;
	v->a[83993] = anon_sym_GT_PIPE;
	v->a[83994] = anon_sym_LT_AMP_DASH;
	v->a[83995] = anon_sym_GT_AMP_DASH;
	v->a[83996] = aux_sym_concatenation_token1;
	v->a[83997] = 10;
	v->a[83998] = actions(3);
	v->a[83999] = 1;
	small_parse_table_4200(v);
}

/* EOF small_parse_table_839.c */
