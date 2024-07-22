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
	v->a[74900] = sym_string_content;
	v->a[74901] = actions(2908);
	v->a[74902] = 1;
	v->a[74903] = sym_variable_name;
	v->a[74904] = actions(2906);
	v->a[74905] = 2;
	v->a[74906] = aux_sym__simple_variable_name_token1;
	v->a[74907] = aux_sym__multiline_variable_name_token1;
	v->a[74908] = actions(2900);
	v->a[74909] = 8;
	v->a[74910] = anon_sym_BANG;
	v->a[74911] = anon_sym_DASH;
	v->a[74912] = anon_sym_STAR;
	v->a[74913] = anon_sym_QMARK;
	v->a[74914] = anon_sym_DOLLAR;
	v->a[74915] = anon_sym_POUND;
	v->a[74916] = anon_sym_AT;
	v->a[74917] = anon_sym_0;
	v->a[74918] = 8;
	v->a[74919] = actions(3);
	small_parse_table_3746(v);
}

void	small_parse_table_3746(t_small_parse_table_array *v)
{
	v->a[74920] = 1;
	v->a[74921] = sym_comment;
	v->a[74922] = actions(3040);
	v->a[74923] = 1;
	v->a[74924] = anon_sym_POUND;
	v->a[74925] = actions(3042);
	v->a[74926] = 1;
	v->a[74927] = aux_sym__simple_variable_name_token1;
	v->a[74928] = actions(3044);
	v->a[74929] = 1;
	v->a[74930] = anon_sym_0;
	v->a[74931] = actions(3046);
	v->a[74932] = 1;
	v->a[74933] = sym_variable_name;
	v->a[74934] = actions(3080);
	v->a[74935] = 1;
	v->a[74936] = anon_sym_RBRACE;
	v->a[74937] = state(2121);
	v->a[74938] = 1;
	v->a[74939] = sym__expansion_body;
	small_parse_table_3747(v);
}

void	small_parse_table_3747(t_small_parse_table_array *v)
{
	v->a[74940] = actions(3038);
	v->a[74941] = 6;
	v->a[74942] = anon_sym_BANG;
	v->a[74943] = anon_sym_DASH;
	v->a[74944] = anon_sym_STAR;
	v->a[74945] = anon_sym_QMARK;
	v->a[74946] = anon_sym_DOLLAR;
	v->a[74947] = anon_sym_AT;
	v->a[74948] = 10;
	v->a[74949] = actions(3);
	v->a[74950] = 1;
	v->a[74951] = sym_comment;
	v->a[74952] = actions(3058);
	v->a[74953] = 1;
	v->a[74954] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74955] = actions(3064);
	v->a[74956] = 1;
	v->a[74957] = sym_string_content;
	v->a[74958] = actions(3066);
	v->a[74959] = 1;
	small_parse_table_3748(v);
}

void	small_parse_table_3748(t_small_parse_table_array *v)
{
	v->a[74960] = anon_sym_DOLLAR_LBRACE;
	v->a[74961] = actions(3068);
	v->a[74962] = 1;
	v->a[74963] = anon_sym_DOLLAR_LPAREN;
	v->a[74964] = actions(3070);
	v->a[74965] = 1;
	v->a[74966] = anon_sym_BQUOTE;
	v->a[74967] = actions(3082);
	v->a[74968] = 1;
	v->a[74969] = anon_sym_DOLLAR;
	v->a[74970] = actions(3084);
	v->a[74971] = 1;
	v->a[74972] = anon_sym_DQUOTE;
	v->a[74973] = state(1586);
	v->a[74974] = 1;
	v->a[74975] = aux_sym_string_repeat1;
	v->a[74976] = state(1748);
	v->a[74977] = 4;
	v->a[74978] = sym_arithmetic_expansion;
	v->a[74979] = sym_simple_expansion;
	small_parse_table_3749(v);
}

void	small_parse_table_3749(t_small_parse_table_array *v)
{
	v->a[74980] = sym_expansion;
	v->a[74981] = sym_command_substitution;
	v->a[74982] = 10;
	v->a[74983] = actions(3);
	v->a[74984] = 1;
	v->a[74985] = sym_comment;
	v->a[74986] = actions(3058);
	v->a[74987] = 1;
	v->a[74988] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74989] = actions(3064);
	v->a[74990] = 1;
	v->a[74991] = sym_string_content;
	v->a[74992] = actions(3066);
	v->a[74993] = 1;
	v->a[74994] = anon_sym_DOLLAR_LBRACE;
	v->a[74995] = actions(3068);
	v->a[74996] = 1;
	v->a[74997] = anon_sym_DOLLAR_LPAREN;
	v->a[74998] = actions(3070);
	v->a[74999] = 1;
	small_parse_table_3750(v);
}

/* EOF small_parse_table_749.c */
