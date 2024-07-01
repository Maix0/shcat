/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_829.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4145(t_small_parse_table_array *v)
{
	v->a[82900] = anon_sym_DOLLAR;
	v->a[82901] = anon_sym_POUND;
	v->a[82902] = anon_sym_AT;
	v->a[82903] = anon_sym_0;
	v->a[82904] = anon_sym__;
	v->a[82905] = 6;
	v->a[82906] = actions(3);
	v->a[82907] = 1;
	v->a[82908] = sym_comment;
	v->a[82909] = actions(3191);
	v->a[82910] = 1;
	v->a[82911] = sym_string_content;
	v->a[82912] = actions(3195);
	v->a[82913] = 1;
	v->a[82914] = sym_variable_name;
	v->a[82915] = actions(3248);
	v->a[82916] = 1;
	v->a[82917] = anon_sym_DQUOTE;
	v->a[82918] = actions(3193);
	v->a[82919] = 2;
	small_parse_table_4146(v);
}

void	small_parse_table_4146(t_small_parse_table_array *v)
{
	v->a[82920] = aux_sym__simple_variable_name_token1;
	v->a[82921] = aux_sym__multiline_variable_name_token1;
	v->a[82922] = actions(3187);
	v->a[82923] = 9;
	v->a[82924] = anon_sym_BANG;
	v->a[82925] = anon_sym_DASH;
	v->a[82926] = anon_sym_STAR;
	v->a[82927] = anon_sym_QMARK;
	v->a[82928] = anon_sym_DOLLAR;
	v->a[82929] = anon_sym_POUND;
	v->a[82930] = anon_sym_AT;
	v->a[82931] = anon_sym_0;
	v->a[82932] = anon_sym__;
	v->a[82933] = 3;
	v->a[82934] = actions(870);
	v->a[82935] = 1;
	v->a[82936] = sym_comment;
	v->a[82937] = actions(2337);
	v->a[82938] = 6;
	v->a[82939] = anon_sym_PIPE;
	small_parse_table_4147(v);
}

void	small_parse_table_4147(t_small_parse_table_array *v)
{
	v->a[82940] = anon_sym_LT;
	v->a[82941] = anon_sym_GT;
	v->a[82942] = anon_sym_LT_AMP;
	v->a[82943] = anon_sym_GT_AMP;
	v->a[82944] = anon_sym_LT_LT;
	v->a[82945] = actions(2335);
	v->a[82946] = 8;
	v->a[82947] = sym_file_descriptor;
	v->a[82948] = anon_sym_AMP_AMP;
	v->a[82949] = anon_sym_PIPE_PIPE;
	v->a[82950] = anon_sym_GT_GT;
	v->a[82951] = anon_sym_GT_PIPE;
	v->a[82952] = anon_sym_LT_AMP_DASH;
	v->a[82953] = anon_sym_GT_AMP_DASH;
	v->a[82954] = anon_sym_LT_LT_DASH;
	v->a[82955] = 6;
	v->a[82956] = actions(3);
	v->a[82957] = 1;
	v->a[82958] = sym_comment;
	v->a[82959] = actions(3191);
	small_parse_table_4148(v);
}

void	small_parse_table_4148(t_small_parse_table_array *v)
{
	v->a[82960] = 1;
	v->a[82961] = sym_string_content;
	v->a[82962] = actions(3195);
	v->a[82963] = 1;
	v->a[82964] = sym_variable_name;
	v->a[82965] = actions(3250);
	v->a[82966] = 1;
	v->a[82967] = anon_sym_DQUOTE;
	v->a[82968] = actions(3193);
	v->a[82969] = 2;
	v->a[82970] = aux_sym__simple_variable_name_token1;
	v->a[82971] = aux_sym__multiline_variable_name_token1;
	v->a[82972] = actions(3187);
	v->a[82973] = 9;
	v->a[82974] = anon_sym_BANG;
	v->a[82975] = anon_sym_DASH;
	v->a[82976] = anon_sym_STAR;
	v->a[82977] = anon_sym_QMARK;
	v->a[82978] = anon_sym_DOLLAR;
	v->a[82979] = anon_sym_POUND;
	small_parse_table_4149(v);
}

void	small_parse_table_4149(t_small_parse_table_array *v)
{
	v->a[82980] = anon_sym_AT;
	v->a[82981] = anon_sym_0;
	v->a[82982] = anon_sym__;
	v->a[82983] = 3;
	v->a[82984] = actions(870);
	v->a[82985] = 1;
	v->a[82986] = sym_comment;
	v->a[82987] = actions(2401);
	v->a[82988] = 6;
	v->a[82989] = anon_sym_PIPE;
	v->a[82990] = anon_sym_LT;
	v->a[82991] = anon_sym_GT;
	v->a[82992] = anon_sym_LT_AMP;
	v->a[82993] = anon_sym_GT_AMP;
	v->a[82994] = anon_sym_LT_LT;
	v->a[82995] = actions(2399);
	v->a[82996] = 8;
	v->a[82997] = sym_file_descriptor;
	v->a[82998] = anon_sym_AMP_AMP;
	v->a[82999] = anon_sym_PIPE_PIPE;
	small_parse_table_4150(v);
}

/* EOF small_parse_table_829.c */
