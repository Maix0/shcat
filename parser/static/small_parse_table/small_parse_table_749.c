/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_749.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3745(t_small_parse_table_array *v)
{
	v->a[74900] = actions(2750);
	v->a[74901] = 2;
	v->a[74902] = anon_sym_LT_AMP_DASH;
	v->a[74903] = anon_sym_GT_AMP_DASH;
	v->a[74904] = state(1445);
	v->a[74905] = 2;
	v->a[74906] = sym_file_redirect;
	v->a[74907] = aux_sym_redirected_statement_repeat2;
	v->a[74908] = actions(2247);
	v->a[74909] = 5;
	v->a[74910] = anon_sym_PIPE;
	v->a[74911] = anon_sym_AMP_AMP;
	v->a[74912] = anon_sym_PIPE_PIPE;
	v->a[74913] = anon_sym_LT_LT;
	v->a[74914] = anon_sym_LT_LT_DASH;
	v->a[74915] = actions(2747);
	v->a[74916] = 6;
	v->a[74917] = anon_sym_LT;
	v->a[74918] = anon_sym_GT;
	v->a[74919] = anon_sym_GT_GT;
	small_parse_table_3746(v);
}

void	small_parse_table_3746(t_small_parse_table_array *v)
{
	v->a[74920] = anon_sym_LT_AMP;
	v->a[74921] = anon_sym_GT_AMP;
	v->a[74922] = anon_sym_GT_PIPE;
	v->a[74923] = 10;
	v->a[74924] = actions(3);
	v->a[74925] = 1;
	v->a[74926] = sym_comment;
	v->a[74927] = actions(2758);
	v->a[74928] = 1;
	v->a[74929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74930] = actions(2760);
	v->a[74931] = 1;
	v->a[74932] = anon_sym_DOLLAR;
	v->a[74933] = actions(2762);
	v->a[74934] = 1;
	v->a[74935] = anon_sym_DQUOTE;
	v->a[74936] = actions(2764);
	v->a[74937] = 1;
	v->a[74938] = anon_sym_DOLLAR_LBRACE;
	v->a[74939] = actions(2766);
	small_parse_table_3747(v);
}

void	small_parse_table_3747(t_small_parse_table_array *v)
{
	v->a[74940] = 1;
	v->a[74941] = anon_sym_DOLLAR_LPAREN;
	v->a[74942] = actions(2768);
	v->a[74943] = 1;
	v->a[74944] = anon_sym_BQUOTE;
	v->a[74945] = actions(2770);
	v->a[74946] = 1;
	v->a[74947] = sym__bare_dollar;
	v->a[74948] = actions(2756);
	v->a[74949] = 5;
	v->a[74950] = aux_sym_concatenation_token1;
	v->a[74951] = sym_raw_string;
	v->a[74952] = sym_number;
	v->a[74953] = sym__comment_word;
	v->a[74954] = sym_word;
	v->a[74955] = state(1980);
	v->a[74956] = 5;
	v->a[74957] = sym_arithmetic_expansion;
	v->a[74958] = sym_string;
	v->a[74959] = sym_simple_expansion;
	small_parse_table_3748(v);
}

void	small_parse_table_3748(t_small_parse_table_array *v)
{
	v->a[74960] = sym_expansion;
	v->a[74961] = sym_command_substitution;
	v->a[74962] = 10;
	v->a[74963] = actions(3);
	v->a[74964] = 1;
	v->a[74965] = sym_comment;
	v->a[74966] = actions(477);
	v->a[74967] = 1;
	v->a[74968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74969] = actions(479);
	v->a[74970] = 1;
	v->a[74971] = anon_sym_DOLLAR;
	v->a[74972] = actions(481);
	v->a[74973] = 1;
	v->a[74974] = anon_sym_DQUOTE;
	v->a[74975] = actions(483);
	v->a[74976] = 1;
	v->a[74977] = anon_sym_DOLLAR_LBRACE;
	v->a[74978] = actions(485);
	v->a[74979] = 1;
	small_parse_table_3749(v);
}

void	small_parse_table_3749(t_small_parse_table_array *v)
{
	v->a[74980] = anon_sym_DOLLAR_LPAREN;
	v->a[74981] = actions(487);
	v->a[74982] = 1;
	v->a[74983] = anon_sym_BQUOTE;
	v->a[74984] = actions(2774);
	v->a[74985] = 1;
	v->a[74986] = sym__bare_dollar;
	v->a[74987] = actions(2772);
	v->a[74988] = 5;
	v->a[74989] = aux_sym_concatenation_token1;
	v->a[74990] = sym_raw_string;
	v->a[74991] = sym_number;
	v->a[74992] = sym__comment_word;
	v->a[74993] = sym_word;
	v->a[74994] = state(503);
	v->a[74995] = 5;
	v->a[74996] = sym_arithmetic_expansion;
	v->a[74997] = sym_string;
	v->a[74998] = sym_simple_expansion;
	v->a[74999] = sym_expansion;
	small_parse_table_3750(v);
}

/* EOF small_parse_table_749.c */
