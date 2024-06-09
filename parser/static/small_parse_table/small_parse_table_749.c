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
	v->a[74900] = anon_sym_DOLLAR;
	v->a[74901] = actions(2933);
	v->a[74902] = 1;
	v->a[74903] = anon_sym_DQUOTE;
	v->a[74904] = actions(2935);
	v->a[74905] = 1;
	v->a[74906] = aux_sym_number_token1;
	v->a[74907] = actions(2937);
	v->a[74908] = 1;
	v->a[74909] = aux_sym_number_token2;
	v->a[74910] = actions(2939);
	v->a[74911] = 1;
	v->a[74912] = anon_sym_DOLLAR_LBRACE;
	v->a[74913] = actions(2941);
	v->a[74914] = 1;
	v->a[74915] = anon_sym_DOLLAR_LPAREN;
	v->a[74916] = actions(2943);
	v->a[74917] = 1;
	v->a[74918] = anon_sym_BQUOTE;
	v->a[74919] = actions(2945);
	small_parse_table_3746(v);
}

void	small_parse_table_3746(t_small_parse_table_array *v)
{
	v->a[74920] = 1;
	v->a[74921] = sym__comment_word;
	v->a[74922] = actions(2947);
	v->a[74923] = 1;
	v->a[74924] = sym__empty_value;
	v->a[74925] = state(935);
	v->a[74926] = 1;
	v->a[74927] = sym_concatenation;
	v->a[74928] = actions(2927);
	v->a[74929] = 2;
	v->a[74930] = sym_raw_string;
	v->a[74931] = sym_word;
	v->a[74932] = state(779);
	v->a[74933] = 6;
	v->a[74934] = sym_arithmetic_expansion;
	v->a[74935] = sym_string;
	v->a[74936] = sym_number;
	v->a[74937] = sym_simple_expansion;
	v->a[74938] = sym_expansion;
	v->a[74939] = sym_command_substitution;
	small_parse_table_3747(v);
}

void	small_parse_table_3747(t_small_parse_table_array *v)
{
	v->a[74940] = 3;
	v->a[74941] = actions(1404);
	v->a[74942] = 1;
	v->a[74943] = sym_comment;
	v->a[74944] = actions(1313);
	v->a[74945] = 7;
	v->a[74946] = anon_sym_PIPE;
	v->a[74947] = anon_sym_LT;
	v->a[74948] = anon_sym_GT;
	v->a[74949] = anon_sym_AMP_GT;
	v->a[74950] = anon_sym_LT_AMP;
	v->a[74951] = anon_sym_GT_AMP;
	v->a[74952] = anon_sym_LT_LT;
	v->a[74953] = actions(1315);
	v->a[74954] = 12;
	v->a[74955] = sym_file_descriptor;
	v->a[74956] = sym__concat;
	v->a[74957] = sym_variable_name;
	v->a[74958] = anon_sym_AMP_AMP;
	v->a[74959] = anon_sym_PIPE_PIPE;
	small_parse_table_3748(v);
}

void	small_parse_table_3748(t_small_parse_table_array *v)
{
	v->a[74960] = anon_sym_GT_GT;
	v->a[74961] = anon_sym_AMP_GT_GT;
	v->a[74962] = anon_sym_GT_PIPE;
	v->a[74963] = anon_sym_LT_AMP_DASH;
	v->a[74964] = anon_sym_GT_AMP_DASH;
	v->a[74965] = anon_sym_LT_LT_DASH;
	v->a[74966] = aux_sym_concatenation_token1;
	v->a[74967] = 14;
	v->a[74968] = actions(3);
	v->a[74969] = 1;
	v->a[74970] = sym_comment;
	v->a[74971] = actions(2873);
	v->a[74972] = 1;
	v->a[74973] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74974] = actions(2875);
	v->a[74975] = 1;
	v->a[74976] = anon_sym_DOLLAR;
	v->a[74977] = actions(2877);
	v->a[74978] = 1;
	v->a[74979] = anon_sym_DQUOTE;
	small_parse_table_3749(v);
}

void	small_parse_table_3749(t_small_parse_table_array *v)
{
	v->a[74980] = actions(2879);
	v->a[74981] = 1;
	v->a[74982] = aux_sym_number_token1;
	v->a[74983] = actions(2881);
	v->a[74984] = 1;
	v->a[74985] = aux_sym_number_token2;
	v->a[74986] = actions(2883);
	v->a[74987] = 1;
	v->a[74988] = anon_sym_DOLLAR_LBRACE;
	v->a[74989] = actions(2885);
	v->a[74990] = 1;
	v->a[74991] = anon_sym_DOLLAR_LPAREN;
	v->a[74992] = actions(2887);
	v->a[74993] = 1;
	v->a[74994] = anon_sym_BQUOTE;
	v->a[74995] = actions(2889);
	v->a[74996] = 1;
	v->a[74997] = sym__comment_word;
	v->a[74998] = actions(2891);
	v->a[74999] = 1;
	small_parse_table_3750(v);
}

/* EOF small_parse_table_749.c */
