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
	v->a[74900] = anon_sym_GT_AMP;
	v->a[74901] = anon_sym_GT_PIPE;
	v->a[74902] = anon_sym_LT_GT;
	v->a[74903] = anon_sym_LT_LT_DASH;
	v->a[74904] = 9;
	v->a[74905] = actions(3);
	v->a[74906] = 1;
	v->a[74907] = sym_comment;
	v->a[74908] = actions(1640);
	v->a[74909] = 1;
	v->a[74910] = anon_sym_DOLLAR;
	v->a[74911] = actions(1642);
	v->a[74912] = 1;
	v->a[74913] = anon_sym_DQUOTE;
	v->a[74914] = actions(1644);
	v->a[74915] = 1;
	v->a[74916] = anon_sym_DOLLAR_LBRACE;
	v->a[74917] = actions(1646);
	v->a[74918] = 1;
	v->a[74919] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3746(v);
}

void	small_parse_table_3746(t_small_parse_table_array *v)
{
	v->a[74920] = actions(1648);
	v->a[74921] = 1;
	v->a[74922] = anon_sym_BQUOTE;
	v->a[74923] = actions(3023);
	v->a[74924] = 1;
	v->a[74925] = sym_raw_string;
	v->a[74926] = actions(3021);
	v->a[74927] = 3;
	v->a[74928] = sym_variable_name;
	v->a[74929] = sym__expansion_word;
	v->a[74930] = sym_word;
	v->a[74931] = state(1865);
	v->a[74932] = 4;
	v->a[74933] = sym_string;
	v->a[74934] = sym_simple_expansion;
	v->a[74935] = sym_expansion;
	v->a[74936] = sym_command_substitution;
	v->a[74937] = 7;
	v->a[74938] = actions(3);
	v->a[74939] = 1;
	small_parse_table_3747(v);
}

void	small_parse_table_3747(t_small_parse_table_array *v)
{
	v->a[74940] = sym_comment;
	v->a[74941] = actions(2995);
	v->a[74942] = 1;
	v->a[74943] = aux_sym__simple_variable_name_token1;
	v->a[74944] = actions(2999);
	v->a[74945] = 1;
	v->a[74946] = sym_variable_name;
	v->a[74947] = actions(3025);
	v->a[74948] = 1;
	v->a[74949] = anon_sym_RBRACE;
	v->a[74950] = state(2070);
	v->a[74951] = 1;
	v->a[74952] = sym__expansion_body;
	v->a[74953] = actions(2997);
	v->a[74954] = 2;
	v->a[74955] = anon_sym_0;
	v->a[74956] = anon_sym__;
	v->a[74957] = actions(2993);
	v->a[74958] = 7;
	v->a[74959] = anon_sym_BANG;
	small_parse_table_3748(v);
}

void	small_parse_table_3748(t_small_parse_table_array *v)
{
	v->a[74960] = anon_sym_DASH;
	v->a[74961] = anon_sym_STAR;
	v->a[74962] = anon_sym_QMARK;
	v->a[74963] = anon_sym_DOLLAR;
	v->a[74964] = anon_sym_POUND;
	v->a[74965] = anon_sym_AT;
	v->a[74966] = 3;
	v->a[74967] = actions(664);
	v->a[74968] = 1;
	v->a[74969] = sym_comment;
	v->a[74970] = actions(2017);
	v->a[74971] = 4;
	v->a[74972] = anon_sym_PIPE;
	v->a[74973] = anon_sym_LT;
	v->a[74974] = anon_sym_GT;
	v->a[74975] = anon_sym_LT_LT;
	v->a[74976] = actions(2015);
	v->a[74977] = 9;
	v->a[74978] = sym_file_descriptor;
	v->a[74979] = anon_sym_AMP_AMP;
	small_parse_table_3749(v);
}

void	small_parse_table_3749(t_small_parse_table_array *v)
{
	v->a[74980] = anon_sym_PIPE_PIPE;
	v->a[74981] = anon_sym_GT_GT;
	v->a[74982] = anon_sym_LT_AMP;
	v->a[74983] = anon_sym_GT_AMP;
	v->a[74984] = anon_sym_GT_PIPE;
	v->a[74985] = anon_sym_LT_GT;
	v->a[74986] = anon_sym_LT_LT_DASH;
	v->a[74987] = 7;
	v->a[74988] = actions(3);
	v->a[74989] = 1;
	v->a[74990] = sym_comment;
	v->a[74991] = actions(2995);
	v->a[74992] = 1;
	v->a[74993] = aux_sym__simple_variable_name_token1;
	v->a[74994] = actions(2999);
	v->a[74995] = 1;
	v->a[74996] = sym_variable_name;
	v->a[74997] = actions(3027);
	v->a[74998] = 1;
	v->a[74999] = anon_sym_RBRACE;
	small_parse_table_3750(v);
}

/* EOF small_parse_table_749.c */
